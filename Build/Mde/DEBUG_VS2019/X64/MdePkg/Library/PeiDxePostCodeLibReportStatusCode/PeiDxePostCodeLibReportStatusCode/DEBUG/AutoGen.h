/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_e062c52d_78dc_4cc5_b246_b13497a8123c
#define _AUTOGENH_e062c52d_78dc_4cc5_b246_b13497a8123c

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdPostCodePropertyMask  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdPostCodePropertyMask;
#define _PCD_GET_MODE_8_PcdPostCodePropertyMask  _gPcd_FixedAtBuild_PcdPostCodePropertyMask
//#define _PCD_SET_MODE_8_PcdPostCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPostCodePropertyMask 0
#define _PCD_SIZE_PcdPostCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPostCodePropertyMask _PCD_SIZE_PcdPostCodePropertyMask


#ifdef __cplusplus
}
#endif

#endif
