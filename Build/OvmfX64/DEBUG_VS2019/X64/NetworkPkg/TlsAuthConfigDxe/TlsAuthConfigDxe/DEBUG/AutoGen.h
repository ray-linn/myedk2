/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_7ca1024f_eb17_11e5_9dba_28d2447c4829
#define _AUTOGENH_7ca1024f_eb17_11e5_9dba_28d2447c4829

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x7ca1024f, 0xeb17, 0x11e5, {0x9d, 0xba, 0x28, 0xd2, 0x44, 0x7c, 0x48, 0x29}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gTlsAuthConfigGuid;
extern EFI_GUID gEfiCertX509Guid;
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiTlsCaCertificateGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEdkiiIfrBitVarstoreGuid;
extern EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid;
extern EFI_GUID gEdkiiHttpTlsCipherListGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiHiiPopupProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
TlsAuthConfigDxeDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
TlsAuthConfigDxeUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "TlsAuthConfigDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
