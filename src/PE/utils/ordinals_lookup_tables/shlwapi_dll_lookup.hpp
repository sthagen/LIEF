/* Copyright 2017 - 2021 R. Thomas
 * Copyright 2017 - 2021 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef LIEF_PE_SHLWAPI_DLL_LOOKUP_H_
#define LIEF_PE_SHLWAPI_DLL_LOOKUP_H_

#include <map>

namespace LIEF {
namespace PE {

static const std::map<uint32_t, const char*> shlwapi_dll_lookup {
    { 0x01f4, "AssocCreate"                     },
    { 0x01f5, "AssocGetPerceivedType"           },
    { 0x01f6, "AssocIsDangerous"                },
    { 0x01f7, "AssocQueryKeyA"                  },
    { 0x01f8, "AssocQueryKeyW"                  },
    { 0x023a, "AssocQueryStringA"               },
    { 0x023c, "AssocQueryStringByKeyA"          },
    { 0x0240, "AssocQueryStringByKeyW"          },
    { 0x0243, "AssocQueryStringW"               },
    { 0x0248, "ChrCmpIA"                        },
    { 0x0249, "ChrCmpIW"                        },
    { 0x024a, "ColorAdjustLuma"                 },
    { 0x024b, "ColorHLSToRGB"                   },
    { 0x024c, "ColorRGBToHLS"                   },
    { 0x00a8, "ConnectToConnectionPoint"        },
    { 0x0239, "DelayLoadFailureHook"            },
    { 0x024d, "DllGetVersion"                   },
    { 0x000e, "GetAcceptLanguagesA"             },
    { 0x000f, "GetAcceptLanguagesW"             },
    { 0x024e, "GetMenuPosFromID"                },
    { 0x024f, "HashData"                        },
    { 0x0238, "IStream_Copy"                    },
    { 0x00b8, "IStream_Read"                    },
    { 0x0200, "IStream_ReadPidl"                },
    { 0x0254, "IStream_ReadStr"                 },
    { 0x00d5, "IStream_Reset"                   },
    { 0x00d6, "IStream_Size"                    },
    { 0x00d4, "IStream_Write"                   },
    { 0x0201, "IStream_WritePidl"               },
    { 0x0255, "IStream_WriteStr"                },
    { 0x00a9, "IUnknown_AtomicRelease"          },
    { 0x0100, "IUnknown_GetSite"                },
    { 0x00ac, "IUnknown_GetWindow"              },
    { 0x00b0, "IUnknown_QueryService"           },
    { 0x00c7, "IUnknown_Set"                    },
    { 0x00ae, "IUnknown_SetSite"                },
    { 0x0250, "IntlStrEqWorkerA"                },
    { 0x0251, "IntlStrEqWorkerW"                },
    { 0x0252, "IsCharSpaceA"                    },
    { 0x001d, "IsCharSpaceW"                    },
    { 0x0229, "IsInternetESCEnabled"            },
    { 0x01b5, "IsOS"                            },
    { 0x01a2, "MLFreeLibrary"                   },
    { 0x0179, "MLLoadLibraryA"                  },
    { 0x017a, "MLLoadLibraryW"                  },
    { 0x0001, "ParseURLA"                       },
    { 0x0002, "ParseURLW"                       },
    { 0x0253, "PathAddBackslashA"               },
    { 0x0257, "PathAddBackslashW"               },
    { 0x0258, "PathAddExtensionA"               },
    { 0x025f, "PathAddExtensionW"               },
    { 0x0260, "PathAppendA"                     },
    { 0x0261, "PathAppendW"                     },
    { 0x0262, "PathBuildRootA"                  },
    { 0x0264, "PathBuildRootW"                  },
    { 0x026b, "PathCanonicalizeA"               },
    { 0x026c, "PathCanonicalizeW"               },
    { 0x026e, "PathCombineA"                    },
    { 0x026f, "PathCombineW"                    },
    { 0x0270, "PathCommonPrefixA"               },
    { 0x0271, "PathCommonPrefixW"               },
    { 0x0281, "PathCompactPathA"                },
    { 0x0282, "PathCompactPathExA"              },
    { 0x0283, "PathCompactPathExW"              },
    { 0x0284, "PathCompactPathW"                },
    { 0x0285, "PathCreateFromUrlA"              },
    { 0x0286, "PathCreateFromUrlAlloc"          },
    { 0x0287, "PathCreateFromUrlW"              },
    { 0x0288, "PathFileExistsA"                 },
    { 0x0289, "PathFileExistsW"                 },
    { 0x028a, "PathFindExtensionA"              },
    { 0x028b, "PathFindExtensionW"              },
    { 0x028c, "PathFindFileNameA"               },
    { 0x028d, "PathFindFileNameW"               },
    { 0x028e, "PathFindNextComponentA"          },
    { 0x028f, "PathFindNextComponentW"          },
    { 0x0290, "PathFindOnPathA"                 },
    { 0x0291, "PathFindOnPathW"                 },
    { 0x0292, "PathFindSuffixArrayA"            },
    { 0x0293, "PathFindSuffixArrayW"            },
    { 0x0294, "PathGetArgsA"                    },
    { 0x0295, "PathGetArgsW"                    },
    { 0x0296, "PathGetCharTypeA"                },
    { 0x0297, "PathGetCharTypeW"                },
    { 0x0298, "PathGetDriveNumberA"             },
    { 0x0299, "PathGetDriveNumberW"             },
    { 0x029a, "PathIsContentTypeA"              },
    { 0x029b, "PathIsContentTypeW"              },
    { 0x029c, "PathIsDirectoryA"                },
    { 0x029d, "PathIsDirectoryEmptyA"           },
    { 0x029e, "PathIsDirectoryEmptyW"           },
    { 0x029f, "PathIsDirectoryW"                },
    { 0x02a0, "PathIsFileSpecA"                 },
    { 0x02a1, "PathIsFileSpecW"                 },
    { 0x02a2, "PathIsLFNFileSpecA"              },
    { 0x02a3, "PathIsLFNFileSpecW"              },
    { 0x02a4, "PathIsNetworkPathA"              },
    { 0x02a5, "PathIsNetworkPathW"              },
    { 0x02a6, "PathIsPrefixA"                   },
    { 0x02a7, "PathIsPrefixW"                   },
    { 0x02a8, "PathIsRelativeA"                 },
    { 0x02a9, "PathIsRelativeW"                 },
    { 0x02aa, "PathIsRootA"                     },
    { 0x02ab, "PathIsRootW"                     },
    { 0x02ac, "PathIsSameRootA"                 },
    { 0x02ad, "PathIsSameRootW"                 },
    { 0x02ae, "PathIsSystemFolderA"             },
    { 0x02af, "PathIsSystemFolderW"             },
    { 0x02b0, "PathIsUNCA"                      },
    { 0x02b1, "PathIsUNCServerA"                },
    { 0x02b2, "PathIsUNCServerShareA"           },
    { 0x02b3, "PathIsUNCServerShareW"           },
    { 0x02b4, "PathIsUNCServerW"                },
    { 0x02b5, "PathIsUNCW"                      },
    { 0x02b6, "PathIsURLA"                      },
    { 0x02b7, "PathIsURLW"                      },
    { 0x02b8, "PathMakePrettyA"                 },
    { 0x02b9, "PathMakePrettyW"                 },
    { 0x02ba, "PathMakeSystemFolderA"           },
    { 0x02bb, "PathMakeSystemFolderW"           },
    { 0x02bc, "PathMatchSpecA"                  },
    { 0x02bd, "PathMatchSpecExA"                },
    { 0x02be, "PathMatchSpecExW"                },
    { 0x02bf, "PathMatchSpecW"                  },
    { 0x02c0, "PathParseIconLocationA"          },
    { 0x02c1, "PathParseIconLocationW"          },
    { 0x02c2, "PathQuoteSpacesA"                },
    { 0x02c3, "PathQuoteSpacesW"                },
    { 0x02c4, "PathRelativePathToA"             },
    { 0x02c5, "PathRelativePathToW"             },
    { 0x02c6, "PathRemoveArgsA"                 },
    { 0x02c7, "PathRemoveArgsW"                 },
    { 0x02c8, "PathRemoveBackslashA"            },
    { 0x02c9, "PathRemoveBackslashW"            },
    { 0x02ca, "PathRemoveBlanksA"               },
    { 0x02cb, "PathRemoveBlanksW"               },
    { 0x02cc, "PathRemoveExtensionA"            },
    { 0x02cd, "PathRemoveExtensionW"            },
    { 0x02ce, "PathRemoveFileSpecA"             },
    { 0x02cf, "PathRemoveFileSpecW"             },
    { 0x02d0, "PathRenameExtensionA"            },
    { 0x02d1, "PathRenameExtensionW"            },
    { 0x02d2, "PathSearchAndQualifyA"           },
    { 0x02d3, "PathSearchAndQualifyW"           },
    { 0x02d4, "PathSetDlgItemPathA"             },
    { 0x02d5, "PathSetDlgItemPathW"             },
    { 0x02d6, "PathSkipRootA"                   },
    { 0x02d7, "PathSkipRootW"                   },
    { 0x02d8, "PathStripPathA"                  },
    { 0x02d9, "PathStripPathW"                  },
    { 0x02da, "PathStripToRootA"                },
    { 0x02db, "PathStripToRootW"                },
    { 0x02dc, "PathUnExpandEnvStringsA"         },
    { 0x02dd, "PathUnExpandEnvStringsW"         },
    { 0x02de, "PathUndecorateA"                 },
    { 0x02df, "PathUndecorateW"                 },
    { 0x02e0, "PathUnmakeSystemFolderA"         },
    { 0x02e1, "PathUnmakeSystemFolderW"         },
    { 0x02e2, "PathUnquoteSpacesA"              },
    { 0x02e3, "PathUnquoteSpacesW"              },
    { 0x00db, "QISearch"                        },
    { 0x0007, "SHAllocShared"                   },
    { 0x0159, "SHAnsiToAnsi"                    },
    { 0x00d7, "SHAnsiToUnicode"                 },
    { 0x02e4, "SHAutoComplete"                  },
    { 0x02e5, "SHCopyKeyA"                      },
    { 0x02e6, "SHCopyKeyW"                      },
    { 0x000c, "SHCreateMemStream"               },
    { 0x02e7, "SHCreateShellPalette"            },
    { 0x02e8, "SHCreateStreamOnFileA"           },
    { 0x02e9, "SHCreateStreamOnFileEx"          },
    { 0x02ea, "SHCreateStreamOnFileW"           },
    { 0x02eb, "SHCreateStreamWrapper"           },
    { 0x0010, "SHCreateThread"                  },
    { 0x02ec, "SHCreateThreadRef"               },
    { 0x02ed, "SHDeleteEmptyKeyA"               },
    { 0x02ee, "SHDeleteEmptyKeyW"               },
    { 0x02ef, "SHDeleteKeyA"                    },
    { 0x02f0, "SHDeleteKeyW"                    },
    { 0x02f1, "SHDeleteOrphanKeyA"              },
    { 0x02f2, "SHDeleteOrphanKeyW"              },
    { 0x02f3, "SHDeleteValueA"                  },
    { 0x02f4, "SHDeleteValueW"                  },
    { 0x02f5, "SHEnumKeyExA"                    },
    { 0x02f6, "SHEnumKeyExW"                    },
    { 0x02f7, "SHEnumValueA"                    },
    { 0x02f8, "SHEnumValueW"                    },
    { 0x0161, "SHFormatDateTimeA"               },
    { 0x0162, "SHFormatDateTimeW"               },
    { 0x000a, "SHFreeShared"                    },
    { 0x02f9, "SHGetInverseCMAP"                },
    { 0x02fa, "SHGetThreadRef"                  },
    { 0x02fb, "SHGetValueA"                     },
    { 0x02fc, "SHGetValueW"                     },
    { 0x0203, "SHGetViewStatePropertyBag"       },
    { 0x00cc, "SHIsChildOrSelf"                 },
    { 0x02fd, "SHIsLowMemoryMachine"            },
    { 0x01e7, "SHLoadIndirectString"            },
    { 0x0008, "SHLockShared"                    },
    { 0x00b9, "SHMessageBoxCheckA"              },
    { 0x00bf, "SHMessageBoxCheckW"              },
    { 0x02fe, "SHOpenRegStream2A"               },
    { 0x02ff, "SHOpenRegStream2W"               },
    { 0x0300, "SHOpenRegStreamA"                },
    { 0x0301, "SHOpenRegStreamW"                },
    { 0x0237, "SHPropertyBag_ReadStrAlloc"      },
    { 0x0302, "SHQueryInfoKeyA"                 },
    { 0x0303, "SHQueryInfoKeyW"                 },
    { 0x0304, "SHQueryValueExA"                 },
    { 0x0305, "SHQueryValueExW"                 },
    { 0x0306, "SHRegCloseUSKey"                 },
    { 0x0307, "SHRegCreateUSKeyA"               },
    { 0x0308, "SHRegCreateUSKeyW"               },
    { 0x0309, "SHRegDeleteEmptyUSKeyA"          },
    { 0x030a, "SHRegDeleteEmptyUSKeyW"          },
    { 0x030b, "SHRegDeleteUSValueA"             },
    { 0x030c, "SHRegDeleteUSValueW"             },
    { 0x030d, "SHRegDuplicateHKey"              },
    { 0x030e, "SHRegEnumUSKeyA"                 },
    { 0x030f, "SHRegEnumUSKeyW"                 },
    { 0x0310, "SHRegEnumUSValueA"               },
    { 0x0311, "SHRegEnumUSValueW"               },
    { 0x0312, "SHRegGetBoolUSValueA"            },
    { 0x0313, "SHRegGetBoolUSValueW"            },
    { 0x0118, "SHRegGetIntW"                    },
    { 0x0314, "SHRegGetPathA"                   },
    { 0x0315, "SHRegGetPathW"                   },
    { 0x0316, "SHRegGetUSValueA"                },
    { 0x0317, "SHRegGetUSValueW"                },
    { 0x0318, "SHRegGetValueA"                  },
    { 0x0319, "SHRegGetValueW"                  },
    { 0x031a, "SHRegOpenUSKeyA"                 },
    { 0x031b, "SHRegOpenUSKeyW"                 },
    { 0x031c, "SHRegQueryInfoUSKeyA"            },
    { 0x031d, "SHRegQueryInfoUSKeyW"            },
    { 0x031e, "SHRegQueryUSValueA"              },
    { 0x031f, "SHRegQueryUSValueW"              },
    { 0x0320, "SHRegSetPathA"                   },
    { 0x0321, "SHRegSetPathW"                   },
    { 0x0322, "SHRegSetUSValueA"                },
    { 0x0323, "SHRegSetUSValueW"                },
    { 0x0324, "SHRegWriteUSValueA"              },
    { 0x0325, "SHRegWriteUSValueW"              },
    { 0x0326, "SHRegisterValidateTemplate"      },
    { 0x0327, "SHReleaseThreadRef"              },
    { 0x01d3, "SHRunIndirectRegClientCommand"   },
    { 0x01b0, "SHSendMessageBroadcastA"         },
    { 0x01b1, "SHSendMessageBroadcastW"         },
    { 0x0328, "SHSetThreadRef"                  },
    { 0x0329, "SHSetValueA"                     },
    { 0x032a, "SHSetValueW"                     },
    { 0x032b, "SHSkipJunction"                  },
    { 0x032c, "SHStrDupA"                       },
    { 0x032d, "SHStrDupW"                       },
    { 0x00cb, "SHStripMneumonicA"               },
    { 0x00e1, "SHStripMneumonicW"               },
    { 0x00d9, "SHUnicodeToAnsi"                 },
    { 0x015a, "SHUnicodeToUnicode"              },
    { 0x0009, "SHUnlockShared"                  },
    { 0x032e, "ShellMessageBoxA"                },
    { 0x0184, "ShellMessageBoxW"                },
    { 0x032f, "StrCSpnA"                        },
    { 0x0330, "StrCSpnIA"                       },
    { 0x0331, "StrCSpnIW"                       },
    { 0x0332, "StrCSpnW"                        },
    { 0x0333, "StrCatBuffA"                     },
    { 0x0334, "StrCatBuffW"                     },
    { 0x0335, "StrCatChainW"                    },
    { 0x0336, "StrCatW"                         },
    { 0x0337, "StrChrA"                         },
    { 0x0338, "StrChrIA"                        },
    { 0x0339, "StrChrIW"                        },
    { 0x033a, "StrChrNIW"                       },
    { 0x033b, "StrChrNW"                        },
    { 0x033c, "StrChrW"                         },
    { 0x009b, "StrCmpCA"                        },
    { 0x009c, "StrCmpCW"                        },
    { 0x009d, "StrCmpICA"                       },
    { 0x009e, "StrCmpICW"                       },
    { 0x033d, "StrCmpIW"                        },
    { 0x033e, "StrCmpLogicalW"                  },
    { 0x033f, "StrCmpNA"                        },
    { 0x0097, "StrCmpNCA"                       },
    { 0x0098, "StrCmpNCW"                       },
    { 0x0340, "StrCmpNIA"                       },
    { 0x0099, "StrCmpNICA"                      },
    { 0x009a, "StrCmpNICW"                      },
    { 0x0341, "StrCmpNIW"                       },
    { 0x0342, "StrCmpNW"                        },
    { 0x0343, "StrCmpW"                         },
    { 0x0344, "StrCpyNW"                        },
    { 0x0345, "StrCpyW"                         },
    { 0x0346, "StrDupA"                         },
    { 0x0347, "StrDupW"                         },
    { 0x0348, "StrFormatByteSize64A"            },
    { 0x0349, "StrFormatByteSizeA"              },
    { 0x034a, "StrFormatByteSizeEx"             },
    { 0x034b, "StrFormatByteSizeW"              },
    { 0x034c, "StrFormatKBSizeA"                },
    { 0x034d, "StrFormatKBSizeW"                },
    { 0x034e, "StrFromTimeIntervalA"            },
    { 0x034f, "StrFromTimeIntervalW"            },
    { 0x0350, "StrIsIntlEqualA"                 },
    { 0x0351, "StrIsIntlEqualW"                 },
    { 0x0352, "StrNCatA"                        },
    { 0x0353, "StrNCatW"                        },
    { 0x0354, "StrPBrkA"                        },
    { 0x0355, "StrPBrkW"                        },
    { 0x0356, "StrRChrA"                        },
    { 0x0357, "StrRChrIA"                       },
    { 0x0358, "StrRChrIW"                       },
    { 0x0359, "StrRChrW"                        },
    { 0x035a, "StrRStrIA"                       },
    { 0x035b, "StrRStrIW"                       },
    { 0x035c, "StrRetToBSTR"                    },
    { 0x035d, "StrRetToBufA"                    },
    { 0x035e, "StrRetToBufW"                    },
    { 0x035f, "StrRetToStrA"                    },
    { 0x0360, "StrRetToStrW"                    },
    { 0x0361, "StrSpnA"                         },
    { 0x0362, "StrSpnW"                         },
    { 0x0363, "StrStrA"                         },
    { 0x0364, "StrStrIA"                        },
    { 0x0365, "StrStrIW"                        },
    { 0x0366, "StrStrNIW"                       },
    { 0x0367, "StrStrNW"                        },
    { 0x0368, "StrStrW"                         },
    { 0x0369, "StrToInt64ExA"                   },
    { 0x036a, "StrToInt64ExW"                   },
    { 0x036b, "StrToIntA"                       },
    { 0x036c, "StrToIntExA"                     },
    { 0x036d, "StrToIntExW"                     },
    { 0x036e, "StrToIntW"                       },
    { 0x036f, "StrTrimA"                        },
    { 0x0370, "StrTrimW"                        },
    { 0x0371, "UrlApplySchemeA"                 },
    { 0x0372, "UrlApplySchemeW"                 },
    { 0x0373, "UrlCanonicalizeA"                },
    { 0x0374, "UrlCanonicalizeW"                },
    { 0x0375, "UrlCombineA"                     },
    { 0x0376, "UrlCombineW"                     },
    { 0x0377, "UrlCompareA"                     },
    { 0x0378, "UrlCompareW"                     },
    { 0x0379, "UrlCreateFromPathA"              },
    { 0x037a, "UrlCreateFromPathW"              },
    { 0x037b, "UrlEscapeA"                      },
    { 0x037c, "UrlEscapeW"                      },
    { 0x01ce, "UrlFixupW"                       },
    { 0x037d, "UrlGetLocationA"                 },
    { 0x037e, "UrlGetLocationW"                 },
    { 0x037f, "UrlGetPartA"                     },
    { 0x0380, "UrlGetPartW"                     },
    { 0x0381, "UrlHashA"                        },
    { 0x0382, "UrlHashW"                        },
    { 0x0383, "UrlIsA"                          },
    { 0x0384, "UrlIsNoHistoryA"                 },
    { 0x0385, "UrlIsNoHistoryW"                 },
    { 0x0386, "UrlIsOpaqueA"                    },
    { 0x0387, "UrlIsOpaqueW"                    },
    { 0x0388, "UrlIsW"                          },
    { 0x0389, "UrlUnescapeA"                    },
    { 0x038a, "UrlUnescapeW"                    },
    { 0x0114, "WhichPlatform"                   },
    { 0x038b, "wnsprintfA"                      },
    { 0x038c, "wnsprintfW"                      },
    { 0x038d, "wvnsprintfA"                     },
    { 0x038e, "wvnsprintfW"                     },
};


}
}

#endif

