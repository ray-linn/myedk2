/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_158DC712_F15A_44dc_93BB_1675045BE066
#define _AUTOGENH_158DC712_F15A_44dc_93BB_1675045BE066

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
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

EFI_STATUS
EFIAPI
HashLibBaseCryptoRouterDxeConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
