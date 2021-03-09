//
//  ContentView.swift
//  TryingOut2
//
//  Created by Real Tyler Sorensen  on 12/10/20.
//
// Looking at: https://www.hackingwithswift.com/books/ios-swiftui/creating-a-form

import SwiftUI

// This seems like a good metal tutorial in swift
// https://gist.github.com/wakita/f4915757c6c6c128c05c8680cd859e1a#file-compute-metal
import MetalKit

// LOBE test names
//let test_names: [String] = ["chunked_2t_2i_3","chunked_2t_2i_5","chunked_2t_2i_6","chunked_2t_3i_101","chunked_2t_3i_103","chunked_2t_3i_105","chunked_2t_3i_108","chunked_2t_3i_112","chunked_2t_3i_116","chunked_2t_3i_12","chunked_2t_3i_123","chunked_2t_3i_124","chunked_2t_3i_126","chunked_2t_3i_128","chunked_2t_3i_13","chunked_2t_3i_131","chunked_2t_3i_132","chunked_2t_3i_136","chunked_2t_3i_14","chunked_2t_3i_142","chunked_2t_3i_146","chunked_2t_3i_148","chunked_2t_3i_149","chunked_2t_3i_151","chunked_2t_3i_157","chunked_2t_3i_158","chunked_2t_3i_159","chunked_2t_3i_160","chunked_2t_3i_161","chunked_2t_3i_166","chunked_2t_3i_167","chunked_2t_3i_168","chunked_2t_3i_17","chunked_2t_3i_175","chunked_2t_3i_18","chunked_2t_3i_19","chunked_2t_3i_22","chunked_2t_3i_4","chunked_2t_3i_42","chunked_2t_3i_46","chunked_2t_3i_47","chunked_2t_3i_50","chunked_2t_3i_56","chunked_2t_3i_60","chunked_2t_3i_62","chunked_2t_3i_63","chunked_2t_3i_72","chunked_2t_3i_81","chunked_2t_3i_87","chunked_2t_3i_89","chunked_2t_3i_9","chunked_2t_3i_90","chunked_2t_3i_91","chunked_2t_4i_102","chunked_2t_4i_107","chunked_2t_4i_113","chunked_2t_4i_116","chunked_2t_4i_117","chunked_2t_4i_118","chunked_2t_4i_119","chunked_2t_4i_120","chunked_2t_4i_122","chunked_2t_4i_124","chunked_2t_4i_126","chunked_2t_4i_133","chunked_2t_4i_134","chunked_2t_4i_137","chunked_2t_4i_139","chunked_2t_4i_155","chunked_2t_4i_156","chunked_2t_4i_159","chunked_2t_4i_161","chunked_2t_4i_28","chunked_2t_4i_30","chunked_2t_4i_46","chunked_2t_4i_48","chunked_2t_4i_60","chunked_2t_4i_71","chunked_2t_4i_75","chunked_2t_4i_76","chunked_2t_4i_79","chunked_2t_4i_81","chunked_2t_4i_84","chunked_2t_4i_87","chunked_2t_4i_99","chunked_3t_3i_11","chunked_3t_3i_13","chunked_3t_3i_16","chunked_3t_3i_18","chunked_3t_3i_20","chunked_3t_3i_3","chunked_3t_3i_7","chunked_3t_4i_10","chunked_3t_4i_100","chunked_3t_4i_13","chunked_3t_4i_14","chunked_3t_4i_29","chunked_3t_4i_30","chunked_3t_4i_31","chunked_3t_4i_34","chunked_3t_4i_36","chunked_3t_4i_38","chunked_3t_4i_4","chunked_3t_4i_46","chunked_3t_4i_48","chunked_3t_4i_52","chunked_3t_4i_55","chunked_3t_4i_56","chunked_3t_4i_61","chunked_3t_4i_64","chunked_3t_4i_66","chunked_3t_4i_72","chunked_3t_4i_80","chunked_3t_4i_82","chunked_3t_4i_84","chunked_3t_4i_86","chunked_3t_4i_91","chunked_3t_4i_92","chunked_3t_4i_93","chunked_3t_4i_94","chunked_3t_4i_95","chunked_3t_4i_99","plain_2t_2i_3","plain_2t_2i_5","plain_2t_2i_6","plain_2t_3i_101","plain_2t_3i_103","plain_2t_3i_105","plain_2t_3i_108","plain_2t_3i_112","plain_2t_3i_116","plain_2t_3i_12","plain_2t_3i_123","plain_2t_3i_124","plain_2t_3i_126","plain_2t_3i_128","plain_2t_3i_13","plain_2t_3i_131","plain_2t_3i_132","plain_2t_3i_136","plain_2t_3i_14","plain_2t_3i_142","plain_2t_3i_146","plain_2t_3i_148","plain_2t_3i_149","plain_2t_3i_151","plain_2t_3i_157","plain_2t_3i_158","plain_2t_3i_159","plain_2t_3i_160","plain_2t_3i_161","plain_2t_3i_166","plain_2t_3i_167","plain_2t_3i_168","plain_2t_3i_17","plain_2t_3i_175","plain_2t_3i_18","plain_2t_3i_19","plain_2t_3i_22","plain_2t_3i_4","plain_2t_3i_42","plain_2t_3i_46","plain_2t_3i_47","plain_2t_3i_50","plain_2t_3i_56","plain_2t_3i_60","plain_2t_3i_62","plain_2t_3i_63","plain_2t_3i_72","plain_2t_3i_81","plain_2t_3i_87","plain_2t_3i_89","plain_2t_3i_9","plain_2t_3i_90","plain_2t_3i_91","plain_2t_4i_102","plain_2t_4i_107","plain_2t_4i_113","plain_2t_4i_116","plain_2t_4i_117","plain_2t_4i_118","plain_2t_4i_119","plain_2t_4i_120","plain_2t_4i_122","plain_2t_4i_124","plain_2t_4i_126","plain_2t_4i_133","plain_2t_4i_134","plain_2t_4i_137","plain_2t_4i_139","plain_2t_4i_155","plain_2t_4i_156","plain_2t_4i_159","plain_2t_4i_161","plain_2t_4i_28","plain_2t_4i_30","plain_2t_4i_46","plain_2t_4i_48","plain_2t_4i_60","plain_2t_4i_71","plain_2t_4i_75","plain_2t_4i_76","plain_2t_4i_79","plain_2t_4i_81","plain_2t_4i_84","plain_2t_4i_87","plain_2t_4i_99","plain_3t_3i_11","plain_3t_3i_13","plain_3t_3i_16","plain_3t_3i_18","plain_3t_3i_20","plain_3t_3i_3","plain_3t_3i_7","plain_3t_4i_10","plain_3t_4i_100","plain_3t_4i_13","plain_3t_4i_14","plain_3t_4i_29","plain_3t_4i_30","plain_3t_4i_31","plain_3t_4i_34","plain_3t_4i_36","plain_3t_4i_38","plain_3t_4i_4","plain_3t_4i_46","plain_3t_4i_48","plain_3t_4i_52","plain_3t_4i_55","plain_3t_4i_56","plain_3t_4i_61","plain_3t_4i_64","plain_3t_4i_66","plain_3t_4i_72","plain_3t_4i_80","plain_3t_4i_82","plain_3t_4i_84","plain_3t_4i_86","plain_3t_4i_91","plain_3t_4i_92","plain_3t_4i_93","plain_3t_4i_94","plain_3t_4i_95","plain_3t_4i_99","round_robin2t_2i_3","round_robin2t_2i_5","round_robin2t_2i_6","round_robin2t_3i_101","round_robin2t_3i_103","round_robin2t_3i_105","round_robin2t_3i_108","round_robin2t_3i_112","round_robin2t_3i_116","round_robin2t_3i_12","round_robin2t_3i_123","round_robin2t_3i_124","round_robin2t_3i_126","round_robin2t_3i_128","round_robin2t_3i_13","round_robin2t_3i_131","round_robin2t_3i_132","round_robin2t_3i_136","round_robin2t_3i_14","round_robin2t_3i_142","round_robin2t_3i_146","round_robin2t_3i_148","round_robin2t_3i_149","round_robin2t_3i_151","round_robin2t_3i_157","round_robin2t_3i_158","round_robin2t_3i_159","round_robin2t_3i_160","round_robin2t_3i_161","round_robin2t_3i_166","round_robin2t_3i_167","round_robin2t_3i_168","round_robin2t_3i_17","round_robin2t_3i_175","round_robin2t_3i_18","round_robin2t_3i_19","round_robin2t_3i_22","round_robin2t_3i_4","round_robin2t_3i_42","round_robin2t_3i_46","round_robin2t_3i_47","round_robin2t_3i_50","round_robin2t_3i_56","round_robin2t_3i_60","round_robin2t_3i_62","round_robin2t_3i_63","round_robin2t_3i_72","round_robin2t_3i_81","round_robin2t_3i_87","round_robin2t_3i_89","round_robin2t_3i_9","round_robin2t_3i_90","round_robin2t_3i_91","round_robin2t_4i_102","round_robin2t_4i_107","round_robin2t_4i_113","round_robin2t_4i_116","round_robin2t_4i_117","round_robin2t_4i_118","round_robin2t_4i_119","round_robin2t_4i_120","round_robin2t_4i_122","round_robin2t_4i_124","round_robin2t_4i_126","round_robin2t_4i_133","round_robin2t_4i_134","round_robin2t_4i_137","round_robin2t_4i_139","round_robin2t_4i_155","round_robin2t_4i_156","round_robin2t_4i_159","round_robin2t_4i_161","round_robin2t_4i_28","round_robin2t_4i_30","round_robin2t_4i_46","round_robin2t_4i_48","round_robin2t_4i_60","round_robin2t_4i_71","round_robin2t_4i_75","round_robin2t_4i_76","round_robin2t_4i_79","round_robin2t_4i_81","round_robin2t_4i_84","round_robin2t_4i_87","round_robin2t_4i_99","round_robin3t_3i_11","round_robin3t_3i_13","round_robin3t_3i_16","round_robin3t_3i_18","round_robin3t_3i_20","round_robin3t_3i_3","round_robin3t_3i_7","round_robin3t_4i_10","round_robin3t_4i_100","round_robin3t_4i_13","round_robin3t_4i_14","round_robin3t_4i_29","round_robin3t_4i_30","round_robin3t_4i_31","round_robin3t_4i_34","round_robin3t_4i_36","round_robin3t_4i_38","round_robin3t_4i_4","round_robin3t_4i_46","round_robin3t_4i_48","round_robin3t_4i_52","round_robin3t_4i_55","round_robin3t_4i_56","round_robin3t_4i_61","round_robin3t_4i_64","round_robin3t_4i_66","round_robin3t_4i_72","round_robin3t_4i_80","round_robin3t_4i_82","round_robin3t_4i_84","round_robin3t_4i_86","round_robin3t_4i_91","round_robin3t_4i_92","round_robin3t_4i_93","round_robin3t_4i_94","round_robin3t_4i_95","round_robin3t_4i_99"]

