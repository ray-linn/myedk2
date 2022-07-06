#line 1 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigVfr.vfr"
#line 1 "d:\\edk2\\edk2\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigDxe\\DEBUG\\TlsAuthConfigDxeStrDefs.h"




































extern unsigned char TlsAuthConfigDxeStrings[];
























#line 63 "d:\\edk2\\edk2\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigDxe\\DEBUG\\TlsAuthConfigDxeStrDefs.h"

#line 65 "d:\\edk2\\edk2\\Build\\OvmfX64\\DEBUG_VS2019\\X64\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigDxe\\DEBUG\\TlsAuthConfigDxeStrDefs.h"
#line 1 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigVfr.vfr"









#line 1 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigNvData.h"











#line 1 "d:\\edk2\\edk2\\NetworkPkg\\Include\\Guid/TlsAuthConfigHii.h"
















extern EFI_GUID  { 0xb0eae4f8, 0x9a04, 0x4c6d, { 0xa7, 0x48, 0x79, 0x3d, 0xaa, 0xf, 0x65, 0xdf }};

#line 20 "d:\\edk2\\edk2\\NetworkPkg\\Include\\Guid/TlsAuthConfigHii.h"
#line 13 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigNvData.h"

























typedef struct {
  CHAR16    CertGuid[37];
} TLS_AUTH_CONFIG_IFR_NVDATA;

#line 43 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigNvData.h"
#line 11 "d:\\edk2\\edk2\\NetworkPkg\\TlsAuthConfigDxe\\TlsAuthConfigVfr.vfr"

formset
  guid   = { 0xb0eae4f8, 0x9a04, 0x4c6d, { 0xa7, 0x48, 0x79, 0x3d, 0xaa, 0xf, 0x65, 0xdf } },
  title  = STRING_TOKEN(0x0002),
  help   = STRING_TOKEN(0x0003),

  varstore TLS_AUTH_CONFIG_IFR_NVDATA,
    name = TLS_AUTH_CONFIG_IFR_NVDATA,
    guid = { 0xb0eae4f8, 0x9a04, 0x4c6d, { 0xa7, 0x48, 0x79, 0x3d, 0xaa, 0xf, 0x65, 0xdf } };

  
  
  
  form formid = 1,
    title  = STRING_TOKEN(0x0002);

    subtitle text = STRING_TOKEN(0x0013);

    
    
    
    goto 2,
         prompt = STRING_TOKEN(0x0004),
         help   = STRING_TOKEN(0x0005),
         flags  = INTERACTIVE,
         key    = 0x1000;

    subtitle text = STRING_TOKEN(0x0013);

    
    
    
    grayoutif TRUE; 
    goto 3,
         prompt = STRING_TOKEN(0x0006),
         help   = STRING_TOKEN(0x0007),
         flags  = INTERACTIVE,
         key    = 0x1001;
    endif;
  endform;

  
  
  
  form formid = 2,
    title  = STRING_TOKEN(0x0004);

    subtitle text = STRING_TOKEN(0x0013);

    goto 4,
         prompt = STRING_TOKEN(0x0008),
         help   = STRING_TOKEN(0x0009),
         flags  = INTERACTIVE,
         key    = 0x1002;

    subtitle text = STRING_TOKEN(0x0013);

    goto 5,
         prompt = STRING_TOKEN(0x000A),
         help   = STRING_TOKEN(0x000B),
         flags  = INTERACTIVE,
         key    = 0x1003;
  endform;

  
  
  
  form formid = 3,
    title  = STRING_TOKEN(0x0006);

    subtitle text = STRING_TOKEN(0x0013);

  
  
  
  endform;

  
  
  
  form formid = 4,
    title  = STRING_TOKEN(0x0008);

    subtitle text = STRING_TOKEN(0x0013);

    goto 4,
         prompt = STRING_TOKEN(0x000C),
         help = STRING_TOKEN(0x000C),
         flags = INTERACTIVE,
         key = 0x1004;

    subtitle text = STRING_TOKEN(0x0013);
    label 4;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0013);

    string  varid   = TLS_AUTH_CONFIG_IFR_NVDATA.CertGuid,
            prompt  = STRING_TOKEN(0x000D),
            help    = STRING_TOKEN(0x000E),
            flags   = INTERACTIVE,
            key     = 0x1005,
            minsize = 36,
            maxsize = 36,
    endstring;

    subtitle text = STRING_TOKEN(0x0013);
    subtitle text = STRING_TOKEN(0x0013);

    goto 1,
         prompt = STRING_TOKEN(0x000F),
         help   = STRING_TOKEN(0x000F),
         flags  = INTERACTIVE,
         key    = 0x1006;

    goto 1,
         prompt = STRING_TOKEN(0x0010),
         help   = STRING_TOKEN(0x0010),
         flags  = INTERACTIVE,
         key    = 0x1007;

  endform;

  
  
  
  form formid = 5,
    title  = STRING_TOKEN(0x000A);

    label 0x1101;
    label 0xffff;

    subtitle text = STRING_TOKEN(0x0013);

  endform;

endformset;

