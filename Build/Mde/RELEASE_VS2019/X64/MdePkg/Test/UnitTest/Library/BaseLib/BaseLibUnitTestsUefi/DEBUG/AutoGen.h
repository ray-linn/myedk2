/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_df5a6fed_8786_4a9d_9d02_eab39497b4a1
#define _AUTOGENH_df5a6fed_8786_4a9d_9d02_eab39497b4a1

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xdf5a6fed, 0x8786, 0x4a9d, {0x9d, 0x02, 0xea, 0xb3, 0x94, 0x97, 0xb4, 0xa1}}
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
BaseLibUnitTestAppEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