// All tests

let test_names_raw: [String] = [
"plain_2t_2i_0",
"plain_2t_2i_1",
"plain_2t_2i_2",
"plain_2t_2i_3",
"plain_2t_2i_4",
"plain_2t_2i_5",
"plain_2t_2i_6",
"plain_2t_2i_7",
"plain_2t_3i_0",
"plain_2t_3i_1",
"plain_2t_3i_10",
"plain_2t_3i_100",
"plain_2t_3i_101",
"plain_2t_3i_102",
"plain_2t_3i_103",
"plain_2t_3i_104",
"plain_2t_3i_105",
"plain_2t_3i_106",
"plain_2t_3i_107",
"plain_2t_3i_108",
"plain_2t_3i_109",
"plain_2t_3i_11",
"plain_2t_3i_110",
"plain_2t_3i_111",
"plain_2t_3i_112",
"plain_2t_3i_113",
"plain_2t_3i_114",
"plain_2t_3i_115",
"plain_2t_3i_116",
"plain_2t_3i_117",
"plain_2t_3i_118",
"plain_2t_3i_119",
"plain_2t_3i_12",
"plain_2t_3i_120",
"plain_2t_3i_121",
"plain_2t_3i_122",
"plain_2t_3i_123",
"plain_2t_3i_124",
"plain_2t_3i_125",
"plain_2t_3i_126",
"plain_2t_3i_127",
"plain_2t_3i_128",
"plain_2t_3i_129",
"plain_2t_3i_13",
"plain_2t_3i_130",
"plain_2t_3i_131",
"plain_2t_3i_132",
"plain_2t_3i_133",
"plain_2t_3i_134",
"plain_2t_3i_135",
"plain_2t_3i_136",
"plain_2t_3i_137",
"plain_2t_3i_138",
"plain_2t_3i_139",
"plain_2t_3i_14",
"plain_2t_3i_140",
"plain_2t_3i_141",
"plain_2t_3i_142",
"plain_2t_3i_143",
"plain_2t_3i_144",
"plain_2t_3i_145",
"plain_2t_3i_146",
"plain_2t_3i_147",
"plain_2t_3i_148",
"plain_2t_3i_149",
"plain_2t_3i_15",
"plain_2t_3i_150",
"plain_2t_3i_151",
"plain_2t_3i_152",
"plain_2t_3i_153",
"plain_2t_3i_154",
"plain_2t_3i_155",
"plain_2t_3i_156",
"plain_2t_3i_157",
"plain_2t_3i_158",
"plain_2t_3i_159",
"plain_2t_3i_16",
"plain_2t_3i_160",
"plain_2t_3i_161",
"plain_2t_3i_162",
"plain_2t_3i_163",
"plain_2t_3i_164",
"plain_2t_3i_165",
"plain_2t_3i_166",
"plain_2t_3i_167",
"plain_2t_3i_168",
"plain_2t_3i_169",
"plain_2t_3i_17",
"plain_2t_3i_170",
"plain_2t_3i_171",
"plain_2t_3i_172",
"plain_2t_3i_173",
"plain_2t_3i_174",
"plain_2t_3i_175",
"plain_2t_3i_18",
"plain_2t_3i_19",
"plain_2t_3i_2",
"plain_2t_3i_20",
"plain_2t_3i_21",
"plain_2t_3i_22",
"plain_2t_3i_23",
"plain_2t_3i_24",
"plain_2t_3i_25",
"plain_2t_3i_26",
"plain_2t_3i_27",
"plain_2t_3i_28",
"plain_2t_3i_29",
"plain_2t_3i_3",
"plain_2t_3i_30",
"plain_2t_3i_31",
"plain_2t_3i_32",
"plain_2t_3i_33",
"plain_2t_3i_34",
"plain_2t_3i_35",
"plain_2t_3i_36",
"plain_2t_3i_37",
"plain_2t_3i_38",
"plain_2t_3i_39",
"plain_2t_3i_4",
"plain_2t_3i_40",
"plain_2t_3i_41",
"plain_2t_3i_42",
"plain_2t_3i_43",
"plain_2t_3i_44",
"plain_2t_3i_45",
"plain_2t_3i_46",
"plain_2t_3i_47",
"plain_2t_3i_48",
"plain_2t_3i_49",
"plain_2t_3i_5",
"plain_2t_3i_50",
"plain_2t_3i_51",
"plain_2t_3i_52",
"plain_2t_3i_53",
"plain_2t_3i_54",
"plain_2t_3i_55",
"plain_2t_3i_56",
"plain_2t_3i_57",
"plain_2t_3i_58",
"plain_2t_3i_59",
"plain_2t_3i_6",
"plain_2t_3i_60",
"plain_2t_3i_61",
"plain_2t_3i_62",
"plain_2t_3i_63",
"plain_2t_3i_64",
"plain_2t_3i_65",
"plain_2t_3i_66",
"plain_2t_3i_67",
"plain_2t_3i_68",
"plain_2t_3i_69",
"plain_2t_3i_7",
"plain_2t_3i_70",
"plain_2t_3i_71",
"plain_2t_3i_72",
"plain_2t_3i_73",
"plain_2t_3i_74",
"plain_2t_3i_75",
"plain_2t_3i_76",
"plain_2t_3i_77",
"plain_2t_3i_78",
"plain_2t_3i_79",
"plain_2t_3i_8",
"plain_2t_3i_80",
"plain_2t_3i_81",
"plain_2t_3i_82",
"plain_2t_3i_83",
"plain_2t_3i_84",
"plain_2t_3i_85",
"plain_2t_3i_86",
"plain_2t_3i_87",
"plain_2t_3i_88",
"plain_2t_3i_89",
"plain_2t_3i_9",
"plain_2t_3i_90",
"plain_2t_3i_91",
"plain_2t_3i_92",
"plain_2t_3i_93",
"plain_2t_3i_94",
"plain_2t_3i_95",
"plain_2t_3i_96",
"plain_2t_3i_97",
"plain_2t_3i_98",
"plain_2t_3i_99",
"plain_2t_4i_0",
"plain_2t_4i_1",
"plain_2t_4i_10",
"plain_2t_4i_100",
"plain_2t_4i_101",
"plain_2t_4i_102",
"plain_2t_4i_103",
"plain_2t_4i_104",
"plain_2t_4i_105",
"plain_2t_4i_106",
"plain_2t_4i_107",
"plain_2t_4i_108",
"plain_2t_4i_109",
"plain_2t_4i_11",
"plain_2t_4i_110",
"plain_2t_4i_111",
"plain_2t_4i_112",
"plain_2t_4i_113",
"plain_2t_4i_114",
"plain_2t_4i_115",
"plain_2t_4i_116",
"plain_2t_4i_117",
"plain_2t_4i_118",
"plain_2t_4i_119",
"plain_2t_4i_12",
"plain_2t_4i_120",
"plain_2t_4i_121",
"plain_2t_4i_122",
"plain_2t_4i_123",
"plain_2t_4i_124",
"plain_2t_4i_125",
"plain_2t_4i_126",
"plain_2t_4i_127",
"plain_2t_4i_128",
"plain_2t_4i_129",
"plain_2t_4i_13",
"plain_2t_4i_130",
"plain_2t_4i_131",
"plain_2t_4i_132",
"plain_2t_4i_133",
"plain_2t_4i_134",
"plain_2t_4i_135",
"plain_2t_4i_136",
"plain_2t_4i_137",
"plain_2t_4i_138",
"plain_2t_4i_139",
"plain_2t_4i_14",
"plain_2t_4i_140",
"plain_2t_4i_141",
"plain_2t_4i_142",
"plain_2t_4i_143",
"plain_2t_4i_144",
"plain_2t_4i_145",
"plain_2t_4i_146",
"plain_2t_4i_147",
"plain_2t_4i_148",
"plain_2t_4i_149",
"plain_2t_4i_15",
"plain_2t_4i_150",
"plain_2t_4i_151",
"plain_2t_4i_152",
"plain_2t_4i_153",
"plain_2t_4i_154",
"plain_2t_4i_155",
"plain_2t_4i_156",
"plain_2t_4i_157",
"plain_2t_4i_158",
"plain_2t_4i_159",
"plain_2t_4i_16",
"plain_2t_4i_160",
"plain_2t_4i_161",
"plain_2t_4i_162",
"plain_2t_4i_163",
"plain_2t_4i_164",
"plain_2t_4i_165",
"plain_2t_4i_166",
"plain_2t_4i_167",
"plain_2t_4i_168",
"plain_2t_4i_169",
"plain_2t_4i_17",
"plain_2t_4i_170",
"plain_2t_4i_171",
"plain_2t_4i_172",
"plain_2t_4i_18",
"plain_2t_4i_19",
"plain_2t_4i_2",
"plain_2t_4i_20",
"plain_2t_4i_21",
"plain_2t_4i_22",
"plain_2t_4i_23",
"plain_2t_4i_24",
"plain_2t_4i_25",
"plain_2t_4i_26",
"plain_2t_4i_27",
"plain_2t_4i_28",
"plain_2t_4i_29",
"plain_2t_4i_3",
"plain_2t_4i_30",
"plain_2t_4i_31",
"plain_2t_4i_32",
"plain_2t_4i_33",
"plain_2t_4i_34",
"plain_2t_4i_35",
"plain_2t_4i_36",
"plain_2t_4i_37",
"plain_2t_4i_38",
"plain_2t_4i_39",
"plain_2t_4i_4",
"plain_2t_4i_40",
"plain_2t_4i_41",
"plain_2t_4i_42",
"plain_2t_4i_43",
"plain_2t_4i_44",
"plain_2t_4i_45",
"plain_2t_4i_46",
"plain_2t_4i_47",
"plain_2t_4i_48",
"plain_2t_4i_49",
"plain_2t_4i_5",
"plain_2t_4i_50",
"plain_2t_4i_51",
"plain_2t_4i_52",
"plain_2t_4i_53",
"plain_2t_4i_54",
"plain_2t_4i_55",
"plain_2t_4i_56",
"plain_2t_4i_57",
"plain_2t_4i_58",
"plain_2t_4i_59",
"plain_2t_4i_6",
"plain_2t_4i_60",
"plain_2t_4i_61",
"plain_2t_4i_62",
"plain_2t_4i_63",
"plain_2t_4i_64",
"plain_2t_4i_65",
"plain_2t_4i_66",
"plain_2t_4i_67",
"plain_2t_4i_68",
"plain_2t_4i_69",
"plain_2t_4i_7",
"plain_2t_4i_70",
"plain_2t_4i_71",
"plain_2t_4i_72",
"plain_2t_4i_73",
"plain_2t_4i_74",
"plain_2t_4i_75",
"plain_2t_4i_76",
"plain_2t_4i_77",
"plain_2t_4i_78",
"plain_2t_4i_79",
"plain_2t_4i_8",
"plain_2t_4i_80",
"plain_2t_4i_81",
"plain_2t_4i_82",
"plain_2t_4i_83",
"plain_2t_4i_84",
"plain_2t_4i_85",
"plain_2t_4i_86",
"plain_2t_4i_87",
"plain_2t_4i_88",
"plain_2t_4i_89",
"plain_2t_4i_9",
"plain_2t_4i_90",
"plain_2t_4i_91",
"plain_2t_4i_92",
"plain_2t_4i_93",
"plain_2t_4i_94",
"plain_2t_4i_95",
"plain_2t_4i_96",
"plain_2t_4i_97",
"plain_2t_4i_98",
"plain_2t_4i_99",
"plain_3t_3i_0",
"plain_3t_3i_1",
"plain_3t_3i_10",
"plain_3t_3i_11",
"plain_3t_3i_12",
"plain_3t_3i_13",
"plain_3t_3i_14",
"plain_3t_3i_15",
"plain_3t_3i_16",
"plain_3t_3i_17",
"plain_3t_3i_18",
"plain_3t_3i_19",
"plain_3t_3i_2",
"plain_3t_3i_20",
"plain_3t_3i_3",
"plain_3t_3i_4",
"plain_3t_3i_5",
"plain_3t_3i_6",
"plain_3t_3i_7",
"plain_3t_3i_8",
"plain_3t_3i_9",
"plain_3t_4i_0",
"plain_3t_4i_1",
"plain_3t_4i_10",
"plain_3t_4i_100",
"plain_3t_4i_101",
"plain_3t_4i_102",
"plain_3t_4i_103",
"plain_3t_4i_104",
"plain_3t_4i_11",
"plain_3t_4i_12",
"plain_3t_4i_13",
"plain_3t_4i_14",
"plain_3t_4i_15",
"plain_3t_4i_16",
"plain_3t_4i_17",
"plain_3t_4i_18",
"plain_3t_4i_19",
"plain_3t_4i_2",
"plain_3t_4i_20",
"plain_3t_4i_21",
"plain_3t_4i_22",
"plain_3t_4i_23",
"plain_3t_4i_24",
"plain_3t_4i_25",
"plain_3t_4i_26",
"plain_3t_4i_27",
"plain_3t_4i_28",
"plain_3t_4i_29",
"plain_3t_4i_3",
"plain_3t_4i_30",
"plain_3t_4i_31",
"plain_3t_4i_32",
"plain_3t_4i_33",
"plain_3t_4i_34",
"plain_3t_4i_35",
"plain_3t_4i_36",
"plain_3t_4i_37",
"plain_3t_4i_38",
"plain_3t_4i_39",
"plain_3t_4i_4",
"plain_3t_4i_40",
"plain_3t_4i_41",
"plain_3t_4i_42",
"plain_3t_4i_43",
"plain_3t_4i_44",
"plain_3t_4i_45",
"plain_3t_4i_46",
"plain_3t_4i_47",
"plain_3t_4i_48",
"plain_3t_4i_49",
"plain_3t_4i_5",
"plain_3t_4i_50",
"plain_3t_4i_51",
"plain_3t_4i_52",
"plain_3t_4i_53",
"plain_3t_4i_54",
"plain_3t_4i_55",
"plain_3t_4i_56",
"plain_3t_4i_57",
"plain_3t_4i_58",
"plain_3t_4i_59",
"plain_3t_4i_6",
"plain_3t_4i_60",
"plain_3t_4i_61",
"plain_3t_4i_62",
"plain_3t_4i_63",
"plain_3t_4i_64",
"plain_3t_4i_65",
"plain_3t_4i_66",
"plain_3t_4i_67",
"plain_3t_4i_68",
"plain_3t_4i_69",
"plain_3t_4i_7",
"plain_3t_4i_70",
"plain_3t_4i_71",
"plain_3t_4i_72",
"plain_3t_4i_73",
"plain_3t_4i_74",
"plain_3t_4i_75",
"plain_3t_4i_76",
"plain_3t_4i_77",
"plain_3t_4i_78",
"plain_3t_4i_79",
"plain_3t_4i_8",
"plain_3t_4i_80",
"plain_3t_4i_81",
"plain_3t_4i_82",
"plain_3t_4i_83",
"plain_3t_4i_84",
"plain_3t_4i_85",
"plain_3t_4i_86",
"plain_3t_4i_87",
"plain_3t_4i_88",
"plain_3t_4i_89",
"plain_3t_4i_9",
"plain_3t_4i_90",
"plain_3t_4i_91",
"plain_3t_4i_92",
"plain_3t_4i_93",
"plain_3t_4i_94",
"plain_3t_4i_95",
"plain_3t_4i_96",
"plain_3t_4i_97",
"plain_3t_4i_98",
"plain_3t_4i_99",
]

