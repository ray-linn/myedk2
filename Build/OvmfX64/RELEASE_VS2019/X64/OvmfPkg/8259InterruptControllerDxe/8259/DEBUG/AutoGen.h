/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_245CB4DA_8E15_4A1B_87E3_9878FFA07520
#define _AUTOGENH_245CB4DA_8E15_4A1B_87E3_9878FFA07520

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x245CB4DA, 0x8E15, 0x4A1B, {0x87, 0xE3, 0x98, 0x78, 0xFF, 0xA0, 0x75, 0x20}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiLegacy8259ProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_Pcd8259LegacyModeMask  0U
#define _PCD_SIZE_Pcd8259LegacyModeMask 2
#define _PCD_GET_MODE_SIZE_Pcd8259LegacyModeMask  _PCD_SIZE_Pcd8259LegacyModeMask 
#define _PCD_VALUE_Pcd8259LegacyModeMask  0xFFFFU
extern const  UINT16  _gPcd_FixedAtBuild_Pcd8259LegacyModeMask;
#define _PCD_GET_MODE_16_Pcd8259LegacyModeMask  _gPcd_FixedAtBuild_Pcd8259LegacyModeMask
//#define _PCD_SET_MODE_16_Pcd8259LegacyModeMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_Pcd8259LegacyModeEdgeLevel  0U
#define _PCD_SIZE_Pcd8259LegacyModeEdgeLevel 2
#define _PCD_GET_MODE_SIZE_Pcd8259LegacyModeEdgeLevel  _PCD_SIZE_Pcd8259LegacyModeEdgeLevel 
#define _PCD_VALUE_Pcd8259LegacyModeEdgeLevel  0x0E20U
extern const  UINT16  _gPcd_FixedAtBuild_Pcd8259LegacyModeEdgeLevel;
#define _PCD_GET_MODE_16_Pcd8259LegacyModeEdgeLevel  _gPcd_FixedAtBuild_Pcd8259LegacyModeEdgeLevel
//#define _PCD_SET_MODE_16_Pcd8259LegacyModeEdgeLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
Install8259 (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
