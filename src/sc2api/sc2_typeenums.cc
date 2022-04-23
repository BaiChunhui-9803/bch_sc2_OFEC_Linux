#include "sc2api/sc2_typeenums.h"

namespace sc2 {

    const char* UnitTypeToName(UnitTypeID unit_type) {
        switch ((UNIT_TYPEID)unit_type) {
        case UNIT_TYPEID::PROTOSS_COLOSSUS:                 return "PROTOSS_COLOSSUS"; // 1245
        case UNIT_TYPEID::TERRAN_TECHLAB:                   return "TERRAN_TECHLAB"; // 189
        case UNIT_TYPEID::TERRAN_REACTOR:                   return "TERRAN_REACTOR"; // 180
        case UNIT_TYPEID::ZERG_INFESTORTERRAN:              return "ZERG_INFESTORTERRAN"; // 9
        case UNIT_TYPEID::ZERG_BANELINGCOCOON:              return "ZERG_BANELINGCOCOON"; // 1886
        case UNIT_TYPEID::ZERG_BANELING:                    return "ZERG_BANELING"; // 30153
        case UNIT_TYPEID::PROTOSS_MOTHERSHIP:               return "PROTOSS_MOTHERSHIP"; // 112
        case UNIT_TYPEID::TERRAN_POINTDEFENSEDRONE:         return "TERRAN_POINTDEFENSEDRONE"; // 378
        case UNIT_TYPEID::ZERG_CHANGELING:                  return "ZERG_CHANGELING"; // 601
        case UNIT_TYPEID::ZERG_CHANGELINGZEALOT:            return "ZERG_CHANGELINGZEALOT"; // 413
        case UNIT_TYPEID::ZERG_CHANGELINGMARINESHIELD:      return "ZERG_CHANGELINGMARINESHIELD"; // 375
        case UNIT_TYPEID::ZERG_CHANGELINGMARINE:            return "ZERG_CHANGELINGMARINE"; // 189
        case UNIT_TYPEID::ZERG_CHANGELINGZERGLINGWINGS:     return "ZERG_CHANGELINGZERGLINGWINGS"; // 215
        case UNIT_TYPEID::ZERG_CHANGELINGZERGLING:          return "ZERG_CHANGELINGZERGLING"; // 30
        case UNIT_TYPEID::TERRAN_COMMANDCENTER:             return "TERRAN_COMMANDCENTER"; // 6955
        case UNIT_TYPEID::TERRAN_SUPPLYDEPOT:               return "TERRAN_SUPPLYDEPOT"; // 25952
        case UNIT_TYPEID::TERRAN_REFINERY:                  return "TERRAN_REFINERY"; // 16950
        case UNIT_TYPEID::TERRAN_BARRACKS:                  return "TERRAN_BARRACKS"; // 15600
        case UNIT_TYPEID::TERRAN_ENGINEERINGBAY:            return "TERRAN_ENGINEERINGBAY"; // 3581
        case UNIT_TYPEID::TERRAN_MISSILETURRET:             return "TERRAN_MISSILETURRET"; // 12757
        case UNIT_TYPEID::TERRAN_BUNKER:                    return "TERRAN_BUNKER"; // 2500
        case UNIT_TYPEID::TERRAN_SENSORTOWER:               return "TERRAN_SENSORTOWER"; // 888
        case UNIT_TYPEID::TERRAN_GHOSTACADEMY:              return "TERRAN_GHOSTACADEMY"; // 162
        case UNIT_TYPEID::TERRAN_FACTORY:                   return "TERRAN_FACTORY"; // 6092
        case UNIT_TYPEID::TERRAN_STARPORT:                  return "TERRAN_STARPORT"; // 4516
        case UNIT_TYPEID::TERRAN_ARMORY:                    return "TERRAN_ARMORY"; // 1553
        case UNIT_TYPEID::TERRAN_FUSIONCORE:                return "TERRAN_FUSIONCORE"; // 227
        case UNIT_TYPEID::TERRAN_AUTOTURRET:                return "TERRAN_AUTOTURRET"; // 1986
        case UNIT_TYPEID::TERRAN_SIEGETANKSIEGED:           return "TERRAN_SIEGETANKSIEGED"; // 5148
        case UNIT_TYPEID::TERRAN_SIEGETANK:                 return "TERRAN_SIEGETANK"; // 11884
        case UNIT_TYPEID::TERRAN_VIKINGASSAULT:             return "TERRAN_VIKINGASSAULT"; // 259
        case UNIT_TYPEID::TERRAN_VIKINGFIGHTER:             return "TERRAN_VIKINGFIGHTER"; // 9191
        case UNIT_TYPEID::TERRAN_COMMANDCENTERFLYING:       return "TERRAN_COMMANDCENTERFLYING"; // 223
        case UNIT_TYPEID::TERRAN_BARRACKSTECHLAB:           return "TERRAN_BARRACKSTECHLAB"; // 4497
        case UNIT_TYPEID::TERRAN_BARRACKSREACTOR:           return "TERRAN_BARRACKSREACTOR"; // 5718
        case UNIT_TYPEID::TERRAN_FACTORYTECHLAB:            return "TERRAN_FACTORYTECHLAB"; // 3239
        case UNIT_TYPEID::TERRAN_FACTORYREACTOR:            return "TERRAN_FACTORYREACTOR"; // 1522
        case UNIT_TYPEID::TERRAN_STARPORTTECHLAB:           return "TERRAN_STARPORTTECHLAB"; // 1219
        case UNIT_TYPEID::TERRAN_STARPORTREACTOR:           return "TERRAN_STARPORTREACTOR"; // 1775
        case UNIT_TYPEID::TERRAN_FACTORYFLYING:             return "TERRAN_FACTORYFLYING"; // 79
        case UNIT_TYPEID::TERRAN_STARPORTFLYING:            return "TERRAN_STARPORTFLYING"; // 57
        case UNIT_TYPEID::TERRAN_SCV:                       return "TERRAN_SCV"; // 1356088
        case UNIT_TYPEID::TERRAN_BARRACKSFLYING:            return "TERRAN_BARRACKSFLYING"; // 253
        case UNIT_TYPEID::TERRAN_SUPPLYDEPOTLOWERED:        return "TERRAN_SUPPLYDEPOTLOWERED"; // 6938
        case UNIT_TYPEID::TERRAN_MARINE:                    return "TERRAN_MARINE"; // 176259
        case UNIT_TYPEID::TERRAN_REAPER:                    return "TERRAN_REAPER"; // 4461
        case UNIT_TYPEID::TERRAN_GHOST:                     return "TERRAN_GHOST"; // 501
        case UNIT_TYPEID::TERRAN_MARAUDER:                  return "TERRAN_MARAUDER"; // 27433
        case UNIT_TYPEID::TERRAN_THOR:                      return "TERRAN_THOR"; // 1578
        case UNIT_TYPEID::TERRAN_HELLION:                   return "TERRAN_HELLION"; // 9600
        case UNIT_TYPEID::TERRAN_MEDIVAC:                   return "TERRAN_MEDIVAC"; // 20578
        case UNIT_TYPEID::TERRAN_BANSHEE:                   return "TERRAN_BANSHEE"; // 3058
        case UNIT_TYPEID::TERRAN_RAVEN:                     return "TERRAN_RAVEN"; // 3284
        case UNIT_TYPEID::TERRAN_BATTLECRUISER:             return "TERRAN_BATTLECRUISER"; // 1005
        case UNIT_TYPEID::TERRAN_NUKE:                      return "TERRAN_NUKE"; // 56
        case UNIT_TYPEID::PROTOSS_NEXUS:                    return "PROTOSS_NEXUS"; // 11057
        case UNIT_TYPEID::PROTOSS_PYLON:                    return "PROTOSS_PYLON"; // 34699
        case UNIT_TYPEID::PROTOSS_ASSIMILATOR:              return "PROTOSS_ASSIMILATOR"; // 14903
        case UNIT_TYPEID::PROTOSS_GATEWAY:                  return "PROTOSS_GATEWAY"; // 9729
        case UNIT_TYPEID::PROTOSS_FORGE:                    return "PROTOSS_FORGE"; // 2643
        case UNIT_TYPEID::PROTOSS_FLEETBEACON:              return "PROTOSS_FLEETBEACON"; // 337
        case UNIT_TYPEID::PROTOSS_TWILIGHTCOUNCIL:          return "PROTOSS_TWILIGHTCOUNCIL"; // 1677
        case UNIT_TYPEID::PROTOSS_PHOTONCANNON:             return "PROTOSS_PHOTONCANNON"; // 8601
        case UNIT_TYPEID::PROTOSS_SHIELDBATTERY:            return "PROTOSS_SHIELDBATTERY"; // 8601
        case UNIT_TYPEID::PROTOSS_STARGATE:                 return "PROTOSS_STARGATE"; // 2286
        case UNIT_TYPEID::PROTOSS_TEMPLARARCHIVE:           return "PROTOSS_TEMPLARARCHIVE"; // 342
        case UNIT_TYPEID::PROTOSS_DARKSHRINE:               return "PROTOSS_DARKSHRINE"; // 408
        case UNIT_TYPEID::PROTOSS_ROBOTICSBAY:              return "PROTOSS_ROBOTICSBAY"; // 512
        case UNIT_TYPEID::PROTOSS_ROBOTICSFACILITY:         return "PROTOSS_ROBOTICSFACILITY"; // 2565
        case UNIT_TYPEID::PROTOSS_CYBERNETICSCORE:          return "PROTOSS_CYBERNETICSCORE"; // 4325
        case UNIT_TYPEID::PROTOSS_ZEALOT:                   return "PROTOSS_ZEALOT"; // 18426
        case UNIT_TYPEID::PROTOSS_STALKER:                  return "PROTOSS_STALKER"; // 33942
        case UNIT_TYPEID::PROTOSS_HIGHTEMPLAR:              return "PROTOSS_HIGHTEMPLAR"; // 4031
        case UNIT_TYPEID::PROTOSS_DARKTEMPLAR:              return "PROTOSS_DARKTEMPLAR"; // 2767
        case UNIT_TYPEID::PROTOSS_SENTRY:                   return "PROTOSS_SENTRY"; // 3949
        case UNIT_TYPEID::PROTOSS_PHOENIX:                  return "PROTOSS_PHOENIX"; // 2402
        case UNIT_TYPEID::PROTOSS_CARRIER:                  return "PROTOSS_CARRIER"; // 4336
        case UNIT_TYPEID::PROTOSS_VOIDRAY:                  return "PROTOSS_VOIDRAY"; // 5642
        case UNIT_TYPEID::PROTOSS_WARPPRISM:                return "PROTOSS_WARPPRISM"; // 1106
        case UNIT_TYPEID::PROTOSS_OBSERVER:                 return "PROTOSS_OBSERVER"; // 2297
        case UNIT_TYPEID::PROTOSS_IMMORTAL:                 return "PROTOSS_IMMORTAL"; // 4163
        case UNIT_TYPEID::PROTOSS_PROBE:                    return "PROTOSS_PROBE"; // 1012678
        case UNIT_TYPEID::PROTOSS_INTERCEPTOR:              return "PROTOSS_INTERCEPTOR"; // 48082
        case UNIT_TYPEID::ZERG_HATCHERY:                    return "ZERG_HATCHERY"; // 14783
        case UNIT_TYPEID::ZERG_CREEPTUMOR:                  return "ZERG_CREEPTUMOR"; // 11033
        case UNIT_TYPEID::ZERG_EXTRACTOR:                   return "ZERG_EXTRACTOR"; // 16391
        case UNIT_TYPEID::ZERG_SPAWNINGPOOL:                return "ZERG_SPAWNINGPOOL"; // 3984
        case UNIT_TYPEID::ZERG_EVOLUTIONCHAMBER:            return "ZERG_EVOLUTIONCHAMBER"; // 3900
        case UNIT_TYPEID::ZERG_HYDRALISKDEN:                return "ZERG_HYDRALISKDEN"; // 878
        case UNIT_TYPEID::ZERG_SPIRE:                       return "ZERG_SPIRE"; // 799
        case UNIT_TYPEID::ZERG_ULTRALISKCAVERN:             return "ZERG_ULTRALISKCAVERN"; // 179
        case UNIT_TYPEID::ZERG_INFESTATIONPIT:              return "ZERG_INFESTATIONPIT"; // 729
        case UNIT_TYPEID::ZERG_NYDUSNETWORK:                return "ZERG_NYDUSNETWORK"; // 118
        case UNIT_TYPEID::ZERG_BANELINGNEST:                return "ZERG_BANELINGNEST"; // 1718
        case UNIT_TYPEID::ZERG_ROACHWARREN:                 return "ZERG_ROACHWARREN"; // 1774
        case UNIT_TYPEID::ZERG_SPINECRAWLER:                return "ZERG_SPINECRAWLER"; // 5073
        case UNIT_TYPEID::ZERG_SPORECRAWLER:                return "ZERG_SPORECRAWLER"; // 6717
        case UNIT_TYPEID::ZERG_LAIR:                        return "ZERG_LAIR"; // 1335
        case UNIT_TYPEID::ZERG_HIVE:                        return "ZERG_HIVE"; // 176
        case UNIT_TYPEID::ZERG_GREATERSPIRE:                return "ZERG_GREATERSPIRE"; // 19
        case UNIT_TYPEID::ZERG_EGG:                         return "ZERG_EGG"; // 9930
        case UNIT_TYPEID::ZERG_DRONE:                       return "ZERG_DRONE"; // 1230660
        case UNIT_TYPEID::ZERG_ZERGLING:                    return "ZERG_ZERGLING"; // 201575
        case UNIT_TYPEID::ZERG_OVERLORD:                    return "ZERG_OVERLORD"; // 34652
        case UNIT_TYPEID::ZERG_HYDRALISK:                   return "ZERG_HYDRALISK"; // 34836
        case UNIT_TYPEID::ZERG_MUTALISK:                    return "ZERG_MUTALISK"; // 13423
        case UNIT_TYPEID::ZERG_ULTRALISK:                   return "ZERG_ULTRALISK"; // 2104
        case UNIT_TYPEID::ZERG_ROACH:                       return "ZERG_ROACH"; // 47483
        case UNIT_TYPEID::ZERG_INFESTOR:                    return "ZERG_INFESTOR"; // 1156
        case UNIT_TYPEID::ZERG_CORRUPTOR:                   return "ZERG_CORRUPTOR"; // 5346
        case UNIT_TYPEID::ZERG_BROODLORDCOCOON:             return "ZERG_BROODLORDCOCOON"; // 38
        case UNIT_TYPEID::ZERG_BROODLORD:                   return "ZERG_BROODLORD"; // 1250
        case UNIT_TYPEID::ZERG_BANELINGBURROWED:            return "ZERG_BANELINGBURROWED"; // 2
        case UNIT_TYPEID::ZERG_DRONEBURROWED:               return "ZERG_DRONEBURROWED"; // 33
        case UNIT_TYPEID::ZERG_HYDRALISKBURROWED:           return "ZERG_HYDRALISKBURROWED"; // 1
        case UNIT_TYPEID::ZERG_ROACHBURROWED:               return "ZERG_ROACHBURROWED"; // 202
        case UNIT_TYPEID::ZERG_ZERGLINGBURROWED:            return "ZERG_ZERGLINGBURROWED"; // 76
        case UNIT_TYPEID::ZERG_QUEENBURROWED:               return "ZERG_QUEENBURROWED"; // 1
        case UNIT_TYPEID::ZERG_QUEEN:                       return "ZERG_QUEEN"; // 12086
        case UNIT_TYPEID::ZERG_INFESTORBURROWED:            return "ZERG_INFESTORBURROWED"; // 364
        case UNIT_TYPEID::ZERG_OVERLORDCOCOON:              return "ZERG_OVERLORDCOCOON"; // 73
        case UNIT_TYPEID::ZERG_OVERSEER:                    return "ZERG_OVERSEER"; // 3891
        case UNIT_TYPEID::TERRAN_PLANETARYFORTRESS:         return "TERRAN_PLANETARYFORTRESS"; // 1036
        case UNIT_TYPEID::TERRAN_ORBITALCOMMAND:            return "TERRAN_ORBITALCOMMAND"; // 6877
        case UNIT_TYPEID::PROTOSS_WARPGATE:                 return "PROTOSS_WARPGATE"; // 7589
        case UNIT_TYPEID::TERRAN_ORBITALCOMMANDFLYING:      return "TERRAN_ORBITALCOMMANDFLYING"; // 333
        case UNIT_TYPEID::NEUTRAL_FORCEFIELD:               return "NEUTRAL_FORCEFIELD"; // 1887
        case UNIT_TYPEID::PROTOSS_WARPPRISMPHASING:         return "PROTOSS_WARPPRISMPHASING"; // 160
        case UNIT_TYPEID::ZERG_CREEPTUMORBURROWED:          return "ZERG_CREEPTUMORBURROWED"; // 9990
        case UNIT_TYPEID::ZERG_CREEPTUMORQUEEN:             return "ZERG_CREEPTUMORQUEEN"; // 5400
        case UNIT_TYPEID::ZERG_SPINECRAWLERUPROOTED:        return "ZERG_SPINECRAWLERUPROOTED"; // 131
        case UNIT_TYPEID::ZERG_SPORECRAWLERUPROOTED:        return "ZERG_SPORECRAWLERUPROOTED"; // 65
        case UNIT_TYPEID::PROTOSS_ARCHON:                   return "PROTOSS_ARCHON"; // 2717
        case UNIT_TYPEID::ZERG_NYDUSCANAL:                  return "ZERG_NYDUSCANAL"; // 186
        case UNIT_TYPEID::NEUTRAL_RICHMINERALFIELD:         return "NEUTRAL_RICHMINERALFIELD"; // 50202
        case UNIT_TYPEID::NEUTRAL_RICHMINERALFIELD750:      return "NEUTRAL_RICHMINERALFIELD750"; // 44938
        case UNIT_TYPEID::NEUTRAL_XELNAGATOWER:             return "NEUTRAL_XELNAGATOWER"; // 20091
        case UNIT_TYPEID::ZERG_INFESTEDTERRANSEGG:          return "ZERG_INFESTEDTERRANSEGG"; // 581
        case UNIT_TYPEID::ZERG_LARVA:                       return "ZERG_LARVA"; // 168703
        case UNIT_TYPEID::TERRAN_MULE:                      return "TERRAN_MULE"; // 14571
        case UNIT_TYPEID::ZERG_BROODLING:                   return "ZERG_BROODLING"; // 27568
        case UNIT_TYPEID::PROTOSS_ADEPT:                    return "PROTOSS_ADEPT"; // 20314
        case UNIT_TYPEID::NEUTRAL_KARAKFEMALE:              return "NEUTRAL_KARAKFEMALE"; // 2108
        case UNIT_TYPEID::NEUTRAL_UTILITYBOT:               return "NEUTRAL_UTILITYBOT"; // 8361
        case UNIT_TYPEID::NEUTRAL_SCANTIPEDE:               return "NEUTRAL_SCANTIPEDE"; // 4099
        case UNIT_TYPEID::NEUTRAL_MINERALFIELD:             return "NEUTRAL_MINERALFIELD"; // 390665
        case UNIT_TYPEID::NEUTRAL_VESPENEGEYSER:            return "NEUTRAL_VESPENEGEYSER"; // 101010
        case UNIT_TYPEID::NEUTRAL_SPACEPLATFORMGEYSER:      return "NEUTRAL_SPACEPLATFORMGEYSER"; // 93069
        case UNIT_TYPEID::NEUTRAL_DESTRUCTIBLEDEBRIS6X6:    return "NEUTRAL_DESTRUCTIBLEDEBRIS6X6"; // 23163
        case UNIT_TYPEID::NEUTRAL_DESTRUCTIBLEROCK6X6:      return "NEUTRAL_DESTRUCTIBLEROCK6X6"; // 11949
        case UNIT_TYPEID::NEUTRAL_DESTRUCTIBLEDEBRISRAMPDIAGONALHUGEULBR: return "NEUTRAL_DESTRUCTIBLEDEBRISRAMPDIAGONALHUGEULBR"; // 11209
        case UNIT_TYPEID::NEUTRAL_DESTRUCTIBLEDEBRISRAMPDIAGONALHUGEBLUR: return "NEUTRAL_DESTRUCTIBLEDEBRISRAMPDIAGONALHUGEBLUR"; // 8873
        case UNIT_TYPEID::NEUTRAL_UNBUILDABLEBRICKSDESTRUCTIBLE: return "NEUTRAL_UNBUILDABLEBRICKSDESTRUCTIBLE"; // 19305
        case UNIT_TYPEID::NEUTRAL_UNBUILDABLEPLATESDESTRUCTIBLE: return "NEUTRAL_UNBUILDABLEPLATESDESTRUCTIBLE"; // 20436
        case UNIT_TYPEID::NEUTRAL_MINERALFIELD750:          return "NEUTRAL_MINERALFIELD750"; // 365675
        case UNIT_TYPEID::TERRAN_HELLIONTANK:               return "TERRAN_HELLIONTANK"; // 3504
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERDEBRIS: return "NEUTRAL_COLLAPSIBLETERRANTOWERDEBRIS"; // 98
        case UNIT_TYPEID::NEUTRAL_DEBRISRAMPLEFT:           return "NEUTRAL_DEBRISRAMPLEFT"; // 178
        case UNIT_TYPEID::NEUTRAL_DEBRISRAMPRIGHT:          return "NEUTRAL_DEBRISRAMPRIGHT"; // 61
        case UNIT_TYPEID::PROTOSS_MOTHERSHIPCORE:           return "PROTOSS_MOTHERSHIPCORE"; // 3020
        case UNIT_TYPEID::ZERG_LOCUSTMP:                    return "ZERG_LOCUSTMP"; // 3152
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLEROCKTOWERDEBRIS: return "NEUTRAL_COLLAPSIBLEROCKTOWERDEBRIS"; // 11
        case UNIT_TYPEID::ZERG_SWARMHOSTBURROWEDMP:         return "ZERG_SWARMHOSTBURROWEDMP"; // 89
        case UNIT_TYPEID::ZERG_SWARMHOSTMP:                 return "ZERG_SWARMHOSTMP"; // 2145
        case UNIT_TYPEID::PROTOSS_ORACLE:                   return "PROTOSS_ORACLE"; // 1105
        case UNIT_TYPEID::PROTOSS_TEMPEST:                  return "PROTOSS_TEMPEST"; // 640
        case UNIT_TYPEID::TERRAN_WIDOWMINE:                 return "TERRAN_WIDOWMINE"; // 6217
        case UNIT_TYPEID::ZERG_VIPER:                       return "ZERG_VIPER"; // 733
        case UNIT_TYPEID::TERRAN_WIDOWMINEBURROWED:         return "TERRAN_WIDOWMINEBURROWED"; // 1537
        case UNIT_TYPEID::ZERG_LURKERMPEGG:                 return "ZERG_LURKERMPEGG"; // 68
        case UNIT_TYPEID::ZERG_LURKERMP:                    return "ZERG_LURKERMP"; // 1175
        case UNIT_TYPEID::ZERG_LURKERMPBURROWED:            return "ZERG_LURKERMPBURROWED"; // 542
        case UNIT_TYPEID::ZERG_LURKERDENMP:                 return "ZERG_LURKERDENMP"; // 61
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNITRAMPLEFT: return "NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNITRAMPLEFT"; // 40
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNITRAMPRIGHT: return "NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNITRAMPRIGHT"; // 16
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLEROCKTOWERPUSHUNIT: return "NEUTRAL_COLLAPSIBLEROCKTOWERPUSHUNIT"; // 4
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNIT: return "NEUTRAL_COLLAPSIBLETERRANTOWERPUSHUNIT"; // 31
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLEROCKTOWERDIAGONAL: return "NEUTRAL_COLLAPSIBLEROCKTOWERDIAGONAL"; // 2156
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERDIAGONAL: return "NEUTRAL_COLLAPSIBLETERRANTOWERDIAGONAL"; // 1836
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERRAMPLEFT: return "NEUTRAL_COLLAPSIBLETERRANTOWERRAMPLEFT"; // 6039
        case UNIT_TYPEID::NEUTRAL_COLLAPSIBLETERRANTOWERRAMPRIGHT: return "NEUTRAL_COLLAPSIBLETERRANTOWERRAMPRIGHT"; // 4275
        case UNIT_TYPEID::NEUTRAL_PROTOSSVESPENEGEYSER:     return "NEUTRAL_PROTOSSVESPENEGEYSER"; // 87822
        case UNIT_TYPEID::NEUTRAL_DESTRUCTIBLEROCKEX1DIAGONALHUGEBLUR: return "NEUTRAL_DESTRUCTIBLEROCKEX1DIAGONALHUGEBLUR"; // 2871
        case UNIT_TYPEID::NEUTRAL_LABMINERALFIELD:          return "NEUTRAL_LABMINERALFIELD"; // 64007
        case UNIT_TYPEID::NEUTRAL_LABMINERALFIELD750:       return "NEUTRAL_LABMINERALFIELD750"; // 63041
        case UNIT_TYPEID::ZERG_RAVAGERCOCOON:               return "ZERG_RAVAGERCOCOON"; // 146
        case UNIT_TYPEID::ZERG_RAVAGER:                     return "ZERG_RAVAGER"; // 3880
        case UNIT_TYPEID::TERRAN_LIBERATOR:                 return "TERRAN_LIBERATOR"; // 4775
        case UNIT_TYPEID::TERRAN_THORAP:                    return "TERRAN_THORAP"; // 98
        case UNIT_TYPEID::TERRAN_CYCLONE:                   return "TERRAN_CYCLONE"; // 3301
        case UNIT_TYPEID::ZERG_LOCUSTMPFLYING:              return "ZERG_LOCUSTMPFLYING"; // 1490
        case UNIT_TYPEID::PROTOSS_DISRUPTOR:                return "PROTOSS_DISRUPTOR"; // 1020
        case UNIT_TYPEID::PROTOSS_ORACLESTASISTRAP:         return "PROTOSS_ORACLESTASISTRAP"; // 183
        case UNIT_TYPEID::PROTOSS_DISRUPTORPHASED:          return "PROTOSS_DISRUPTORPHASED"; // 842
        case UNIT_TYPEID::TERRAN_LIBERATORAG:               return "TERRAN_LIBERATORAG"; // 784
        case UNIT_TYPEID::PROTOSS_ADEPTPHASESHIFT:          return "PROTOSS_ADEPTPHASESHIFT"; // 7996
        case UNIT_TYPEID::ZERG_PARASITICBOMBDUMMY:          return "ZERG_PARASITICBOMBDUMMY"; // 41
        case UNIT_TYPEID::TERRAN_KD8CHARGE:                 return "TERRAN_KD8CHARGE"; // 4738
        case UNIT_TYPEID::ZERG_TRANSPORTOVERLORDCOCOON:     return "ZERG_TRANSPORTOVERLORDCOCOON"; // 8
        case UNIT_TYPEID::ZERG_OVERLORDTRANSPORT:           return "ZERG_OVERLORDTRANSPORT"; // 236
        case UNIT_TYPEID::PROTOSS_PYLONOVERCHARGED:         return "PROTOSS_PYLONOVERCHARGED"; // 216
        }

        return "UNKNOWN";
    };

