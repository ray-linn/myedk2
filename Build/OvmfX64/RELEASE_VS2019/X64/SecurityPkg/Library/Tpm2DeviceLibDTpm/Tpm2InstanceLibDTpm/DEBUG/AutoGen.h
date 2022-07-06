/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_286BF25A_C2C3_408c_B3B4_25E6758B7317
#define _AUTOGENH_286BF25A_C2C3_408c_B3B4_25E6758B7317

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiSecurityPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdTpmBaseAddress  0U
extern const UINT64 _gPcd_FixedAtBuild_PcdTpmBaseAddress;
#define _PCD_GET_MODE_64_PcdTpmBaseAddress  _gPcd_FixedAtBuild_PcdTpmBaseAddress
//#define _PCD_SET_MODE_64_PcdTpmBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdTpmBaseAddress 0xFED40000
#define _PCD_SIZE_PcdTpmBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdTpmBaseAddress _PCD_SIZE_PcdTpmBaseAddress
#define _PCD_TOKEN_PcdActiveTpmInterfaceType  8U
#define _PCD_GET_MODE_8_PcdActiveTpmInterfaceType  LibPcdGet8(_PCD_TOKEN_PcdActiveTpmInterfaceType)
#define _PCD_GET_MODE_SIZE_PcdActiveTpmInterfaceType  LibPcdGetSize(_PCD_TOKEN_PcdActiveTpmInterfaceType)
#define _PCD_SET_MODE_8_PcdActiveTpmInterfaceType(Value)  LibPcdSet8(_PCD_TOKEN_PcdActiveTpmInterfaceType, (Value))
#define _PCD_SET_MODE_8_S_PcdActiveTpmInterfaceType(Value)  LibPcdSet8S(_PCD_TOKEN_PcdActiveTpmInterfaceType, (Value))
#define _PCD_TOKEN_PcdCRBIdleByPass  9U
#define _PCD_GET_MODE_8_PcdCRBIdleByPass  LibPcdGet8(_PCD_TOKEN_PcdCRBIdleByPass)
#define _PCD_GET_MODE_SIZE_PcdCRBIdleByPass  LibPcdGetSize(_PCD_TOKEN_PcdCRBIdleByPass)
#define _PCD_SET_MODE_8_PcdCRBIdleByPass(Value)  LibPcdSet8(_PCD_TOKEN_PcdCRBIdleByPass, (Value))
#define _PCD_SET_MODE_8_S_PcdCRBIdleByPass(Value)  LibPcdSet8S(_PCD_TOKEN_PcdCRBIdleByPass, (Value))

RETURN_STATUS
EFIAPI
Tpm2InstanceLibDTpmConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
