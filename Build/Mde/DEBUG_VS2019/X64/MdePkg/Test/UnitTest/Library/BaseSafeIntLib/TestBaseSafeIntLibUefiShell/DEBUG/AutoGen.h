/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_1F91B73E_5B6A_4317_80E8_E7C36A3C7AF4
#define _AUTOGENH_1F91B73E_5B6A_4317_80E8_E7C36A3C7AF4

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x1F91B73E, 0x5B6A, 0x4317, {0x80, 0xE8, 0xE7, 0xC3, 0x6A, 0x3C, 0x7A, 0xF4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x082F8BFC, 0x0455, 0x4859, {0xAE, 0x3C, 0xEC, 0xD6, 0x4F, 0xB8, 0x16, 0x42}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUnitTestFrameworkPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
DxeEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
