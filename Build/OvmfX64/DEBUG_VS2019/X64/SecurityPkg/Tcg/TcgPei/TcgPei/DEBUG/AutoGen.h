/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_2BE1E4A6_6505_43b3_9FFC_A3C8330E0432
#define _AUTOGENH_2BE1E4A6_6505_43b3_9FFC_A3C8330E0432

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x2BE1E4A6, 0x6505, 0x43b3, {0x9F, 0xFC, 0xA3, 0xC8, 0x33, 0x0E, 0x04, 0x32}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gTcgEventEntryHobGuid;
extern EFI_GUID gTpmErrorHobGuid;
extern EFI_GUID gMeasuredFvHobGuid;
extern EFI_GUID gEfiTpmDeviceInstanceTpm12Guid;
extern EFI_GUID gEdkiiMigratedFvInfoGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// PPIs
extern EFI_GUID gPeiLockPhysicalPresencePpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoMeasurementExcludedPpiGuid;
extern EFI_GUID gPeiTpmInitializedPpiGuid;
extern EFI_GUID gPeiTpmInitializationDonePpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEdkiiTcgPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPhysicalPresenceLifetimeLock  0U
#define _PCD_SIZE_PcdPhysicalPresenceLifetimeLock 1
#define _PCD_GET_MODE_SIZE_PcdPhysicalPresenceLifetimeLock  _PCD_SIZE_PcdPhysicalPresenceLifetimeLock 
#define _PCD_VALUE_PcdPhysicalPresenceLifetimeLock  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPhysicalPresenceLifetimeLock;
#define _PCD_GET_MODE_BOOL_PcdPhysicalPresenceLifetimeLock  _gPcd_FixedAtBuild_PcdPhysicalPresenceLifetimeLock
//#define _PCD_SET_MODE_BOOL_PcdPhysicalPresenceLifetimeLock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPhysicalPresenceCmdEnable  0U
#define _PCD_SIZE_PcdPhysicalPresenceCmdEnable 1
#define _PCD_GET_MODE_SIZE_PcdPhysicalPresenceCmdEnable  _PCD_SIZE_PcdPhysicalPresenceCmdEnable 
#define _PCD_VALUE_PcdPhysicalPresenceCmdEnable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPhysicalPresenceCmdEnable;
#define _PCD_GET_MODE_BOOL_PcdPhysicalPresenceCmdEnable  _gPcd_FixedAtBuild_PcdPhysicalPresenceCmdEnable
//#define _PCD_SET_MODE_BOOL_PcdPhysicalPresenceCmdEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPhysicalPresenceHwEnable  0U
#define _PCD_SIZE_PcdPhysicalPresenceHwEnable 1
#define _PCD_GET_MODE_SIZE_PcdPhysicalPresenceHwEnable  _PCD_SIZE_PcdPhysicalPresenceHwEnable 
#define _PCD_VALUE_PcdPhysicalPresenceHwEnable  1U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdPhysicalPresenceHwEnable;
#define _PCD_GET_MODE_BOOL_PcdPhysicalPresenceHwEnable  _gPcd_FixedAtBuild_PcdPhysicalPresenceHwEnable
//#define _PCD_SET_MODE_BOOL_PcdPhysicalPresenceHwEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  0U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[1];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 2
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpmInstanceGuid  13U
#define _PCD_GET_MODE_PTR_PcdTpmInstanceGuid  LibPcdGetPtr(_PCD_TOKEN_PcdTpmInstanceGuid)
#define _PCD_GET_MODE_SIZE_PcdTpmInstanceGuid  LibPcdGetSize(_PCD_TOKEN_PcdTpmInstanceGuid)
#define _PCD_SET_MODE_PTR_PcdTpmInstanceGuid(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdTpmInstanceGuid, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdTpmInstanceGuid(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdTpmInstanceGuid, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdTpmInitializationPolicy  0U
#define _PCD_SIZE_PcdTpmInitializationPolicy 1
#define _PCD_GET_MODE_SIZE_PcdTpmInitializationPolicy  _PCD_SIZE_PcdTpmInitializationPolicy 
#define _PCD_VALUE_PcdTpmInitializationPolicy  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpmInitializationPolicy;
#define _PCD_GET_MODE_8_PcdTpmInitializationPolicy  _gPcd_FixedAtBuild_PcdTpmInitializationPolicy
//#define _PCD_SET_MODE_8_PcdTpmInitializationPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpmScrtmPolicy  0U
#define _PCD_SIZE_PcdTpmScrtmPolicy 1
#define _PCD_GET_MODE_SIZE_PcdTpmScrtmPolicy  _PCD_SIZE_PcdTpmScrtmPolicy 
#define _PCD_VALUE_PcdTpmScrtmPolicy  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpmScrtmPolicy;
#define _PCD_GET_MODE_8_PcdTpmScrtmPolicy  _gPcd_FixedAtBuild_PcdTpmScrtmPolicy
//#define _PCD_SET_MODE_8_PcdTpmScrtmPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeSubClassTpmDevice  0U
#define _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 4
#define _PCD_GET_MODE_SIZE_PcdStatusCodeSubClassTpmDevice  _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 
#define _PCD_VALUE_PcdStatusCodeSubClassTpmDevice  0x010D0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice;
#define _PCD_GET_MODE_32_PcdStatusCodeSubClassTpmDevice  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice
//#define _PCD_SET_MODE_32_PcdStatusCodeSubClassTpmDevice  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimEntryMA (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
