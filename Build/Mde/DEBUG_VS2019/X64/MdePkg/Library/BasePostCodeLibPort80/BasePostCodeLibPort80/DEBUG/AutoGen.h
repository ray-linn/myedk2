/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_b6e9a733_eb75_41b6_b30c_009bcf3801c8
#define _AUTOGENH_b6e9a733_eb75_41b6_b30c_009bcf3801c8

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
#define _PCD_TOKEN_PcdPostCodePropertyMask  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdPostCodePropertyMask;
#define _PCD_GET_MODE_8_PcdPostCodePropertyMask  _gPcd_FixedAtBuild_PcdPostCodePropertyMask
//#define _PCD_SET_MODE_8_PcdPostCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPostCodePropertyMask 0
#define _PCD_SIZE_PcdPostCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPostCodePropertyMask _PCD_SIZE_PcdPostCodePropertyMask
#define _PCD_TOKEN_PcdPort80DataWidth  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdPort80DataWidth;
#define _PCD_GET_MODE_8_PcdPort80DataWidth  _gPcd_FixedAtBuild_PcdPort80DataWidth
//#define _PCD_SET_MODE_8_PcdPort80DataWidth  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdPort80DataWidth 8
#define _PCD_SIZE_PcdPort80DataWidth 1
#define _PCD_GET_MODE_SIZE_PcdPort80DataWidth _PCD_SIZE_PcdPort80DataWidth


#ifdef __cplusplus
}
#endif

#endif
