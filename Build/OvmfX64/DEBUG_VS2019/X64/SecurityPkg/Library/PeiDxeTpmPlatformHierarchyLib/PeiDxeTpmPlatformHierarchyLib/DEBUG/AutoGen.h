/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7794F92C_4E8E_4E57_9E4A_49A0764C7D73
#define _AUTOGENH_7794F92C_4E8E_4E57_9E4A_49A0764C7D73

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdRandomizePlatformHierarchy  0U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdRandomizePlatformHierarchy;
#define _PCD_GET_MODE_BOOL_PcdRandomizePlatformHierarchy  _gPcd_FixedAtBuild_PcdRandomizePlatformHierarchy
//#define _PCD_SET_MODE_BOOL_PcdRandomizePlatformHierarchy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdRandomizePlatformHierarchy 1
#define _PCD_SIZE_PcdRandomizePlatformHierarchy 1
#define _PCD_GET_MODE_SIZE_PcdRandomizePlatformHierarchy _PCD_SIZE_PcdRandomizePlatformHierarchy


#ifdef __cplusplus
}
#endif

#endif
