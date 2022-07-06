/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b5a05743_9b71_489b_a0ed_a0eb3950d23b
#define _AUTOGENH_b5a05743_9b71_489b_a0ed_a0eb3950d23b

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFSBClock  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFSBClock;
#define _PCD_GET_MODE_32_PcdFSBClock  _gPcd_FixedAtBuild_PcdFSBClock
//#define _PCD_SET_MODE_32_PcdFSBClock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFSBClock 200000000
#define _PCD_SIZE_PcdFSBClock 4
#define _PCD_GET_MODE_SIZE_PcdFSBClock _PCD_SIZE_PcdFSBClock


#ifdef __cplusplus
}
#endif

#endif
