/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_a0499b85_e965_460a_a576_d9e37dea62b4
#define _AUTOGENH_a0499b85_e965_460a_a576_d9e37dea62b4

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gZeroTouchVariableGuid;
extern EFI_GUID gZeroTouchPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdZeroTouchCertificateFile  0U
extern const UINT8 _gPcd_FixedAtBuild_PcdZeroTouchCertificateFile[];
#define _PCD_GET_MODE_PTR_PcdZeroTouchCertificateFile  (VOID *)_gPcd_FixedAtBuild_PcdZeroTouchCertificateFile
//#define _PCD_SET_MODE_PTR_PcdZeroTouchCertificateFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdZeroTouchCertificateFile (VOID *)_gPcd_FixedAtBuild_PcdZeroTouchCertificateFile
#define _PCD_SIZE_PcdZeroTouchCertificateFile 16
#define _PCD_GET_MODE_SIZE_PcdZeroTouchCertificateFile _PCD_SIZE_PcdZeroTouchCertificateFile


#ifdef __cplusplus
}
#endif

#endif
