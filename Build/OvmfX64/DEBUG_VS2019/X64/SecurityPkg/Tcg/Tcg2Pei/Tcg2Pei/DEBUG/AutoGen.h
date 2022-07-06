/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_A0C98B77_CBA5_4BB8_993B_4AF6CE33ECE4
#define _AUTOGENH_A0C98B77_CBA5_4BB8_993B_4AF6CE33ECE4

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xA0C98B77, 0xCBA5, 0x4BB8, {0x99, 0x3B, 0x4A, 0xF6, 0xCE, 0x33, 0xEC, 0xE4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gTcgEventEntryHobGuid;
extern EFI_GUID gTpmErrorHobGuid;
extern EFI_GUID gMeasuredFvHobGuid;
extern EFI_GUID gTcgEvent2EntryHobGuid;
extern EFI_GUID gEfiTpmDeviceInstanceNoneGuid;
extern EFI_GUID gEfiTpmDeviceInstanceTpm12Guid;
extern EFI_GUID gEdkiiMigratedFvInfoGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gZeroGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;

// PPIs
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoMeasurementExcludedPpiGuid;
extern EFI_GUID gPeiTpmInitializedPpiGuid;
extern EFI_GUID gPeiTpmInitializationDonePpiGuid;
extern EFI_GUID gEfiEndOfPeiSignalPpiGuid;
extern EFI_GUID gEdkiiPeiFirmwareVolumeInfoPrehashedFvPpiGuid;
extern EFI_GUID gEdkiiTcgPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFirmwareVersionString  0U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[1];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 2
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTcgPfpMeasurementRevision  0U
#define _PCD_SIZE_PcdTcgPfpMeasurementRevision 4
#define _PCD_GET_MODE_SIZE_PcdTcgPfpMeasurementRevision  _PCD_SIZE_PcdTcgPfpMeasurementRevision 
#define _PCD_VALUE_PcdTcgPfpMeasurementRevision  0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdTcgPfpMeasurementRevision;
#define _PCD_GET_MODE_32_PcdTcgPfpMeasurementRevision  _gPcd_FixedAtBuild_PcdTcgPfpMeasurementRevision
//#define _PCD_SET_MODE_32_PcdTcgPfpMeasurementRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpmInstanceGuid  13U
#define _PCD_GET_MODE_PTR_PcdTpmInstanceGuid  LibPcdGetPtr(_PCD_TOKEN_PcdTpmInstanceGuid)
#define _PCD_GET_MODE_SIZE_PcdTpmInstanceGuid  LibPcdGetSize(_PCD_TOKEN_PcdTpmInstanceGuid)
#define _PCD_SET_MODE_PTR_PcdTpmInstanceGuid(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdTpmInstanceGuid, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdTpmInstanceGuid(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdTpmInstanceGuid, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdTpm2InitializationPolicy  0U
#define _PCD_SIZE_PcdTpm2InitializationPolicy 1
#define _PCD_GET_MODE_SIZE_PcdTpm2InitializationPolicy  _PCD_SIZE_PcdTpm2InitializationPolicy 
#define _PCD_VALUE_PcdTpm2InitializationPolicy  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpm2InitializationPolicy;
#define _PCD_GET_MODE_8_PcdTpm2InitializationPolicy  _gPcd_FixedAtBuild_PcdTpm2InitializationPolicy
//#define _PCD_SET_MODE_8_PcdTpm2InitializationPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpm2SelfTestPolicy  0U
#define _PCD_SIZE_PcdTpm2SelfTestPolicy 1
#define _PCD_GET_MODE_SIZE_PcdTpm2SelfTestPolicy  _PCD_SIZE_PcdTpm2SelfTestPolicy 
#define _PCD_VALUE_PcdTpm2SelfTestPolicy  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpm2SelfTestPolicy;
#define _PCD_GET_MODE_8_PcdTpm2SelfTestPolicy  _gPcd_FixedAtBuild_PcdTpm2SelfTestPolicy
//#define _PCD_SET_MODE_8_PcdTpm2SelfTestPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpm2ScrtmPolicy  0U
#define _PCD_SIZE_PcdTpm2ScrtmPolicy 1
#define _PCD_GET_MODE_SIZE_PcdTpm2ScrtmPolicy  _PCD_SIZE_PcdTpm2ScrtmPolicy 
#define _PCD_VALUE_PcdTpm2ScrtmPolicy  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdTpm2ScrtmPolicy;
#define _PCD_GET_MODE_8_PcdTpm2ScrtmPolicy  _gPcd_FixedAtBuild_PcdTpm2ScrtmPolicy
//#define _PCD_SET_MODE_8_PcdTpm2ScrtmPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeSubClassTpmDevice  0U
#define _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 4
#define _PCD_GET_MODE_SIZE_PcdStatusCodeSubClassTpmDevice  _PCD_SIZE_PcdStatusCodeSubClassTpmDevice 
#define _PCD_VALUE_PcdStatusCodeSubClassTpmDevice  0x010D0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice;
#define _PCD_GET_MODE_32_PcdStatusCodeSubClassTpmDevice  _gPcd_FixedAtBuild_PcdStatusCodeSubClassTpmDevice
//#define _PCD_SET_MODE_32_PcdStatusCodeSubClassTpmDevice  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdTpm2HashMask  12U
#define _PCD_GET_MODE_32_PcdTpm2HashMask  LibPcdGet32(_PCD_TOKEN_PcdTpm2HashMask)
#define _PCD_GET_MODE_SIZE_PcdTpm2HashMask  LibPcdGetSize(_PCD_TOKEN_PcdTpm2HashMask)
#define _PCD_SET_MODE_32_PcdTpm2HashMask(Value)  LibPcdSet32(_PCD_TOKEN_PcdTpm2HashMask, (Value))
#define _PCD_SET_MODE_32_S_PcdTpm2HashMask(Value)  LibPcdSet32S(_PCD_TOKEN_PcdTpm2HashMask, (Value))

#define _PCD_TOKEN_PcdTcg2HashAlgorithmBitmap  11U
#define _PCD_GET_MODE_32_PcdTcg2HashAlgorithmBitmap  LibPcdGet32(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap)
#define _PCD_GET_MODE_SIZE_PcdTcg2HashAlgorithmBitmap  LibPcdGetSize(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap)
#define _PCD_SET_MODE_32_PcdTcg2HashAlgorithmBitmap(Value)  LibPcdSet32(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap, (Value))
#define _PCD_SET_MODE_32_S_PcdTcg2HashAlgorithmBitmap(Value)  LibPcdSet32S(_PCD_TOKEN_PcdTcg2HashAlgorithmBitmap, (Value))

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
