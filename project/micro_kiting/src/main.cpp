#include "sc2api/sc2_api.h"
#include "MicroKitingBot.h"
#include "MicroAgentBot.h"

#include "sc2utils/sc2_arg_parser.h"
#include "sc2utils/sc2_manage_process.h"

#include <thread>

void proc(int argc, char* argv[]){
		for (int i = 0; i < 100; i++) {
		
		sc2::Coordinator coordinator;
		coordinator.LoadSettings(argc, argv);

		coordinator.SetFeatureLayers(sc2::FeatureLayerSettings(24.0f, 64, 64, 64, 64));

		coordinator.SetWindowLocation(800, 100);
		coordinator.SetRealtime(true);

		// 添加自定义bot
		MicroKitingBot bot;
		// MicroAgentBot bot;

		coordinator.SetParticipants({
			CreateParticipant(sc2::Race::Terran, &bot),
			CreateComputer(sc2::Race::Zerg),
			});


		// 启动游戏		
		coordinator.LaunchStarcraft();

		// 加载地图
		//coordinator.StartGame(sc2::kMapMarineMicro);
		coordinator.StartGame("Example/MarineMicro_6enemy.SC2Map");

		while (coordinator.Update()) {
			if (sc2::PollKeyPress()) {
				i = 100;
				break;
			}

			if (bot.get_Game_Ended_()) {
				sc2::renderer::Shutdown();
				// break;
			}
		}
	}
}

//*************************************************************************************************
int main(int argc, char* argv[]) {
	
	using namespace std;

	std::cout << "执行主线程" << std::endl;
	thread th1(proc,argc,argv);
	thread th2(proc,argc,argv);
	th1.join();
	th2.join();


	// for (int i = 0; i < 100; i++) {
	// 	sc2::Coordinator coordinator;
	// 	if (!coordinator.LoadSettings(argc, argv)) {
	// 		return 1;
	// 	}

	// 	coordinator.SetFeatureLayers(sc2::FeatureLayerSettings(24.0f, 64, 64, 64, 64));

	// 	coordinator.SetWindowLocation(800, 100);
	// 	coordinator.SetRealtime(true);

	// 	// 添加自定义bot
	// 	MicroKitingBot bot;
	// 	// MicroAgentBot bot;

	// 	coordinator.SetParticipants({
	// 		CreateParticipant(sc2::Race::Terran, &bot),
	// 		CreateComputer(sc2::Race::Zerg),
	// 		});


	// 	// 启动游戏		
	// 	coordinator.LaunchStarcraft();

	// 	// 加载地图
	// 	//coordinator.StartGame(sc2::kMapMarineMicro);
	// 	coordinator.StartGame("Example/MarineMicro_6enemy.SC2Map");

	// 	while (coordinator.Update()) {
	// 		if (sc2::PollKeyPress()) {
	// 			i = 100;
	// 			break;
	// 		}

	// 		if (bot.get_Game_Ended_()) {
	// 			sc2::renderer::Shutdown();
	// 			break;
	// 		}
	// 	}
	// }

	return 0;
}
