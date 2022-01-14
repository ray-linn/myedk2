/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2F2A1907_B1B4_4E33_8B83_62A60AB4F0D4
#define _AUTOGENH_2F2A1907_B1B4_4E33_8B83_62A60AB4F0D4

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2F2A1907, 0xB1B4, 0x4E33, {0x8B, 0x83, 0x62, 0xA6, 0x0A, 0xB4, 0xF0, 0xD4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x082F8BFC, 0x0455, 0x4859, {0xAE, 0x3C, 0xEC, 0xD6, 0x4F, 0xB8, 0x16, 0x42}}

// Guids
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gUnitTestFrameworkPkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// Protocols
extern EFI_GUID gEfiLoadedImageProtocolGuid;

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