    const char* AbilityTypeToName(AbilityID ability_type) {
        switch ((ABILITY_ID)ability_type) {
        case ABILITY_ID::SMART:                             return "SMART"; // 1382002
        case ABILITY_ID::STOP_STOP:                         return "STOP_STOP"; // 5288
        case ABILITY_ID::STOP_CHEER:                        return "STOP_CHEER"; // 2
        case ABILITY_ID::STOP_DANCE:                        return "STOP_DANCE"; // 7
        case ABILITY_ID::MOVE:                              return "MOVE"; // 255
        case ABILITY_ID::PATROL:                            return "PATROL"; // 1649
        case ABILITY_ID::HOLDPOSITION:                      return "HOLDPOSITION"; // 4362
        case ABILITY_ID::SCAN_MOVE:                         return "SCAN_MOVE"; // 1373
        case ABILITY_ID::ATTACK_ATTACK:                     return "ATTACK_ATTACK"; // 210140
        case ABILITY_ID::EFFECT_SPRAY_TERRAN:               return "EFFECT_SPRAY_TERRAN"; // 12
        case ABILITY_ID::EFFECT_SPRAY_ZERG:                 return "EFFECT_SPRAY_ZERG"; // 3
        case ABILITY_ID::EFFECT_SPRAY_PROTOSS:              return "EFFECT_SPRAY_PROTOSS"; // 4
        case ABILITY_ID::EFFECT_SALVAGE:                    return "EFFECT_SALVAGE"; // 151
        case ABILITY_ID::BEHAVIOR_HOLDFIREON_GHOST:         return "BEHAVIOR_HOLDFIREON_GHOST"; // 6
        case ABILITY_ID::EFFECT_EXPLODE:                    return "EFFECT_EXPLODE"; // 107
        case ABILITY_ID::RESEARCH_INTERCEPTORGRAVITONCATAPULT: return "RESEARCH_INTERCEPTORGRAVITONCATAPULT"; // 77
        case ABILITY_ID::RESEARCH_PHOENIXANIONPULSECRYSTALS: return "RESEARCH_PHOENIXANIONPULSECRYSTALS"; // 16
        case ABILITY_ID::EFFECT_FUNGALGROWTH:               return "EFFECT_FUNGALGROWTH"; // 389
        case ABILITY_ID::EFFECT_GUARDIANSHIELD:             return "EFFECT_GUARDIANSHIELD"; // 360
        case ABILITY_ID::EFFECT_REPAIR_MULE:                return "EFFECT_REPAIR_MULE"; // 22
        case ABILITY_ID::TRAIN_BANELING:                    return "TRAIN_BANELING"; // 14152
        case ABILITY_ID::EFFECT_FEEDBACK:                   return "EFFECT_FEEDBACK"; // 78
        case ABILITY_ID::EFFECT_POINTDEFENSEDRONE:          return "EFFECT_POINTDEFENSEDRONE"; // 203
        case ABILITY_ID::HALLUCINATION_ARCHON:              return "HALLUCINATION_ARCHON"; // 1
        case ABILITY_ID::HALLUCINATION_COLOSSUS:            return "HALLUCINATION_COLOSSUS"; // 9
        case ABILITY_ID::HALLUCINATION_HIGHTEMPLAR:         return "HALLUCINATION_HIGHTEMPLAR"; // 1
        case ABILITY_ID::HALLUCINATION_IMMORTAL:            return "HALLUCINATION_IMMORTAL"; // 2
        case ABILITY_ID::HALLUCINATION_PHOENIX:             return "HALLUCINATION_PHOENIX"; // 99
        case ABILITY_ID::HALLUCINATION_PROBE:               return "HALLUCINATION_PROBE"; // 3
        case ABILITY_ID::HALLUCINATION_STALKER:             return "HALLUCINATION_STALKER"; // 1
        case ABILITY_ID::HALLUCINATION_VOIDRAY:             return "HALLUCINATION_VOIDRAY"; // 1
        case ABILITY_ID::HALLUCINATION_WARPPRISM:           return "HALLUCINATION_WARPPRISM"; // 1
        case ABILITY_ID::HALLUCINATION_ZEALOT:              return "HALLUCINATION_ZEALOT"; // 1
        case ABILITY_ID::HARVEST_RETURN_MULE:               return "HARVEST_RETURN_MULE"; // 1
        case ABILITY_ID::EFFECT_HUNTERSEEKERMISSILE:        return "EFFECT_HUNTERSEEKERMISSILE"; // 188
        case ABILITY_ID::EFFECT_CALLDOWNMULE:               return "EFFECT_CALLDOWNMULE"; // 11481
        case ABILITY_ID::EFFECT_GRAVITONBEAM:               return "EFFECT_GRAVITONBEAM"; // 807
        case ABILITY_ID::CANCEL_GRAVITONBEAM:               return "CANCEL_GRAVITONBEAM"; // 18
        case ABILITY_ID::EFFECT_SPAWNCHANGELING:            return "EFFECT_SPAWNCHANGELING"; // 724
        case ABILITY_ID::RALLY_BUILDING:                    return "RALLY_BUILDING"; // 632
        case ABILITY_ID::RALLY_MORPHING_UNIT:               return "RALLY_MORPHING_UNIT"; // 7
        case ABILITY_ID::RALLY_COMMANDCENTER:               return "RALLY_COMMANDCENTER"; // 651
        case ABILITY_ID::RALLY_NEXUS:                       return "RALLY_NEXUS"; // 206
        case ABILITY_ID::RALLY_HATCHERY_WORKERS:            return "RALLY_HATCHERY_WORKERS"; // 387
        case ABILITY_ID::RALLY_HATCHERY_UNITS:              return "RALLY_HATCHERY_UNITS"; // 485
        case ABILITY_ID::RESEARCH_GLIALREGENERATION:        return "RESEARCH_GLIALREGENERATION"; // 340
        case ABILITY_ID::RESEARCH_TUNNELINGCLAWS:           return "RESEARCH_TUNNELINGCLAWS"; // 46
        case ABILITY_ID::EFFECT_INFESTEDTERRANS:            return "EFFECT_INFESTEDTERRANS"; // 494
        case ABILITY_ID::EFFECT_NEURALPARASITE:             return "EFFECT_NEURALPARASITE"; // 11
        case ABILITY_ID::EFFECT_INJECTLARVA:                return "EFFECT_INJECTLARVA"; // 28721
        case ABILITY_ID::EFFECT_STIM_MARAUDER:              return "EFFECT_STIM_MARAUDER"; // 280
        case ABILITY_ID::EFFECT_SUPPLYDROP:                 return "EFFECT_SUPPLYDROP"; // 756
        case ABILITY_ID::EFFECT_CHRONOBOOST:                return "EFFECT_CHRONOBOOST"; // 3414
        case ABILITY_ID::RESEARCH_CHITINOUSPLATING:         return "RESEARCH_CHITINOUSPLATING"; // 85
        case ABILITY_ID::HARVEST_GATHER_SCV:                return "HARVEST_GATHER_SCV"; // 207
        case ABILITY_ID::HARVEST_RETURN_SCV:                return "HARVEST_RETURN_SCV"; // 1388
        case ABILITY_ID::HARVEST_GATHER_PROBE:              return "HARVEST_GATHER_PROBE"; // 246
        case ABILITY_ID::HARVEST_RETURN_PROBE:              return "HARVEST_RETURN_PROBE"; // 1146
        case ABILITY_ID::CANCEL_QUEUE1:                     return "CANCEL_QUEUE1"; // 235
        case ABILITY_ID::CANCELSLOT_QUEUE1:                 return "CANCELSLOT_QUEUE1"; // 3
        case ABILITY_ID::CANCEL_QUEUE5:                     return "CANCEL_QUEUE5"; // 3011
        case ABILITY_ID::CANCELSLOT_QUEUE5:                 return "CANCELSLOT_QUEUE5"; // 653
        case ABILITY_ID::CANCEL_QUEUECANCELTOSELECTION:     return "CANCEL_QUEUECANCELTOSELECTION"; // 1345
        case ABILITY_ID::CANCELSLOT_QUEUECANCELTOSELECTION: return "CANCELSLOT_QUEUECANCELTOSELECTION"; // 438
        case ABILITY_ID::CANCEL_QUEUEADDON:                 return "CANCEL_QUEUEADDON"; // 31
        case ABILITY_ID::CANCELSLOT_ADDON:                  return "CANCELSLOT_ADDON"; // 10
        case ABILITY_ID::CANCEL_BUILDINPROGRESS:            return "CANCEL_BUILDINPROGRESS"; // 1289
        case ABILITY_ID::HALT_BUILDING:                     return "HALT_BUILDING"; // 16
        case ABILITY_ID::EFFECT_REPAIR_SCV:                 return "EFFECT_REPAIR_SCV"; // 885
        case ABILITY_ID::BUILD_COMMANDCENTER:               return "BUILD_COMMANDCENTER"; // 2738
        case ABILITY_ID::BUILD_SUPPLYDEPOT:                 return "BUILD_SUPPLYDEPOT"; // 11381
        case ABILITY_ID::BUILD_REFINERY:                    return "BUILD_REFINERY"; // 5024
        case ABILITY_ID::BUILD_BARRACKS:                    return "BUILD_BARRACKS"; // 4240
        case ABILITY_ID::BUILD_ENGINEERINGBAY:              return "BUILD_ENGINEERINGBAY"; // 1347
        case ABILITY_ID::BUILD_MISSILETURRET:               return "BUILD_MISSILETURRET"; // 4363
        case ABILITY_ID::BUILD_BUNKER:                      return "BUILD_BUNKER"; // 666
        case ABILITY_ID::BUILD_SENSORTOWER:                 return "BUILD_SENSORTOWER"; // 300
        case ABILITY_ID::BUILD_GHOSTACADEMY:                return "BUILD_GHOSTACADEMY"; // 89
        case ABILITY_ID::BUILD_FACTORY:                     return "BUILD_FACTORY"; // 1696
        case ABILITY_ID::BUILD_STARPORT:                    return "BUILD_STARPORT"; // 1556
        case ABILITY_ID::BUILD_ARMORY:                      return "BUILD_ARMORY"; // 756
        case ABILITY_ID::BUILD_FUSIONCORE:                  return "BUILD_FUSIONCORE"; // 119
        case ABILITY_ID::HALT_TERRANBUILD:                  return "HALT_TERRANBUILD"; // 166
        case ABILITY_ID::EFFECT_STIM_MARINE:                return "EFFECT_STIM_MARINE"; // 6071
        case ABILITY_ID::BEHAVIOR_CLOAKON_GHOST:            return "BEHAVIOR_CLOAKON_GHOST"; // 67
        case ABILITY_ID::BEHAVIOR_CLOAKOFF_GHOST:           return "BEHAVIOR_CLOAKOFF_GHOST"; // 12
        case ABILITY_ID::EFFECT_HEAL:                       return "EFFECT_HEAL"; // 2
        case ABILITY_ID::MORPH_SIEGEMODE:                   return "MORPH_SIEGEMODE"; // 5337
        case ABILITY_ID::MORPH_UNSIEGE:                     return "MORPH_UNSIEGE"; // 2300
        case ABILITY_ID::BEHAVIOR_CLOAKON_BANSHEE:          return "BEHAVIOR_CLOAKON_BANSHEE"; // 385
        case ABILITY_ID::BEHAVIOR_CLOAKOFF_BANSHEE:         return "BEHAVIOR_CLOAKOFF_BANSHEE"; // 115
        case ABILITY_ID::LOAD_MEDIVAC:                      return "LOAD_MEDIVAC"; // 14
        case ABILITY_ID::UNLOADALLAT_MEDIVAC:               return "UNLOADALLAT_MEDIVAC"; // 3694
        case ABILITY_ID::UNLOADUNIT_MEDIVAC:                return "UNLOADUNIT_MEDIVAC"; // 266
        case ABILITY_ID::EFFECT_SCAN:                       return "EFFECT_SCAN"; // 4636
        case ABILITY_ID::EFFECT_YAMATOGUN:                  return "EFFECT_YAMATOGUN"; // 404
        case ABILITY_ID::MORPH_VIKINGASSAULTMODE:           return "MORPH_VIKINGASSAULTMODE"; // 432
        case ABILITY_ID::MORPH_VIKINGFIGHTERMODE:           return "MORPH_VIKINGFIGHTERMODE"; // 134
        case ABILITY_ID::LOAD_BUNKER:                       return "LOAD_BUNKER"; // 2
        case ABILITY_ID::UNLOADALL_BUNKER:                  return "UNLOADALL_BUNKER"; // 366
        case ABILITY_ID::UNLOADUNIT_BUNKER:                 return "UNLOADUNIT_BUNKER"; // 66
        case ABILITY_ID::UNLOADALL_COMMANDCENTER:           return "UNLOADALL_COMMANDCENTER"; // 36
        case ABILITY_ID::UNLOADUNIT_COMMANDCENTER:          return "UNLOADUNIT_COMMANDCENTER"; // 5
        case ABILITY_ID::LOADALL_COMMANDCENTER:             return "LOADALL_COMMANDCENTER"; // 61
        case ABILITY_ID::LIFT_COMMANDCENTER:                return "LIFT_COMMANDCENTER"; // 696
        case ABILITY_ID::LAND_COMMANDCENTER:                return "LAND_COMMANDCENTER"; // 653
        case ABILITY_ID::BUILD_TECHLAB_BARRACKS:            return "BUILD_TECHLAB_BARRACKS"; // 1654
        case ABILITY_ID::BUILD_REACTOR_BARRACKS:            return "BUILD_REACTOR_BARRACKS"; // 2301
        case ABILITY_ID::CANCEL_BARRACKSADDON:              return "CANCEL_BARRACKSADDON"; // 41
        case ABILITY_ID::LIFT_BARRACKS:                     return "LIFT_BARRACKS"; // 835
        case ABILITY_ID::BUILD_TECHLAB_FACTORY:             return "BUILD_TECHLAB_FACTORY"; // 1202
        case ABILITY_ID::BUILD_REACTOR_FACTORY:             return "BUILD_REACTOR_FACTORY"; // 601
        case ABILITY_ID::CANCEL_FACTORYADDON:               return "CANCEL_FACTORYADDON"; // 33
        case ABILITY_ID::LIFT_FACTORY:                      return "LIFT_FACTORY"; // 852
        case ABILITY_ID::BUILD_TECHLAB_STARPORT:            return "BUILD_TECHLAB_STARPORT"; // 537
        case ABILITY_ID::BUILD_REACTOR_STARPORT:            return "BUILD_REACTOR_STARPORT"; // 577
        case ABILITY_ID::CANCEL_STARPORTADDON:              return "CANCEL_STARPORTADDON"; // 15
        case ABILITY_ID::LIFT_STARPORT:                     return "LIFT_STARPORT"; // 579
        case ABILITY_ID::LAND_FACTORY:                      return "LAND_FACTORY"; // 608
        case ABILITY_ID::LAND_STARPORT:                     return "LAND_STARPORT"; // 470
        case ABILITY_ID::TRAIN_SCV:                         return "TRAIN_SCV"; // 42473
        case ABILITY_ID::LAND_BARRACKS:                     return "LAND_BARRACKS"; // 542
        case ABILITY_ID::MORPH_SUPPLYDEPOT_LOWER:           return "MORPH_SUPPLYDEPOT_LOWER"; // 4343
        case ABILITY_ID::MORPH_SUPPLYDEPOT_RAISE:           return "MORPH_SUPPLYDEPOT_RAISE"; // 1508
        case ABILITY_ID::TRAIN_MARINE:                      return "TRAIN_MARINE"; // 60153
        case ABILITY_ID::TRAIN_REAPER:                      return "TRAIN_REAPER"; // 1916
        case ABILITY_ID::TRAIN_GHOST:                       return "TRAIN_GHOST"; // 305
        case ABILITY_ID::TRAIN_MARAUDER:                    return "TRAIN_MARAUDER"; // 9866
        case ABILITY_ID::TRAIN_SIEGETANK:                   return "TRAIN_SIEGETANK"; // 5398
        case ABILITY_ID::TRAIN_THOR:                        return "TRAIN_THOR"; // 622
        case ABILITY_ID::TRAIN_HELLION:                     return "TRAIN_HELLION"; // 4120
        case ABILITY_ID::TRAIN_HELLBAT:                     return "TRAIN_HELLBAT"; // 904
        case ABILITY_ID::TRAIN_CYCLONE:                     return "TRAIN_CYCLONE"; // 1044
        case ABILITY_ID::TRAIN_WIDOWMINE:                   return "TRAIN_WIDOWMINE"; // 3096
        case ABILITY_ID::TRAIN_MEDIVAC:                     return "TRAIN_MEDIVAC"; // 4606
        case ABILITY_ID::TRAIN_BANSHEE:                     return "TRAIN_BANSHEE"; // 961
        case ABILITY_ID::TRAIN_RAVEN:                       return "TRAIN_RAVEN"; // 580
        case ABILITY_ID::TRAIN_BATTLECRUISER:               return "TRAIN_BATTLECRUISER"; // 533
        case ABILITY_ID::TRAIN_VIKINGFIGHTER:               return "TRAIN_VIKINGFIGHTER"; // 3203
        case ABILITY_ID::TRAIN_LIBERATOR:                   return "TRAIN_LIBERATOR"; // 2032
        case ABILITY_ID::RESEARCH_HISECAUTOTRACKING:        return "RESEARCH_HISECAUTOTRACKING"; // 73
        case ABILITY_ID::RESEARCH_TERRANSTRUCTUREARMORUPGRADE: return "RESEARCH_TERRANSTRUCTUREARMORUPGRADE"; // 51
        case ABILITY_ID::RESEARCH_TERRANINFANTRYWEAPONSLEVEL1: return "RESEARCH_TERRANINFANTRYWEAPONSLEVEL1"; // 631
        case ABILITY_ID::RESEARCH_TERRANINFANTRYWEAPONSLEVEL2: return "RESEARCH_TERRANINFANTRYWEAPONSLEVEL2"; // 362
        case ABILITY_ID::RESEARCH_TERRANINFANTRYWEAPONSLEVEL3: return "RESEARCH_TERRANINFANTRYWEAPONSLEVEL3"; // 181
        case ABILITY_ID::RESEARCH_NEOSTEELFRAME:            return "RESEARCH_NEOSTEELFRAME"; // 17
        case ABILITY_ID::RESEARCH_TERRANINFANTRYARMORLEVEL1: return "RESEARCH_TERRANINFANTRYARMORLEVEL1"; // 579
        case ABILITY_ID::RESEARCH_TERRANINFANTRYARMORLEVEL2: return "RESEARCH_TERRANINFANTRYARMORLEVEL2"; // 328
        case ABILITY_ID::RESEARCH_TERRANINFANTRYARMORLEVEL3: return "RESEARCH_TERRANINFANTRYARMORLEVEL3"; // 139
        case ABILITY_ID::BUILD_NUKE:                        return "BUILD_NUKE"; // 87
        case ABILITY_ID::RESEARCH_STIMPACK:                 return "RESEARCH_STIMPACK"; // 739
        case ABILITY_ID::RESEARCH_COMBATSHIELD:             return "RESEARCH_COMBATSHIELD"; // 622
        case ABILITY_ID::RESEARCH_CONCUSSIVESHELLS:         return "RESEARCH_CONCUSSIVESHELLS"; // 323
        case ABILITY_ID::RESEARCH_INFERNALPREIGNITER:       return "RESEARCH_INFERNALPREIGNITER"; // 109
        case ABILITY_ID::RESEARCH_DRILLINGCLAWS:            return "RESEARCH_DRILLINGCLAWS"; // 42
        case ABILITY_ID::RESEARCH_RAPIDFIRELAUNCHERS:       return "RESEARCH_RAPIDFIRELAUNCHERS";
        case ABILITY_ID::RESEARCH_SMARTSERVOS:              return "RESEARCH_SMARTSERVOS";
        case ABILITY_ID::RESEARCH_BANSHEECLOAKINGFIELD:     return "RESEARCH_BANSHEECLOAKINGFIELD"; // 174
        case ABILITY_ID::RESEARCH_RAVENCORVIDREACTOR:       return "RESEARCH_RAVENCORVIDREACTOR"; // 24
        case ABILITY_ID::RESEARCH_BANSHEEHYPERFLIGHTROTORS: return "RESEARCH_BANSHEEHYPERFLIGHTROTORS"; // 28
        case ABILITY_ID::RESEARCH_RAVENRECALIBRATEDEXPLOSIVES: return "RESEARCH_RAVENRECALIBRATEDEXPLOSIVES"; // 24
        case ABILITY_ID::RESEARCH_HIGHCAPACITYFUELTANKS:    return "RESEARCH_HIGHCAPACITYFUELTANKS"; // 8
        case ABILITY_ID::RESEARCH_ENHANCEDMUNITIONS:        return "RESEARCH_ENHANCEDMUNITIONS";
        case ABILITY_ID::RESEARCH_ADVANCEDBALLISTICS:       return "RESEARCH_ADVANCEDBALLISTICS"; // 28
        case ABILITY_ID::RESEARCH_PERSONALCLOAKING:         return "RESEARCH_PERSONALCLOAKING"; // 28
        case ABILITY_ID::RESEARCH_TERRANVEHICLEWEAPONSLEVEL1: return "RESEARCH_TERRANVEHICLEWEAPONSLEVEL1"; // 263
        case ABILITY_ID::RESEARCH_TERRANVEHICLEWEAPONSLEVEL2: return "RESEARCH_TERRANVEHICLEWEAPONSLEVEL2"; // 118
        case ABILITY_ID::RESEARCH_TERRANVEHICLEWEAPONSLEVEL3: return "RESEARCH_TERRANVEHICLEWEAPONSLEVEL3"; // 56
        case ABILITY_ID::RESEARCH_TERRANSHIPWEAPONSLEVEL1:  return "RESEARCH_TERRANSHIPWEAPONSLEVEL1"; // 132
        case ABILITY_ID::RESEARCH_TERRANSHIPWEAPONSLEVEL2:  return "RESEARCH_TERRANSHIPWEAPONSLEVEL2"; // 64
        case ABILITY_ID::RESEARCH_TERRANSHIPWEAPONSLEVEL3:  return "RESEARCH_TERRANSHIPWEAPONSLEVEL3"; // 20
        case ABILITY_ID::RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL1: return "RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL1"; // 184
        case ABILITY_ID::RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL2: return "RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL2"; // 82
        case ABILITY_ID::RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL3: return "RESEARCH_TERRANVEHICLEANDSHIPPLATINGLEVEL3"; // 30
        case ABILITY_ID::BUILD_NEXUS:                       return "BUILD_NEXUS"; // 1725
        case ABILITY_ID::BUILD_PYLON:                       return "BUILD_PYLON"; // 10071
        case ABILITY_ID::BUILD_ASSIMILATOR:                 return "BUILD_ASSIMILATOR"; // 3683
        case ABILITY_ID::BUILD_GATEWAY:                     return "BUILD_GATEWAY"; // 4445
        case ABILITY_ID::BUILD_FORGE:                       return "BUILD_FORGE"; // 736
        case ABILITY_ID::BUILD_FLEETBEACON:                 return "BUILD_FLEETBEACON"; // 130
        case ABILITY_ID::BUILD_TWILIGHTCOUNCIL:             return "BUILD_TWILIGHTCOUNCIL"; // 486
        case ABILITY_ID::BUILD_PHOTONCANNON:                return "BUILD_PHOTONCANNON"; // 2895
        case ABILITY_ID::BUILD_SHIELDBATTERY:               return "BUILD_SHIELDBATTERY";
        case ABILITY_ID::BUILD_STARGATE:                    return "BUILD_STARGATE"; // 791
        case ABILITY_ID::BUILD_TEMPLARARCHIVE:              return "BUILD_TEMPLARARCHIVE"; // 167
        case ABILITY_ID::BUILD_DARKSHRINE:                  return "BUILD_DARKSHRINE"; // 165
        case ABILITY_ID::BUILD_ROBOTICSBAY:                 return "BUILD_ROBOTICSBAY"; // 180
        case ABILITY_ID::BUILD_ROBOTICSFACILITY:            return "BUILD_ROBOTICSFACILITY"; // 714
        case ABILITY_ID::BUILD_CYBERNETICSCORE:             return "BUILD_CYBERNETICSCORE"; // 756
        case ABILITY_ID::UNLOADALLAT_WARPPRISM:             return "UNLOADALLAT_WARPPRISM"; // 481
        case ABILITY_ID::UNLOADUNIT_WARPPRISM:              return "UNLOADUNIT_WARPPRISM"; // 204
        case ABILITY_ID::TRAIN_ZEALOT:                      return "TRAIN_ZEALOT"; // 1009
        case ABILITY_ID::TRAIN_STALKER:                     return "TRAIN_STALKER"; // 1420
        case ABILITY_ID::TRAIN_HIGHTEMPLAR:                 return "TRAIN_HIGHTEMPLAR"; // 7
        case ABILITY_ID::TRAIN_DARKTEMPLAR:                 return "TRAIN_DARKTEMPLAR"; // 8
        case ABILITY_ID::TRAIN_SENTRY:                      return "TRAIN_SENTRY"; // 201
        case ABILITY_ID::TRAIN_ADEPT:                       return "TRAIN_ADEPT"; // 1181
        case ABILITY_ID::TRAIN_PHOENIX:                     return "TRAIN_PHOENIX"; // 516
        case ABILITY_ID::TRAIN_CARRIER:                     return "TRAIN_CARRIER"; // 866
        case ABILITY_ID::TRAIN_VOIDRAY:                     return "TRAIN_VOIDRAY"; // 1654
        case ABILITY_ID::TRAIN_ORACLE:                      return "TRAIN_ORACLE"; // 370
        case ABILITY_ID::TRAIN_TEMPEST:                     return "TRAIN_TEMPEST"; // 225
        case ABILITY_ID::TRAIN_WARPPRISM:                   return "TRAIN_WARPPRISM"; // 350
        case ABILITY_ID::TRAIN_OBSERVER:                    return "TRAIN_OBSERVER"; // 1038
        case ABILITY_ID::TRAIN_COLOSSUS:                    return "TRAIN_COLOSSUS"; // 412
        case ABILITY_ID::TRAIN_IMMORTAL:                    return "TRAIN_IMMORTAL"; // 1405
        case ABILITY_ID::TRAIN_DISRUPTOR:                   return "TRAIN_DISRUPTOR"; // 343
        case ABILITY_ID::TRAIN_PROBE:                       return "TRAIN_PROBE"; // 31329
        case ABILITY_ID::EFFECT_PSISTORM:                   return "EFFECT_PSISTORM"; // 910
        case ABILITY_ID::BUILD_INTERCEPTORS:                return "BUILD_INTERCEPTORS"; // 392
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDWEAPONSLEVEL1: return "RESEARCH_PROTOSSGROUNDWEAPONSLEVEL1"; // 392
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDWEAPONSLEVEL2: return "RESEARCH_PROTOSSGROUNDWEAPONSLEVEL2"; // 226
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDWEAPONSLEVEL3: return "RESEARCH_PROTOSSGROUNDWEAPONSLEVEL3"; // 95
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDARMORLEVEL1: return "RESEARCH_PROTOSSGROUNDARMORLEVEL1"; // 255
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDARMORLEVEL2: return "RESEARCH_PROTOSSGROUNDARMORLEVEL2"; // 134
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDARMORLEVEL3: return "RESEARCH_PROTOSSGROUNDARMORLEVEL3"; // 47
        case ABILITY_ID::RESEARCH_PROTOSSSHIELDSLEVEL1:     return "RESEARCH_PROTOSSSHIELDSLEVEL1"; // 134
        case ABILITY_ID::RESEARCH_PROTOSSSHIELDSLEVEL2:     return "RESEARCH_PROTOSSSHIELDSLEVEL2"; // 45
        case ABILITY_ID::RESEARCH_PROTOSSSHIELDSLEVEL3:     return "RESEARCH_PROTOSSSHIELDSLEVEL3"; // 50
        case ABILITY_ID::RESEARCH_GRAVITICBOOSTER:          return "RESEARCH_GRAVITICBOOSTER"; // 20
        case ABILITY_ID::RESEARCH_GRAVITICDRIVE:            return "RESEARCH_GRAVITICDRIVE"; // 11
        case ABILITY_ID::RESEARCH_EXTENDEDTHERMALLANCE:     return "RESEARCH_EXTENDEDTHERMALLANCE"; // 98
        case ABILITY_ID::RESEARCH_PSISTORM:                 return "RESEARCH_PSISTORM"; // 118
        case ABILITY_ID::BUILD_HATCHERY:                    return "BUILD_HATCHERY"; // 3120
        case ABILITY_ID::BUILD_EXTRACTOR:                   return "BUILD_EXTRACTOR"; // 5141
        case ABILITY_ID::BUILD_SPAWNINGPOOL:                return "BUILD_SPAWNINGPOOL"; // 933
        case ABILITY_ID::BUILD_EVOLUTIONCHAMBER:            return "BUILD_EVOLUTIONCHAMBER"; // 1234
        case ABILITY_ID::BUILD_HYDRALISKDEN:                return "BUILD_HYDRALISKDEN"; // 386
        case ABILITY_ID::BUILD_SPIRE:                       return "BUILD_SPIRE"; // 413
        case ABILITY_ID::BUILD_ULTRALISKCAVERN:             return "BUILD_ULTRALISKCAVERN"; // 106
        case ABILITY_ID::BUILD_INFESTATIONPIT:              return "BUILD_INFESTATIONPIT"; // 340
        case ABILITY_ID::BUILD_NYDUSNETWORK:                return "BUILD_NYDUSNETWORK"; // 60
        case ABILITY_ID::BUILD_BANELINGNEST:                return "BUILD_BANELINGNEST"; // 549
        case ABILITY_ID::BUILD_ROACHWARREN:                 return "BUILD_ROACHWARREN"; // 523
        case ABILITY_ID::BUILD_SPINECRAWLER:                return "BUILD_SPINECRAWLER"; // 1499
        case ABILITY_ID::BUILD_SPORECRAWLER:                return "BUILD_SPORECRAWLER"; // 2362
        case ABILITY_ID::HARVEST_GATHER_DRONE:              return "HARVEST_GATHER_DRONE"; // 106
        case ABILITY_ID::HARVEST_RETURN_DRONE:              return "HARVEST_RETURN_DRONE"; // 915
        case ABILITY_ID::RESEARCH_ZERGMELEEWEAPONSLEVEL1:   return "RESEARCH_ZERGMELEEWEAPONSLEVEL1"; // 379
        case ABILITY_ID::RESEARCH_ZERGMELEEWEAPONSLEVEL2:   return "RESEARCH_ZERGMELEEWEAPONSLEVEL2"; // 226
        case ABILITY_ID::RESEARCH_ZERGMELEEWEAPONSLEVEL3:   return "RESEARCH_ZERGMELEEWEAPONSLEVEL3"; // 68
        case ABILITY_ID::RESEARCH_ZERGGROUNDARMORLEVEL1:    return "RESEARCH_ZERGGROUNDARMORLEVEL1"; // 541
        case ABILITY_ID::RESEARCH_ZERGGROUNDARMORLEVEL2:    return "RESEARCH_ZERGGROUNDARMORLEVEL2"; // 317
        case ABILITY_ID::RESEARCH_ZERGGROUNDARMORLEVEL3:    return "RESEARCH_ZERGGROUNDARMORLEVEL3"; // 124
        case ABILITY_ID::RESEARCH_ZERGMISSILEWEAPONSLEVEL1: return "RESEARCH_ZERGMISSILEWEAPONSLEVEL1"; // 435
        case ABILITY_ID::RESEARCH_ZERGMISSILEWEAPONSLEVEL2: return "RESEARCH_ZERGMISSILEWEAPONSLEVEL2"; // 286
        case ABILITY_ID::RESEARCH_ZERGMISSILEWEAPONSLEVEL3: return "RESEARCH_ZERGMISSILEWEAPONSLEVEL3"; // 72
        case ABILITY_ID::MORPH_LAIR:                        return "MORPH_LAIR"; // 857
        case ABILITY_ID::CANCEL_MORPHLAIR:                  return "CANCEL_MORPHLAIR"; // 19
        case ABILITY_ID::MORPH_HIVE:                        return "MORPH_HIVE"; // 292
        case ABILITY_ID::MORPH_GREATERSPIRE:                return "MORPH_GREATERSPIRE"; // 94
        case ABILITY_ID::RESEARCH_PNEUMATIZEDCARAPACE:      return "RESEARCH_PNEUMATIZEDCARAPACE"; // 416
        case ABILITY_ID::RESEARCH_BURROW:                   return "RESEARCH_BURROW"; // 186
        case ABILITY_ID::RESEARCH_ZERGLINGADRENALGLANDS:    return "RESEARCH_ZERGLINGADRENALGLANDS"; // 98
        case ABILITY_ID::RESEARCH_ZERGLINGMETABOLICBOOST:   return "RESEARCH_ZERGLINGMETABOLICBOOST"; // 1036
        case ABILITY_ID::RESEARCH_GROOVEDSPINES:            return "RESEARCH_GROOVEDSPINES"; // 192
        case ABILITY_ID::RESEARCH_MUSCULARAUGMENTS:         return "RESEARCH_MUSCULARAUGMENTS"; // 299
        case ABILITY_ID::RESEARCH_ZERGFLYERATTACKLEVEL1:    return "RESEARCH_ZERGFLYERATTACKLEVEL1"; // 180
        case ABILITY_ID::RESEARCH_ZERGFLYERATTACKLEVEL2:    return "RESEARCH_ZERGFLYERATTACKLEVEL2"; // 78
        case ABILITY_ID::RESEARCH_ZERGFLYERATTACKLEVEL3:    return "RESEARCH_ZERGFLYERATTACKLEVEL3"; // 11
        case ABILITY_ID::RESEARCH_ZERGFLYERARMORLEVEL1:     return "RESEARCH_ZERGFLYERARMORLEVEL1"; // 115
        case ABILITY_ID::RESEARCH_ZERGFLYERARMORLEVEL2:     return "RESEARCH_ZERGFLYERARMORLEVEL2"; // 36
        case ABILITY_ID::RESEARCH_ZERGFLYERARMORLEVEL3:     return "RESEARCH_ZERGFLYERARMORLEVEL3"; // 4
        case ABILITY_ID::TRAIN_DRONE:                       return "TRAIN_DRONE"; // 64502
        case ABILITY_ID::TRAIN_ZERGLING:                    return "TRAIN_ZERGLING"; // 52981
        case ABILITY_ID::TRAIN_OVERLORD:                    return "TRAIN_OVERLORD"; // 15067
        case ABILITY_ID::TRAIN_HYDRALISK:                   return "TRAIN_HYDRALISK"; // 16562
        case ABILITY_ID::TRAIN_MUTALISK:                    return "TRAIN_MUTALISK"; // 6675
        case ABILITY_ID::TRAIN_ULTRALISK:                   return "TRAIN_ULTRALISK"; // 809
        case ABILITY_ID::TRAIN_ROACH:                       return "TRAIN_ROACH"; // 20850
        case ABILITY_ID::TRAIN_INFESTOR:                    return "TRAIN_INFESTOR"; // 471
        case ABILITY_ID::TRAIN_CORRUPTOR:                   return "TRAIN_CORRUPTOR"; // 2832
        case ABILITY_ID::TRAIN_VIPER:                       return "TRAIN_VIPER"; // 221
        case ABILITY_ID::TRAIN_SWARMHOST:                   return "TRAIN_SWARMHOST"; // 540
        case ABILITY_ID::MORPH_BROODLORD:                   return "MORPH_BROODLORD"; // 572
        case ABILITY_ID::CANCEL_MORPHBROODLORD:             return "CANCEL_MORPHBROODLORD"; // 4
        case ABILITY_ID::BURROWDOWN_BANELING:               return "BURROWDOWN_BANELING"; // 61
        case ABILITY_ID::BURROWUP_BANELING:                 return "BURROWUP_BANELING"; // 8
        case ABILITY_ID::BURROWDOWN_DRONE:                  return "BURROWDOWN_DRONE"; // 51
        case ABILITY_ID::BURROWUP_DRONE:                    return "BURROWUP_DRONE"; // 41
        case ABILITY_ID::BURROWDOWN_HYDRALISK:              return "BURROWDOWN_HYDRALISK"; // 7
        case ABILITY_ID::BURROWUP_HYDRALISK:                return "BURROWUP_HYDRALISK"; // 5
        case ABILITY_ID::BURROWDOWN_ROACH:                  return "BURROWDOWN_ROACH"; // 102
        case ABILITY_ID::BURROWUP_ROACH:                    return "BURROWUP_ROACH"; // 90
        case ABILITY_ID::BURROWDOWN_ZERGLING:               return "BURROWDOWN_ZERGLING"; // 86
        case ABILITY_ID::BURROWUP_ZERGLING:                 return "BURROWUP_ZERGLING"; // 17
        case ABILITY_ID::UNLOADALLAT_OVERLORD:              return "UNLOADALLAT_OVERLORD"; // 232
        case ABILITY_ID::UNLOADUNIT_OVERLORD:               return "UNLOADUNIT_OVERLORD"; // 19
        case ABILITY_ID::TRAINWARP_ZEALOT:                  return "TRAINWARP_ZEALOT"; // 6961
        case ABILITY_ID::TRAINWARP_STALKER:                 return "TRAINWARP_STALKER"; // 10450
        case ABILITY_ID::TRAINWARP_HIGHTEMPLAR:             return "TRAINWARP_HIGHTEMPLAR"; // 1891
        case ABILITY_ID::TRAINWARP_DARKTEMPLAR:             return "TRAINWARP_DARKTEMPLAR"; // 1494
        case ABILITY_ID::TRAINWARP_SENTRY:                  return "TRAINWARP_SENTRY"; // 1001
        case ABILITY_ID::TRAINWARP_ADEPT:                   return "TRAINWARP_ADEPT"; // 5945
        case ABILITY_ID::BURROWDOWN_QUEEN:                  return "BURROWDOWN_QUEEN"; // 28
        case ABILITY_ID::BURROWUP_QUEEN:                    return "BURROWUP_QUEEN"; // 9
        case ABILITY_ID::UNLOADALL_NYDASNETWORK:            return "UNLOADALL_NYDASNETWORK"; // 345
        case ABILITY_ID::UNLOADUNIT_NYDASNETWORK:           return "UNLOADUNIT_NYDASNETWORK"; // 2
        case ABILITY_ID::EFFECT_BLINK_STALKER:              return "EFFECT_BLINK_STALKER"; // 1326
        case ABILITY_ID::BURROWDOWN_INFESTOR:               return "BURROWDOWN_INFESTOR"; // 55
        case ABILITY_ID::BURROWUP_INFESTOR:                 return "BURROWUP_INFESTOR"; // 7
        case ABILITY_ID::MORPH_OVERSEER:                    return "MORPH_OVERSEER"; // 1647
        case ABILITY_ID::CANCEL_MORPHOVERSEER:              return "CANCEL_MORPHOVERSEER"; // 13
        case ABILITY_ID::MORPH_PLANETARYFORTRESS:           return "MORPH_PLANETARYFORTRESS"; // 563
        case ABILITY_ID::CANCEL_MORPHPLANETARYFORTRESS:     return "CANCEL_MORPHPLANETARYFORTRESS"; // 32
        case ABILITY_ID::RESEARCH_PATHOGENGLANDS:           return "RESEARCH_PATHOGENGLANDS"; // 87
        case ABILITY_ID::RESEARCH_NEURALPARASITE:           return "RESEARCH_NEURALPARASITE"; // 11
        case ABILITY_ID::RESEARCH_CENTRIFUGALHOOKS:         return "RESEARCH_CENTRIFUGALHOOKS"; // 290
        case ABILITY_ID::MORPH_ORBITALCOMMAND:              return "MORPH_ORBITALCOMMAND"; // 3069
        case ABILITY_ID::CANCEL_MORPHORBITAL:               return "CANCEL_MORPHORBITAL"; // 33
        case ABILITY_ID::MORPH_WARPGATE:                    return "MORPH_WARPGATE"; // 4493
        case ABILITY_ID::MORPH_GATEWAY:                     return "MORPH_GATEWAY"; // 2
        case ABILITY_ID::LIFT_ORBITALCOMMAND:               return "LIFT_ORBITALCOMMAND"; // 904
        case ABILITY_ID::LAND_ORBITALCOMMAND:               return "LAND_ORBITALCOMMAND"; // 808
        case ABILITY_ID::EFFECT_FORCEFIELD:                 return "EFFECT_FORCEFIELD"; // 1022
        case ABILITY_ID::MORPH_WARPPRISMPHASINGMODE:        return "MORPH_WARPPRISMPHASINGMODE"; // 725
        case ABILITY_ID::MORPH_WARPPRISMTRANSPORTMODE:      return "MORPH_WARPPRISMTRANSPORTMODE"; // 428
        case ABILITY_ID::RESEARCH_BATTLECRUISERWEAPONREFIT: return "RESEARCH_BATTLECRUISERWEAPONREFIT"; // 43
        case ABILITY_ID::RESEARCH_PROTOSSAIRWEAPONSLEVEL1:  return "RESEARCH_PROTOSSAIRWEAPONSLEVEL1"; // 140
        case ABILITY_ID::RESEARCH_PROTOSSAIRWEAPONSLEVEL2:  return "RESEARCH_PROTOSSAIRWEAPONSLEVEL2"; // 74
        case ABILITY_ID::RESEARCH_PROTOSSAIRWEAPONSLEVEL3:  return "RESEARCH_PROTOSSAIRWEAPONSLEVEL3"; // 40
        case ABILITY_ID::RESEARCH_PROTOSSAIRARMORLEVEL1:    return "RESEARCH_PROTOSSAIRARMORLEVEL1"; // 83
        case ABILITY_ID::RESEARCH_PROTOSSAIRARMORLEVEL2:    return "RESEARCH_PROTOSSAIRARMORLEVEL2"; // 34
        case ABILITY_ID::RESEARCH_PROTOSSAIRARMORLEVEL3:    return "RESEARCH_PROTOSSAIRARMORLEVEL3"; // 17
        case ABILITY_ID::RESEARCH_WARPGATE:                 return "RESEARCH_WARPGATE"; // 716
        case ABILITY_ID::RESEARCH_CHARGE:                   return "RESEARCH_CHARGE"; // 233
        case ABILITY_ID::RESEARCH_BLINK:                    return "RESEARCH_BLINK"; // 285
        case ABILITY_ID::RESEARCH_ADEPTRESONATINGGLAIVES:   return "RESEARCH_ADEPTRESONATINGGLAIVES"; // 222
        case ABILITY_ID::EFFECT_NUKECALLDOWN:               return "EFFECT_NUKECALLDOWN"; // 61
        case ABILITY_ID::EFFECT_EMP:                        return "EFFECT_EMP"; // 151
        case ABILITY_ID::TRAIN_QUEEN:                       return "TRAIN_QUEEN"; // 5030
        case ABILITY_ID::EFFECT_TRANSFUSION:                return "EFFECT_TRANSFUSION"; // 1213
        case ABILITY_ID::ATTACK_REDIRECT:                   return "ATTACK_REDIRECT"; // 31
        case ABILITY_ID::EFFECT_STIM_MARINE_REDIRECT:       return "EFFECT_STIM_MARINE_REDIRECT"; // 17
        case ABILITY_ID::STOP_REDIRECT:                     return "STOP_REDIRECT"; // 3
        case ABILITY_ID::BEHAVIOR_GENERATECREEPON:          return "BEHAVIOR_GENERATECREEPON"; // 226
        case ABILITY_ID::BEHAVIOR_GENERATECREEPOFF:         return "BEHAVIOR_GENERATECREEPOFF"; // 10
        case ABILITY_ID::BUILD_CREEPTUMOR_QUEEN:            return "BUILD_CREEPTUMOR_QUEEN"; // 5783
        case ABILITY_ID::MORPH_SPINECRAWLERUPROOT:          return "MORPH_SPINECRAWLERUPROOT"; // 290
        case ABILITY_ID::MORPH_SPORECRAWLERUPROOT:          return "MORPH_SPORECRAWLERUPROOT"; // 224
        case ABILITY_ID::MORPH_SPINECRAWLERROOT:            return "MORPH_SPINECRAWLERROOT"; // 384
        case ABILITY_ID::CANCEL_SPINECRAWLERROOT:           return "CANCEL_SPINECRAWLERROOT"; // 7
        case ABILITY_ID::MORPH_SPORECRAWLERROOT:            return "MORPH_SPORECRAWLERROOT"; // 234
        case ABILITY_ID::BUILD_CREEPTUMOR_TUMOR:            return "BUILD_CREEPTUMOR_TUMOR"; // 10042
        case ABILITY_ID::CANCEL_CREEPTUMOR:                 return "CANCEL_CREEPTUMOR"; // 28
        case ABILITY_ID::EFFECT_AUTOTURRET:                 return "EFFECT_AUTOTURRET"; // 1652
        case ABILITY_ID::MORPH_ARCHON:                      return "MORPH_ARCHON"; // 1963
        case ABILITY_ID::BUILD_NYDUSWORM:                   return "BUILD_NYDUSWORM"; // 66
        case ABILITY_ID::EFFECT_CHARGE:                     return "EFFECT_CHARGE"; // 1
        case ABILITY_ID::EFFECT_CONTAMINATE:                return "EFFECT_CONTAMINATE"; // 15
        case ABILITY_ID::CANCEL_QUEUEPASIVE:                return "CANCEL_QUEUEPASIVE"; // 686
        case ABILITY_ID::CANCELSLOT_QUEUEPASSIVE:           return "CANCELSLOT_QUEUEPASSIVE"; // 289
        case ABILITY_ID::CANCEL_QUEUEPASSIVECANCELTOSELECTION: return "CANCEL_QUEUEPASSIVECANCELTOSELECTION"; // 9
        case ABILITY_ID::MORPH_MOTHERSHIP:                  return "MORPH_MOTHERSHIP"; // 53
        case ABILITY_ID::CANCEL_MORPHMOTHERSHIP:            return "CANCEL_MORPHMOTHERSHIP"; // 5
        case ABILITY_ID::TRAIN_MOTHERSHIPCORE:              return "TRAIN_MOTHERSHIPCORE"; // 869
        case ABILITY_ID::EFFECT_MASSRECALL_MOTHERSHIPCORE:  return "EFFECT_MASSRECALL_MOTHERSHIPCORE"; // 46
        case ABILITY_ID::TRAIN_MOTHERSHIP:                  return "TRAIN_MOTHERSHIP"; 
        case ABILITY_ID::MORPH_HELLION:                     return "MORPH_HELLION"; // 31
        case ABILITY_ID::MORPH_HELLBAT:                     return "MORPH_HELLBAT"; // 325
        case ABILITY_ID::BURROWDOWN_SWARMHOST:              return "BURROWDOWN_SWARMHOST"; // 19
        case ABILITY_ID::BURROWUP_SWARMHOST:                return "BURROWUP_SWARMHOST"; // 10
        case ABILITY_ID::ATTACK_ATTACKBUILDING:             return "ATTACK_ATTACKBUILDING"; // 12
        case ABILITY_ID::STOP_BUILDING:                     return "STOP_BUILDING"; // 4
        case ABILITY_ID::EFFECT_BLINDINGCLOUD:              return "EFFECT_BLINDINGCLOUD"; // 67
        case ABILITY_ID::EFFECT_ABDUCT:                     return "EFFECT_ABDUCT"; // 96
        case ABILITY_ID::EFFECT_VIPERCONSUME:               return "EFFECT_VIPERCONSUME"; // 601
        case ABILITY_ID::BEHAVIOR_BUILDINGATTACKON:         return "BEHAVIOR_BUILDINGATTACKON"; // 9
        case ABILITY_ID::BEHAVIOR_BUILDINGATTACKOFF:        return "BEHAVIOR_BUILDINGATTACKOFF"; // 3
        case ABILITY_ID::BURROWDOWN_WIDOWMINE:              return "BURROWDOWN_WIDOWMINE"; // 2668
        case ABILITY_ID::BURROWUP_WIDOWMINE:                return "BURROWUP_WIDOWMINE"; // 891
        case ABILITY_ID::EFFECT_WIDOWMINEATTACK:            return "EFFECT_WIDOWMINEATTACK"; // 1
        case ABILITY_ID::BURROWDOWN_LURKER:                 return "BURROWDOWN_LURKER"; // 612
        case ABILITY_ID::BURROWUP_LURKER:                   return "BURROWUP_LURKER"; // 348
        case ABILITY_ID::MORPH_LURKERDEN:                   return "MORPH_LURKERDEN"; // 139
        case ABILITY_ID::CANCEL_MORPHLURKERDEN:             return "CANCEL_MORPHLURKERDEN"; // 2
        case ABILITY_ID::HALLUCINATION_ORACLE:              return "HALLUCINATION_ORACLE"; // 2
        case ABILITY_ID::EFFECT_MEDIVACIGNITEAFTERBURNERS:  return "EFFECT_MEDIVACIGNITEAFTERBURNERS"; // 3505
        case ABILITY_ID::EFFECT_ORACLEREVELATION:           return "EFFECT_ORACLEREVELATION"; // 144
        case ABILITY_ID::EFFECT_PHOTONOVERCHARGE:           return "EFFECT_PHOTONOVERCHARGE"; // 1194
        case ABILITY_ID::EFFECT_TIMEWARP:                   return "EFFECT_TIMEWARP"; // 96
        case ABILITY_ID::EFFECT_CAUSTICSPRAY:               return "EFFECT_CAUSTICSPRAY"; // 504
        case ABILITY_ID::EFFECT_IMMORTALBARRIER:            return "EFFECT_IMMORTALBARRIER"; // 6
        case ABILITY_ID::MORPH_RAVAGER:                     return "MORPH_RAVAGER"; // 2075
        case ABILITY_ID::CANCEL_MORPHRAVAGER:               return "CANCEL_MORPHRAVAGER"; // 6
        case ABILITY_ID::MORPH_LURKER:                      return "MORPH_LURKER"; // 907
        case ABILITY_ID::CANCEL_MORPHLURKER:                return "CANCEL_MORPHLURKER"; // 3
        case ABILITY_ID::EFFECT_CORROSIVEBILE:              return "EFFECT_CORROSIVEBILE"; // 5842
        case ABILITY_ID::BURROWDOWN_RAVAGER:                return "BURROWDOWN_RAVAGER"; // 4
        case ABILITY_ID::BURROWUP_RAVAGER:                  return "BURROWUP_RAVAGER"; // 2
        case ABILITY_ID::EFFECT_PURIFICATIONNOVA:           return "EFFECT_PURIFICATIONNOVA"; // 468
        case ABILITY_ID::EFFECT_LOCKON:                     return "EFFECT_LOCKON"; // 322
        case ABILITY_ID::EFFECT_TACTICALJUMP:               return "EFFECT_TACTICALJUMP"; // 114
        case ABILITY_ID::MORPH_THORHIGHIMPACTMODE:          return "MORPH_THORHIGHIMPACTMODE"; // 59
        case ABILITY_ID::MORPH_THOREXPLOSIVEMODE:           return "MORPH_THOREXPLOSIVEMODE"; // 5
        case ABILITY_ID::EFFECT_MASSRECALL_MOTHERSHIP:      return "EFFECT_MASSRECALL_MOTHERSHIP"; // 6
        case ABILITY_ID::UNLOADALL_NYDUSWORM:               return "UNLOADALL_NYDUSWORM"; // 585
        case ABILITY_ID::BEHAVIOR_PULSARBEAMON:             return "BEHAVIOR_PULSARBEAMON"; // 339
        case ABILITY_ID::BEHAVIOR_PULSARBEAMOFF:            return "BEHAVIOR_PULSARBEAMOFF"; // 146
        case ABILITY_ID::EFFECT_LOCUSTSWOOP:                return "EFFECT_LOCUSTSWOOP"; // 3
        case ABILITY_ID::HALLUCINATION_DISRUPTOR:           return "HALLUCINATION_DISRUPTOR"; // 1
        case ABILITY_ID::HALLUCINATION_ADEPT:               return "HALLUCINATION_ADEPT"; // 1
        case ABILITY_ID::EFFECT_VOIDRAYPRISMATICALIGNMENT:  return "EFFECT_VOIDRAYPRISMATICALIGNMENT"; // 398
        case ABILITY_ID::BUILD_STASISTRAP:                  return "BUILD_STASISTRAP"; // 133
        case ABILITY_ID::EFFECT_PARASITICBOMB:              return "EFFECT_PARASITICBOMB"; // 157
        case ABILITY_ID::EFFECT_ADEPTPHASESHIFT:            return "EFFECT_ADEPTPHASESHIFT"; // 1048
        case ABILITY_ID::BEHAVIOR_HOLDFIREON_LURKER:        return "BEHAVIOR_HOLDFIREON_LURKER"; // 3
        case ABILITY_ID::BEHAVIOR_HOLDFIREOFF_LURKER:       return "BEHAVIOR_HOLDFIREOFF_LURKER"; // 1
        case ABILITY_ID::MORPH_LIBERATORAGMODE:             return "MORPH_LIBERATORAGMODE"; // 3250
        case ABILITY_ID::MORPH_LIBERATORAAMODE:             return "MORPH_LIBERATORAAMODE"; // 1152
        case ABILITY_ID::EFFECT_KD8CHARGE:                  return "EFFECT_KD8CHARGE"; // 3047
        case ABILITY_ID::CANCEL_ADEPTPHASESHIFT:            return "CANCEL_ADEPTPHASESHIFT"; // 66
        case ABILITY_ID::CANCEL_ADEPTSHADEPHASESHIFT:       return "CANCEL_ADEPTSHADEPHASESHIFT"; // 98
        case ABILITY_ID::EFFECT_TEMPESTDISRUPTIONBLAST:     return "EFFECT_TEMPESTDISRUPTIONBLAST"; // 11
        case ABILITY_ID::EFFECT_SHADOWSTRIDE:               return "EFFECT_SHADOWSTRIDE"; // 5
        case ABILITY_ID::EFFECT_SPAWNLOCUSTS:               return "EFFECT_SPAWNLOCUSTS"; // 163
        case ABILITY_ID::MORPH_OVERLORDTRANSPORT:           return "MORPH_OVERLORDTRANSPORT"; // 326
        case ABILITY_ID::CANCEL_MORPHOVERLORDTRANSPORT:     return "CANCEL_MORPHOVERLORDTRANSPORT"; // 3
        case ABILITY_ID::EFFECT_GHOSTSNIPE:                 return "EFFECT_GHOSTSNIPE"; // 58
        case ABILITY_ID::RESEARCH_SHADOWSTRIKE:             return "RESEARCH_SHADOWSTRIKE"; // 15
        case ABILITY_ID::CANCEL:                            return "CANCEL"; // 1
        case ABILITY_ID::HALT:                              return "HALT"; // 1
        case ABILITY_ID::BURROWDOWN:                        return "BURROWDOWN"; // 1
        case ABILITY_ID::BURROWUP:                          return "BURROWUP"; // 1
        case ABILITY_ID::LOADALL:                           return "LOADALL"; // 1
        case ABILITY_ID::UNLOADALL:                         return "UNLOADALL"; // 1
        case ABILITY_ID::STOP:                              return "STOP"; // 1
        case ABILITY_ID::HARVEST_GATHER:                    return "HARVEST_GATHER"; // 1
        case ABILITY_ID::HARVEST_RETURN:                    return "HARVEST_RETURN"; // 1
        case ABILITY_ID::LOAD:                              return "LOAD"; // 1
        case ABILITY_ID::UNLOADALLAT:                       return "UNLOADALLAT"; // 1
        case ABILITY_ID::CANCEL_LAST:                       return "CANCEL_LAST"; // 1
        case ABILITY_ID::RALLY_UNITS:                       return "RALLY_UNITS"; // 1
        case ABILITY_ID::ATTACK:                            return "ATTACK"; // 1
        case ABILITY_ID::EFFECT_STIM:                       return "EFFECT_STIM"; // 1
        case ABILITY_ID::BEHAVIOR_CLOAKON:                  return "BEHAVIOR_CLOAKON"; // 1
        case ABILITY_ID::BEHAVIOR_CLOAKOFF:                 return "BEHAVIOR_CLOAKOFF"; // 1
        case ABILITY_ID::LAND:                              return "LAND"; // 1
        case ABILITY_ID::LIFT:                              return "LIFT"; // 1
        case ABILITY_ID::MORPH_ROOT:                        return "MORPH_ROOT"; // 1
        case ABILITY_ID::MORPH_UPROOT:                      return "MORPH_UPROOT"; // 1
        case ABILITY_ID::BUILD_TECHLAB:                     return "BUILD_TECHLAB"; // 1
        case ABILITY_ID::BUILD_REACTOR:                     return "BUILD_REACTOR"; // 1
        case ABILITY_ID::EFFECT_SPRAY:                      return "EFFECT_SPRAY"; // 1
        case ABILITY_ID::EFFECT_REPAIR:                     return "EFFECT_REPAIR"; // 1
        case ABILITY_ID::EFFECT_MASSRECALL:                 return "EFFECT_MASSRECALL"; // 1
        case ABILITY_ID::EFFECT_BLINK:                      return "EFFECT_BLINK"; // 1
        case ABILITY_ID::EFFECT_RESTORE:                    return "EFFECT_RESTORE"; // 1
        case ABILITY_ID::BEHAVIOR_HOLDFIREON:               return "BEHAVIOR_HOLDFIREON"; // 1
        case ABILITY_ID::BEHAVIOR_HOLDFIREOFF:              return "BEHAVIOR_HOLDFIREOFF"; // 1
        case ABILITY_ID::RALLY_WORKERS:                     return "RALLY_WORKERS"; // 1
        case ABILITY_ID::BUILD_CREEPTUMOR:                  return "BUILD_CREEPTUMOR"; // 1
        case ABILITY_ID::RESEARCH_PROTOSSAIRARMOR:          return "RESEARCH_PROTOSSAIRARMOR"; // 1
        case ABILITY_ID::RESEARCH_PROTOSSAIRWEAPONS:        return "RESEARCH_PROTOSSAIRWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDARMOR:       return "RESEARCH_PROTOSSGROUNDARMOR"; // 1
        case ABILITY_ID::RESEARCH_PROTOSSGROUNDWEAPONS:     return "RESEARCH_PROTOSSGROUNDWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_PROTOSSSHIELDS:           return "RESEARCH_PROTOSSSHIELDS"; // 1
        case ABILITY_ID::RESEARCH_TERRANINFANTRYARMOR:      return "RESEARCH_TERRANINFANTRYARMOR"; // 1
        case ABILITY_ID::RESEARCH_TERRANINFANTRYWEAPONS:    return "RESEARCH_TERRANINFANTRYWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_TERRANSHIPWEAPONS:        return "RESEARCH_TERRANSHIPWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_TERRANVEHICLEANDSHIPPLATING: return "RESEARCH_TERRANVEHICLEANDSHIPPLATING"; // 1
        case ABILITY_ID::RESEARCH_TERRANVEHICLEWEAPONS:     return "RESEARCH_TERRANVEHICLEWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_ZERGFLYERARMOR:           return "RESEARCH_ZERGFLYERARMOR"; // 1
        case ABILITY_ID::RESEARCH_ZERGFLYERATTACK:          return "RESEARCH_ZERGFLYERATTACK"; // 1
        case ABILITY_ID::RESEARCH_ZERGGROUNDARMOR:          return "RESEARCH_ZERGGROUNDARMOR"; // 1
        case ABILITY_ID::RESEARCH_ZERGMELEEWEAPONS:         return "RESEARCH_ZERGMELEEWEAPONS"; // 1
        case ABILITY_ID::RESEARCH_ZERGMISSILEWEAPONS:       return "RESEARCH_ZERGMISSILEWEAPONS"; // 1
        }

        return "UNKNOWN";
    };

