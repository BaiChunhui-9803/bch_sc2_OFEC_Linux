#include "sc2api/sc2_api.h"
#include "MicroKitingBot.h"
#include <iostream>
#include <fstream>

const float kCameraWidth = 24.0f;
const int kFeatureLayerSize = 80;
const int kPixelDrawSize = 5;
const int kDrawSize = kFeatureLayerSize * kPixelDrawSize;

void DrawFeatureLayer1BPP(const SC2APIProtocol::ImageData& image_data, int off_x, int off_y) {
    assert(image_data.bits_per_pixel() == 1);
    int width = image_data.size().x();
    int height = image_data.size().y();
    sc2::renderer::Matrix1BPP(image_data.data().c_str(), width, height, off_x, off_y, kPixelDrawSize, kPixelDrawSize);
}

void DrawFeatureLayerUnits8BPP(const SC2APIProtocol::ImageData& image_data, int off_x, int off_y) {
    assert(image_data.bits_per_pixel() == 8);
    int width = image_data.size().x();
    int height = image_data.size().y();
    sc2::renderer::Matrix8BPPPlayers(image_data.data().c_str(), width, height, off_x, off_y, kPixelDrawSize, kPixelDrawSize);
}

void DrawFeatureLayerHeightMap8BPP(const SC2APIProtocol::ImageData& image_data, int off_x, int off_y) {
    assert(image_data.bits_per_pixel() == 8);
    int width = image_data.size().x();
    int height = image_data.size().y();
    sc2::renderer::Matrix8BPPHeightMap(image_data.data().c_str(), width, height, off_x, off_y, kPixelDrawSize, kPixelDrawSize);
}

namespace sc2 {

	void MicroKitingBot::OnGameStart() {
		move_back_ = false;
		targeted_zergling_ = 0;
		sc2::renderer::Initialize("Feature layers", 50, 50, kDrawSize, kDrawSize);
	}

	void MicroKitingBot::OnStep() {
		const ObservationInterface* observation = Observation();
		ActionInterface* action = Actions();
		
		const SC2APIProtocol::Observation* observation_layer = Observation()->GetRawObservation();

        const SC2APIProtocol::FeatureLayers& m = observation_layer->feature_layer_data().renders();
        DrawFeatureLayerUnits8BPP(m.unit_density(), 0, 0);
        DrawFeatureLayer1BPP(m.selected(), kDrawSize, 0);

        const SC2APIProtocol::FeatureLayersMinimap& mi = observation_layer->feature_layer_data().minimap_renders();
        DrawFeatureLayerHeightMap8BPP(mi.height_map(), 0, kDrawSize);
        DrawFeatureLayer1BPP(mi.camera(), kDrawSize, kDrawSize);

        sc2::renderer::Render();
		Point2D mp, zp;


		if (!GetPosition(UNIT_TYPEID::TERRAN_MARINE, Unit::Alliance::Self, mp)) {
			return;
		}

		if (!GetPosition(UNIT_TYPEID::ZERG_ZERGLING, Unit::Alliance::Enemy, zp)) {
			return;
		}

		if (!GetNearestZergling(mp)) {
			return;
		}

		Units units = observation->GetUnits(Unit::Alliance::Self);
		Units units_enemy = observation->GetUnits(Unit::Alliance::Enemy);
		if (units_enemy.size() == 6) Update_Enemy_Flag = true;
		std::cout << "enemy units number:" << units_enemy.size() << std::endl;
		for (const auto& u : units) {
			switch (static_cast<UNIT_TYPEID>(u->unit_type)) {
			case UNIT_TYPEID::TERRAN_MARINE: {
				if (!move_back_) {
					action->UnitCommand(u, ABILITY_ID::ATTACK, targeted_zergling_);

				}
				else {
					if (Distance2D(mp, backup_target_) < 1.5f) {
						move_back_ = false;
						std::ofstream fout;
						fout.open("D:/bch_sc2_OFEC/sc2api/project/micro_kiting/datafile/kiting_pre_map.txt", std::ios::app);
						fout << backup_target_.x << '\t' << backup_target_.y << '\t';
						fout.close();
					}

					action->UnitCommand(u, ABILITY_ID::SMART, backup_target_);
				}
				break;
			}
			default: {
				break;
			}
			}
		}

		//敌人数量降至0时，因某种原因不再进行OnStep循环，故在1时进行判断
		if (units_enemy.size() == 1 && Update_Enemy_Flag) {
			set_Game_Ended_(sc2::GameResult::Win);
			std::ofstream fout;
			fout.open("D:/bch_sc2_OFEC/sc2api/project/micro_kiting/datafile/kiting_pre_map.txt", std::ios::app);
			fout << std::endl;
			fout.close();
		}
	}

	void MicroKitingBot::OnUnitDestroyed(const Unit* unit) {
		if (unit == targeted_zergling_) {
			Point2D mp, zp;
			if (!GetPosition(UNIT_TYPEID::TERRAN_MARINE, Unit::Alliance::Self, mp)) {
				return;
			}

			if (!GetPosition(UNIT_TYPEID::ZERG_ZERGLING, Unit::Alliance::Enemy, zp)) {
				return;
			}

			Vector2D diff = mp - zp;
			Normalize2D(diff);

			targeted_zergling_ = 0;
			move_back_ = true;
			backup_start_ = mp;
			backup_target_ = mp + diff * 3.0f;
		}
	}

	void MicroKitingBot::OnGameEnd() {
        sc2::renderer::Shutdown();
    }

	bool MicroKitingBot::GetPosition(UNIT_TYPEID unit_type, Unit::Alliance alliace, Point2D& position) {
		const ObservationInterface* observation = Observation();
		Units units = observation->GetUnits(alliace);

		if (units.empty()) {
			return false;
		}

		position = Point2D(0.0f, 0.0f);
		unsigned int count = 0;

		for (const auto& u : units) {
			if (u->unit_type == unit_type) {
				position += u->pos;
				++count;
			}
		}

		position /= (float)count;

		return true;
	}

	bool MicroKitingBot::GetNearestZergling(const Point2D& from) {
		const ObservationInterface* observation = Observation();
		Units units = observation->GetUnits(Unit::Alliance::Enemy);

		if (units.empty()) {
			return false;
		}

		float distance = std::numeric_limits<float>::max();
		for (const auto& u : units) {
			if (u->unit_type == UNIT_TYPEID::ZERG_ZERGLING) {
				float d = DistanceSquared2D(u->pos, from);
				if (d < distance) {
					distance = d;
					targeted_zergling_ = u;
				}
			}
		}

		return true;
	}
}

