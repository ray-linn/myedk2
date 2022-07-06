/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2B3DB5DD_B315_4961_8454_0AFF3C811B19
#define _AUTOGENH_2B3DB5DD_B315_4961_8454_0AFF3C811B19

#ifdef __cplusplus
extern "C" {
#endif

#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2B3DB5DD, 0xB315, 0x4961, {0x84, 0x54, 0x0A, 0xFF, 0x3C, 0x81, 0x1B, 0x19}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;

// Protocols
extern EFI_GUID gEfiExtScsiPassThruProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdMptScsiMaxTargetLimit  0U
#define _PCD_SIZE_PcdMptScsiMaxTargetLimit 1
#define _PCD_GET_MODE_SIZE_PcdMptScsiMaxTargetLimit  _PCD_SIZE_PcdMptScsiMaxTargetLimit 
#define _PCD_VALUE_PcdMptScsiMaxTargetLimit  7U
extern const  UINT8  _gPcd_FixedAtBuild_PcdMptScsiMaxTargetLimit;
#define _PCD_GET_MODE_8_PcdMptScsiMaxTargetLimit  _gPcd_FixedAtBuild_PcdMptScsiMaxTargetLimit
//#define _PCD_SET_MODE_8_PcdMptScsiMaxTargetLimit  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMptScsiStallPerPollUsec  0U
#define _PCD_SIZE_PcdMptScsiStallPerPollUsec 4
#define _PCD_GET_MODE_SIZE_PcdMptScsiStallPerPollUsec  _PCD_SIZE_PcdMptScsiStallPerPollUsec 
#define _PCD_VALUE_PcdMptScsiStallPerPollUsec  5U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMptScsiStallPerPollUsec;
#define _PCD_GET_MODE_32_PcdMptScsiStallPerPollUsec  _gPcd_FixedAtBuild_PcdMptScsiStallPerPollUsec
//#define _PCD_SET_MODE_32_PcdMptScsiStallPerPollUsec  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MptScsiEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
