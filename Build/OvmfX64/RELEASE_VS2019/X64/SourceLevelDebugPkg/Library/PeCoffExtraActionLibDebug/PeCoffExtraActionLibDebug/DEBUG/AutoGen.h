/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_8F01CBD5_E069_44d7_90C9_35F0318603AD
#define _AUTOGENH_8F01CBD5_E069_44d7_90C9_35F0318603AD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiSourceLevelDebugPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDebugLoadImageMethod  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdDebugLoadImageMethod;
#define _PCD_GET_MODE_8_PcdDebugLoadImageMethod  _gPcd_FixedAtBuild_PcdDebugLoadImageMethod
//#define _PCD_SET_MODE_8_PcdDebugLoadImageMethod  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDebugLoadImageMethod 0x2
#define _PCD_SIZE_PcdDebugLoadImageMethod 1
#define _PCD_GET_MODE_SIZE_PcdDebugLoadImageMethod _PCD_SIZE_PcdDebugLoadImageMethod


#ifdef __cplusplus
}
#endif

#endif