var test_names = [String]();



//perform on the current thread
//dwi.perform()
//perpform on the global queue
//DispatchQueue.global().async(execute: dwi)
// Look here for dispatch docs:
// https://medium.com/@yostane/swift-sweet-bits-the-dispatch-framework-ios-10-e34451d59a86

struct ContentView: View {
    @State var tapCount = 0
    @State var computing = false
    @State var should_cancel = false
    @State var index = 0
    @State var test_log = "Test Log:"
    @State var action_log = "Action Log:"
    @State var local_i = 0;
    @State var inner_i = 0;
    @State var debug_i = 0;
    @State var killed_tests = 0;
    @State var elapsed_time = 0.0;
    let num_workgroups = 1;
    let num_threads = 256;
    


    
    var body: some View {
        
        // nice resource to let the background thread update the UI:
        //https://stackoverflow.com/questions/26743367/updating-the-ui-using-dispatch-async-in-swift
        // Otherwise we get crazy errors
        Form {
            
            Button("Run Tests") {
                /*if computing {
                    return
                }
                if !computing {
                    computing = true
                }*/
                
               
                
                let dwi = DispatchWorkItem {
                    
                    let start = DispatchTime.now()
                    
                    // Metal setup (before tests) here:
                    let device = MTLCreateSystemDefaultDevice()
                    var to_print_errs = ""
                    var to_print_device = ""
                    if device == nil {
                        to_print_device = "Metal device is nil"
                    }
                    to_print_device = "\nusing device " +  (device?.name)!
                    
                    DispatchQueue.main.async {
                                // now update UI on main thread
                        action_log += to_print_device;
                    }
                    
                   
                    let library =  device?.makeDefaultLibrary()
                    if library == nil {
                        to_print_errs += "Could not create default library"
                    }
                    
                    DispatchQueue.main.async {
                                // now update UI on main thread
                        action_log += to_print_errs;
                    }
                    to_print_errs=""
                    
                    // Documented to be initialized to 0 https://developer.apple.com/documentation/metal/mtldevice/1433375-makebuffer
                    let XBuffer = device?.makeBuffer(length: num_workgroups * MemoryLayout<Int>.stride , options: [])!
                    
                    let YBuffer = device?.makeBuffer(length: num_workgroups * MemoryLayout<Int>.stride , options: [])!
                    
                    let resultBuffer = device?.makeBuffer(length: 1 * MemoryLayout<Int>.stride , options: [])!
                    
                    
                    
                    if (XBuffer == nil || YBuffer == nil || resultBuffer == nil )
                    {
                        to_print_errs = "\nError allocating buffers!"
                    }
                    to_print_errs=""
                    
                    DispatchQueue.main.async {
                                // now update UI on main thread
                        action_log += to_print_errs;
                    }
                    
                    // Metal setup end
                    
                    // For each test
                    var async_i = 0
                    
                    for t in test_names_raw {
                        if (t.contains("plain")) {
                            test_names.append(t);
                        }
                    }
                    //test_names = [];
                    while (async_i < test_names.count) {
                        
                        // Going backwards because the round robin ones are interesting here
                        let t_name = test_names[test_names.count - async_i - 1]
                        
                        DispatchQueue.main.async {
                                    // now update UI on main thread
                            test_log += "\nRunning Test: \(t_name)"
                            local_i = async_i
                        }
                        
                        
                        
                       
                        var killed = 0;
                        var success = 0;
                        
                        let test_kernel = library?.makeFunction(name: t_name)
                        if test_kernel == nil {
                          to_print_errs  += "\nCould not get kernel: " + t_name
                        }
                        
                        let XURP = XBuffer?.contents()
                        let YURP = YBuffer?.contents()
                      
                        let XHost = XURP?.bindMemory(to: Int.self, capacity: num_workgroups)
                      
                        let YHost = YURP?.bindMemory(to: Int.self, capacity: num_workgroups)

                        let resultURP = resultBuffer?.contents()
                        let resultHost = resultURP?.bindMemory(to: Int.self, capacity: 1)
                      
                        if (XURP == nil || YURP == nil || XHost == nil || YHost == nil || resultURP == nil || resultHost == nil ) {
                            to_print_errs += "\nError reinitializing memory!"
                        }
                        
                        DispatchQueue.main.async {
                                    // now update UI on main thread
                            action_log += to_print_errs
                        }
                        

                        let numThreadgroups = MTLSize(width: num_workgroups, height: 1, depth: 1)
                        let threadsPerThreadgroup = MTLSize(width: num_threads, height: 1, depth: 1)
                          

                        
                       for iter in 0...20 {
                         DispatchQueue.main.async {
                            // now update UI on main thread
                            inner_i = iter
                          }
                        
                            
                        
                          // This link seems to be okay for managing memory:
                          // https://developer.apple.com/forums/thread/67672
                          // initializing memory:
                            


                            XHost?.initialize(repeating: 0, count: num_workgroups)
                            YHost?.initialize(repeating: 0, count: num_workgroups)
                            resultHost?.initialize(repeating: 0, count: 1)
                        
                        let commandQueue = device?.makeCommandQueue()
                        if commandQueue == nil {
                            to_print_errs = "Command Queue is nil"
                        }

                            let commandBuffer = commandQueue?.makeCommandBuffer()!
                            if commandBuffer == nil {
                                to_print_errs += "CommandBuffer is nil"
                            }
                        
                          
                            let encoder = commandBuffer?.makeComputeCommandEncoder()!
                        
                            if encoder == nil {
                              to_print_errs += "\nencoder is nill"
                            }
                        
                           
                        
                          encoder?.setBuffer(XBuffer, offset: 0, index: 0)
                          encoder?.setBuffer(YBuffer, offset: 0, index: 1)
                          encoder?.setBuffer(resultBuffer, offset: 0, index: 2)

                        
                          
                        
                          do {
                            let pipeline_state = try device?.makeComputePipelineState(function: test_kernel!)
                            
                            if pipeline_state == nil {
                                to_print_errs += "\npipeline_state is  nil"
                            }
                            
                            encoder?.setComputePipelineState(pipeline_state!)
                            let _  = encoder?.dispatchThreadgroups(numThreadgroups, threadsPerThreadgroup: threadsPerThreadgroup)
                            
                            // This is important
                            encoder?.endEncoding()
                            
                            commandBuffer?.commit()
                            commandBuffer?.waitUntilCompleted()
                            let e = commandBuffer?.error
                            
                            if e == nil {
                                let result = resultBuffer?.contents().load(as: Int.self)
                                //assert(result == num_workgroups)
                                assert(result == num_threads*num_workgroups);
                                //test_log += "\nStatus: finished"
                                success += 1;
                            }
                            else {
                                killed += 1;
                                //usleep(1000000/8)
                                //test_log += "\nStatus: KILLED\n\n"
                                //killed_tests += 1
                                /*DispatchQueue.main.async {
                                            // now update UI on main thread
                                    action_log += "Command buffer error: \(String(describing: commandBuffer?.error))"
                                    }*/
                                
                                //print("Command buffer error: \(String(describing: commandBuffer.error))")
                            }
                            
                            DispatchQueue.main.async {
                                        // now update UI on main thread
                                action_log += to_print_errs
                                }


                        }
                        catch {
                            to_print_errs += "setting the compute pipeline stage failed"
                        }
                        
                        
                        //usleep(1000000/16)
                        
                        
                        /*if should_cancel {
                            should_cancel = false
                            break
                          }*/
                        }
                        DispatchQueue.main.async {
                                    // now update UI on main thread
                            test_log += "\nFinished\nkilled: \(killed)\nSuccess: \(success)"
                            killed_tests += killed
                        }
                        
                        //
                        //killed_tests += killed
                        async_i += 1
                    }
                    computing = false
                    
                    // Timing code from:
                    // https://stackoverflow.com/questions/24755558/measure-elapsed-time-in-swift
                    let end = DispatchTime.now()
                    let nanoTime = end.uptimeNanoseconds - start.uptimeNanoseconds // <<<<< Difference in nano seconds (UInt64)
                    let timeInterval = Double(nanoTime) / 1_000_000_000 // Technically could overflow for long running tests

                    DispatchQueue.main.async {
                                // now update UI on main thread
                        elapsed_time = timeInterval
                    }
                        
                }
                
                //self.tapCount += 1
                //dwi.perform()
                DispatchQueue.global().async(execute: dwi)
            }
            
            Text("Ran \(local_i) tests out of \(test_names.count)\nLocal iterations: \(inner_i) \nKilled Tests: \(killed_tests)\nTime (seconds): \(elapsed_time)")
            Button("Cancel") {
                if !computing {
                    return
                }
                if should_cancel {
                    return
                }
                should_cancel=true
                
            }
            Button("Clear Test Log") {
                if computing {
                    return
                }
                if should_cancel {
                    return
                }
                test_log = "Test Log:"
                
            }
            
            // on how to get program data back https://stackoverflow.com/questions/38064042/access-files-in-var-mobile-containers-data-application-without-jailbreaking-iph
            Button("Save to File") {
                action_log += "\nSaving to file"
                if computing {
                    return
                }
                if should_cancel {
                    return
                }
               
                func getDocumentsDirectory() -> URL {
                    let paths = FileManager.default.urls(for: .documentDirectory, in: .userDomainMask)
                    return paths[0]
                }

                let filename = getDocumentsDirectory().appendingPathComponent("output_intra_subgroup.txt")

                do {
                    try test_log.write(to: filename, atomically: true, encoding: String.Encoding.utf8)
                } catch {
                    action_log += "\nFAILED TO WRITE TO FILE"
                    return
                }
                action_log += "\nWrote to file successfully: \(filename)"
                
            }
            Text(action_log).lineLimit(nil)
            Text(test_log).lineLimit(nil)
            
            
            
        }
        .navigationBarTitle(Text("Progress Tester"))
    }
}



struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}

