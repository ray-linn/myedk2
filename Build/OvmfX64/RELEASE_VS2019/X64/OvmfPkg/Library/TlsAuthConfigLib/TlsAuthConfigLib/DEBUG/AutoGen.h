/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_660AB627_4C5F_4D42_A3B6_BD021E9028BD
#define _AUTOGENH_660AB627_4C5F_4D42_A3B6_BD021E9028BD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEdkiiHttpTlsCipherListGuid;
extern GUID gEfiTlsCaCertificateGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
TlsAuthConfigInit (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