    const char* UpgradeIDToName(UpgradeID upgrade_id) {
        switch ((UPGRADE_ID)upgrade_id) {
        case UPGRADE_ID::CARRIERLAUNCHSPEEDUPGRADE:         return "CARRIERLAUNCHSPEEDUPGRADE";
        case UPGRADE_ID::GLIALRECONSTITUTION:               return "GLIALRECONSTITUTION";
        case UPGRADE_ID::TUNNELINGCLAWS:                    return "TUNNELINGCLAWS";
        case UPGRADE_ID::CHITINOUSPLATING:                  return "CHITINOUSPLATING";
        case UPGRADE_ID::HISECAUTOTRACKING:                 return "HISECAUTOTRACKING";
        case UPGRADE_ID::TERRANBUILDINGARMOR:               return "TERRANBUILDINGARMOR";
        case UPGRADE_ID::TERRANINFANTRYWEAPONSLEVEL1:       return "TERRANINFANTRYWEAPONSLEVEL1";
        case UPGRADE_ID::TERRANINFANTRYWEAPONSLEVEL2:       return "TERRANINFANTRYWEAPONSLEVEL2";
        case UPGRADE_ID::TERRANINFANTRYWEAPONSLEVEL3:       return "TERRANINFANTRYWEAPONSLEVEL3";
        case UPGRADE_ID::NEOSTEELFRAME:                     return "NEOSTEELFRAME";
        case UPGRADE_ID::TERRANINFANTRYARMORSLEVEL1:        return "TERRANINFANTRYARMORSLEVEL1";
        case UPGRADE_ID::TERRANINFANTRYARMORSLEVEL2:        return "TERRANINFANTRYARMORSLEVEL2";
        case UPGRADE_ID::TERRANINFANTRYARMORSLEVEL3:        return "TERRANINFANTRYARMORSLEVEL3";
        case UPGRADE_ID::STIMPACK:                          return "STIMPACK";
        case UPGRADE_ID::SHIELDWALL:                        return "SHIELDWALL";
        case UPGRADE_ID::PUNISHERGRENADES:                  return "PUNISHERGRENADES";
        case UPGRADE_ID::HIGHCAPACITYBARRELS:               return "HIGHCAPACITYBARRELS";
        case UPGRADE_ID::BANSHEECLOAK:                      return "BANSHEECLOAK";
        case UPGRADE_ID::RAVENCORVIDREACTOR:                return "RAVENCORVIDREACTOR";
        case UPGRADE_ID::PERSONALCLOAKING:                  return "PERSONALCLOAKING";
        case UPGRADE_ID::TERRANVEHICLEWEAPONSLEVEL1:        return "TERRANVEHICLEWEAPONSLEVEL1";
        case UPGRADE_ID::TERRANVEHICLEWEAPONSLEVEL2:        return "TERRANVEHICLEWEAPONSLEVEL2";
        case UPGRADE_ID::TERRANVEHICLEWEAPONSLEVEL3:        return "TERRANVEHICLEWEAPONSLEVEL3";
        case UPGRADE_ID::TERRANSHIPWEAPONSLEVEL1:           return "TERRANSHIPWEAPONSLEVEL1";
        case UPGRADE_ID::TERRANSHIPWEAPONSLEVEL2:           return "TERRANSHIPWEAPONSLEVEL2";
        case UPGRADE_ID::TERRANSHIPWEAPONSLEVEL3:           return "TERRANSHIPWEAPONSLEVEL3";
        case UPGRADE_ID::PROTOSSGROUNDWEAPONSLEVEL1:        return "PROTOSSGROUNDWEAPONSLEVEL1";
        case UPGRADE_ID::PROTOSSGROUNDWEAPONSLEVEL2:        return "PROTOSSGROUNDWEAPONSLEVEL2";
        case UPGRADE_ID::PROTOSSGROUNDWEAPONSLEVEL3:        return "PROTOSSGROUNDWEAPONSLEVEL3";
        case UPGRADE_ID::PROTOSSGROUNDARMORSLEVEL1:         return "PROTOSSGROUNDARMORSLEVEL1";
        case UPGRADE_ID::PROTOSSGROUNDARMORSLEVEL2:         return "PROTOSSGROUNDARMORSLEVEL2";
        case UPGRADE_ID::PROTOSSGROUNDARMORSLEVEL3:         return "PROTOSSGROUNDARMORSLEVEL3";
        case UPGRADE_ID::PROTOSSSHIELDSLEVEL1:              return "PROTOSSSHIELDSLEVEL1";
        case UPGRADE_ID::PROTOSSSHIELDSLEVEL2:              return "PROTOSSSHIELDSLEVEL2";
        case UPGRADE_ID::PROTOSSSHIELDSLEVEL3:              return "PROTOSSSHIELDSLEVEL3";
        case UPGRADE_ID::OBSERVERGRAVITICBOOSTER:           return "OBSERVERGRAVITICBOOSTER";
        case UPGRADE_ID::GRAVITICDRIVE:                     return "GRAVITICDRIVE";
        case UPGRADE_ID::EXTENDEDTHERMALLANCE:              return "EXTENDEDTHERMALLANCE";
        case UPGRADE_ID::PSISTORMTECH:                      return "PSISTORMTECH";
        case UPGRADE_ID::ZERGMELEEWEAPONSLEVEL1:            return "ZERGMELEEWEAPONSLEVEL1";
        case UPGRADE_ID::ZERGMELEEWEAPONSLEVEL2:            return "ZERGMELEEWEAPONSLEVEL2";
        case UPGRADE_ID::ZERGMELEEWEAPONSLEVEL3:            return "ZERGMELEEWEAPONSLEVEL3";
        case UPGRADE_ID::ZERGGROUNDARMORSLEVEL1:            return "ZERGGROUNDARMORSLEVEL1";
        case UPGRADE_ID::ZERGGROUNDARMORSLEVEL2:            return "ZERGGROUNDARMORSLEVEL2";
        case UPGRADE_ID::ZERGGROUNDARMORSLEVEL3:            return "ZERGGROUNDARMORSLEVEL3";
        case UPGRADE_ID::ZERGMISSILEWEAPONSLEVEL1:          return "ZERGMISSILEWEAPONSLEVEL1";
        case UPGRADE_ID::ZERGMISSILEWEAPONSLEVEL2:          return "ZERGMISSILEWEAPONSLEVEL2";
        case UPGRADE_ID::ZERGMISSILEWEAPONSLEVEL3:          return "ZERGMISSILEWEAPONSLEVEL3";
        case UPGRADE_ID::OVERLORDSPEED:                     return "OVERLORDSPEED";
        case UPGRADE_ID::BURROW:                            return "BURROW";
        case UPGRADE_ID::ZERGLINGATTACKSPEED:               return "ZERGLINGATTACKSPEED";
        case UPGRADE_ID::ZERGLINGMOVEMENTSPEED:             return "ZERGLINGMOVEMENTSPEED";
        case UPGRADE_ID::ZERGFLYERWEAPONSLEVEL1:            return "ZERGFLYERWEAPONSLEVEL1";
        case UPGRADE_ID::ZERGFLYERWEAPONSLEVEL2:            return "ZERGFLYERWEAPONSLEVEL2";
        case UPGRADE_ID::ZERGFLYERWEAPONSLEVEL3:            return "ZERGFLYERWEAPONSLEVEL3";
        case UPGRADE_ID::ZERGFLYERARMORSLEVEL1:             return "ZERGFLYERARMORSLEVEL1";
        case UPGRADE_ID::ZERGFLYERARMORSLEVEL2:             return "ZERGFLYERARMORSLEVEL2";
        case UPGRADE_ID::ZERGFLYERARMORSLEVEL3:             return "ZERGFLYERARMORSLEVEL3";
        case UPGRADE_ID::INFESTORENERGYUPGRADE:             return "INFESTORENERGYUPGRADE";
        case UPGRADE_ID::CENTRIFICALHOOKS:                  return "CENTRIFICALHOOKS";
        case UPGRADE_ID::BATTLECRUISERENABLESPECIALIZATIONS: return "BATTLECRUISERENABLESPECIALIZATIONS";
        case UPGRADE_ID::PROTOSSAIRWEAPONSLEVEL1:           return "PROTOSSAIRWEAPONSLEVEL1";
        case UPGRADE_ID::PROTOSSAIRWEAPONSLEVEL2:           return "PROTOSSAIRWEAPONSLEVEL2";
        case UPGRADE_ID::PROTOSSAIRWEAPONSLEVEL3:           return "PROTOSSAIRWEAPONSLEVEL3";
        case UPGRADE_ID::PROTOSSAIRARMORSLEVEL1:            return "PROTOSSAIRARMORSLEVEL1";
        case UPGRADE_ID::PROTOSSAIRARMORSLEVEL2:            return "PROTOSSAIRARMORSLEVEL2";
        case UPGRADE_ID::PROTOSSAIRARMORSLEVEL3:            return "PROTOSSAIRARMORSLEVEL3";
        case UPGRADE_ID::WARPGATERESEARCH:                  return "WARPGATERESEARCH";
        case UPGRADE_ID::CHARGE:                            return "CHARGE";
        case UPGRADE_ID::BLINKTECH:                         return "BLINKTECH";
        case UPGRADE_ID::PHOENIXRANGEUPGRADE:               return "PHOENIXRANGEUPGRADE";
        case UPGRADE_ID::NEURALPARASITE:                    return "NEURALPARASITE";
        case UPGRADE_ID::TERRANVEHICLEANDSHIPARMORSLEVEL1:  return "TERRANVEHICLEANDSHIPARMORSLEVEL1";
        case UPGRADE_ID::TERRANVEHICLEANDSHIPARMORSLEVEL2:  return "TERRANVEHICLEANDSHIPARMORSLEVEL2";
        case UPGRADE_ID::TERRANVEHICLEANDSHIPARMORSLEVEL3:  return "TERRANVEHICLEANDSHIPARMORSLEVEL3";
        case UPGRADE_ID::DRILLCLAWS:                        return "DRILLCLAWS";
        case UPGRADE_ID::ADEPTPIERCINGATTACK:               return "ADEPTPIERCINGATTACK";
        case UPGRADE_ID::MAGFIELDLAUNCHERS:                 return "MAGFIELDLAUNCHERS";
        case UPGRADE_ID::EVOLVEGROOVEDSPINES:               return "EVOLVEGROOVEDSPINES";
        case UPGRADE_ID::EVOLVEMUSCULARAUGMENTS:            return "EVOLVEMUSCULARAUGMENTS";
        case UPGRADE_ID::BANSHEESPEED:                      return "BANSHEESPEED";
        case UPGRADE_ID::RAVENRECALIBRATEDEXPLOSIVES:       return "RAVENRECALIBRATEDEXPLOSIVES";
        case UPGRADE_ID::MEDIVACINCREASESPEEDBOOST:         return "MEDIVACINCREASESPEEDBOOST";
        case UPGRADE_ID::LIBERATORAGRANGEUPGRADE:           return "LIBERATORAGRANGEUPGRADE";
        case UPGRADE_ID::DARKTEMPLARBLINKUPGRADE:           return "DARKTEMPLARBLINKUPGRADE";
        case UPGRADE_ID::SMARTSERVOS:                       return "SMARTSERVOS";
        case UPGRADE_ID::RAPIDFIRELAUNCHERS:                return "RAPIDFIRELAUNCHERS";
        case UPGRADE_ID::ENHANCEDMUNITIONS:                 return "ENHANCEDMUNITIONS";
        }

        return "UNKNOWN";
    };

