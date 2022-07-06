/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BA6BAD25_B814_4747_B0B0_0FBB61D40B90
#define _AUTOGENH_BA6BAD25_B814_4747_B0B0_0FBB61D40B90

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiDebugAgentGuid;
extern EFI_GUID gEfiVectorHandoffTableGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiSourceLevelDebugPkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;

// PPIs
extern EFI_GUID gEfiVectorHandoffInfoPpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFSBClock  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdFSBClock;
#define _PCD_GET_MODE_32_PcdFSBClock  _gPcd_FixedAtBuild_PcdFSBClock
//#define _PCD_SET_MODE_32_PcdFSBClock  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFSBClock 200000000
#define _PCD_SIZE_PcdFSBClock 4
#define _PCD_GET_MODE_SIZE_PcdFSBClock _PCD_SIZE_PcdFSBClock
#define _PCD_TOKEN_PcdExceptionsIgnoredByDebugger  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdExceptionsIgnoredByDebugger;
#define _PCD_GET_MODE_32_PcdExceptionsIgnoredByDebugger  _gPcd_FixedAtBuild_PcdExceptionsIgnoredByDebugger
//#define _PCD_SET_MODE_32_PcdExceptionsIgnoredByDebugger  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdExceptionsIgnoredByDebugger 0x00000000
#define _PCD_SIZE_PcdExceptionsIgnoredByDebugger 4
#define _PCD_GET_MODE_SIZE_PcdExceptionsIgnoredByDebugger _PCD_SIZE_PcdExceptionsIgnoredByDebugger
#define _PCD_TOKEN_PcdDebugPortHandleBufferSize  0U
extern const UINT16 _gPcd_FixedAtBuild_PcdDebugPortHandleBufferSize;
#define _PCD_GET_MODE_16_PcdDebugPortHandleBufferSize  _gPcd_FixedAtBuild_PcdDebugPortHandleBufferSize
//#define _PCD_SET_MODE_16_PcdDebugPortHandleBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDebugPortHandleBufferSize 0x0
#define _PCD_SIZE_PcdDebugPortHandleBufferSize 2
#define _PCD_GET_MODE_SIZE_PcdDebugPortHandleBufferSize _PCD_SIZE_PcdDebugPortHandleBufferSize
#define _PCD_TOKEN_PcdTransferProtocolRevision  0U
extern const UINT32 _gPcd_FixedAtBuild_PcdTransferProtocolRevision;
#define _PCD_GET_MODE_32_PcdTransferProtocolRevision  _gPcd_FixedAtBuild_PcdTransferProtocolRevision
//#define _PCD_SET_MODE_32_PcdTransferProtocolRevision  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTransferProtocolRevision 0x00000004
#define _PCD_SIZE_PcdTransferProtocolRevision 4
#define _PCD_GET_MODE_SIZE_PcdTransferProtocolRevision _PCD_SIZE_PcdTransferProtocolRevision

EFI_STATUS
EFIAPI
DxeDebugAgentLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