    const char* BuffIDToName(BuffID buff_id) {
        switch ((BUFF_ID)buff_id) {
        case BUFF_ID::GRAVITONBEAM:                         return "GRAVITONBEAM";
        case BUFF_ID::GHOSTCLOAK:                           return "GHOSTCLOAK";
        case BUFF_ID::BANSHEECLOAK:                         return "BANSHEECLOAK";
        case BUFF_ID::POWERUSERWARPABLE:                    return "POWERUSERWARPABLE";
        case BUFF_ID::QUEENSPAWNLARVATIMER:                 return "QUEENSPAWNLARVATIMER";
        case BUFF_ID::GHOSTHOLDFIRE:                        return "GHOSTHOLDFIRE";
        case BUFF_ID::GHOSTHOLDFIREB:                       return "GHOSTHOLDFIREB";
        case BUFF_ID::EMPDECLOAK:                           return "EMPDECLOAK";
        case BUFF_ID::FUNGALGROWTH:                         return "FUNGALGROWTH";
        case BUFF_ID::GUARDIANSHIELD:                       return "GUARDIANSHIELD";
        case BUFF_ID::TIMEWARPPRODUCTION:                   return "TIMEWARPPRODUCTION";
        case BUFF_ID::NEURALPARASITE:                       return "NEURALPARASITE";
        case BUFF_ID::STIMPACKMARAUDER:                     return "STIMPACKMARAUDER";
        case BUFF_ID::SUPPLYDROP:                           return "SUPPLYDROP";
        case BUFF_ID::STIMPACK:                             return "STIMPACK";
        case BUFF_ID::PSISTORM:                             return "PSISTORM";
        case BUFF_ID::CLOAKFIELDEFFECT:                     return "CLOAKFIELDEFFECT";
        case BUFF_ID::CHARGING:                             return "CHARGING";
        case BUFF_ID::SLOW:                                 return "SLOW";
        case BUFF_ID::CONTAMINATED:                         return "CONTAMINATED";
        case BUFF_ID::BLINDINGCLOUDSTRUCTURE:               return "BLINDINGCLOUDSTRUCTURE";
        case BUFF_ID::ORACLEREVELATION:                     return "ORACLEREVELATION";
        case BUFF_ID::VIPERCONSUMESTRUCTURE:                return "VIPERCONSUMESTRUCTURE";
        case BUFF_ID::BLINDINGCLOUD:                        return "BLINDINGCLOUD";
        case BUFF_ID::MEDIVACSPEEDBOOST:                    return "MEDIVACSPEEDBOOST";
        case BUFF_ID::PURIFY:                               return "PURIFY";
        case BUFF_ID::ORACLEWEAPON:                         return "ORACLEWEAPON";
        case BUFF_ID::IMMORTALOVERLOAD:                     return "IMMORTALOVERLOAD";
        case BUFF_ID::LOCKON:                               return "LOCKON";
        case BUFF_ID::SEEKERMISSILE:                        return "SEEKERMISSILE";
        case BUFF_ID::TEMPORALFIELD:                        return "TEMPORALFIELD";
        case BUFF_ID::VOIDRAYSWARMDAMAGEBOOST:              return "VOIDRAYSWARMDAMAGEBOOST";
        case BUFF_ID::ORACLESTASISTRAPTARGET:               return "ORACLESTASISTRAPTARGET";
        case BUFF_ID::PARASITICBOMB:                        return "PARASITICBOMB";
        case BUFF_ID::PARASITICBOMBUNITKU:                  return "PARASITICBOMBUNITKU";
        case BUFF_ID::PARASITICBOMBSECONDARYUNITSEARCH:     return "PARASITICBOMBSECONDARYUNITSEARCH";
        case BUFF_ID::LURKERHOLDFIREB:                      return "LURKERHOLDFIREB";
        case BUFF_ID::CHANNELSNIPECOMBAT:                   return "CHANNELSNIPECOMBAT";
        case BUFF_ID::TEMPESTDISRUPTIONBLASTSTUNBEHAVIOR:   return "TEMPESTDISRUPTIONBLASTSTUNBEHAVIOR";
        case BUFF_ID::CARRYMINERALFIELDMINERALS:            return "CARRYMINERALFIELDMINERALS";
        case BUFF_ID::CARRYHIGHYIELDMINERALFIELDMINERALS:   return "CARRYHIGHYIELDMINERALFIELDMINERALS";
        case BUFF_ID::CARRYHARVESTABLEVESPENEGEYSERGAS:     return "CARRYHARVESTABLEVESPENEGEYSERGAS";
        case BUFF_ID::CARRYHARVESTABLEVESPENEGEYSERGASPROTOSS: return "CARRYHARVESTABLEVESPENEGEYSERGASPROTOSS";
        case BUFF_ID::CARRYHARVESTABLEVESPENEGEYSERGASZERG: return "CARRYHARVESTABLEVESPENEGEYSERGASZERG";
        }

        return "UNKNOWN";
    };

}

