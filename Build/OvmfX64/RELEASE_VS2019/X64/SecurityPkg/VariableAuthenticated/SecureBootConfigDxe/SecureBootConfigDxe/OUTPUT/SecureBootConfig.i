#line 1 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfig.vfr"
#line 1 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigDxe\\DEBUG\\SecureBootConfigDxeStrDefs.h"





















































































































extern unsigned char SecureBootConfigDxeStrings[];







































#line 159 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigDxe\\DEBUG\\SecureBootConfigDxeStrDefs.h"

#line 161 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigDxe\\DEBUG\\SecureBootConfigDxeStrDefs.h"
#line 1 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfig.vfr"








#line 1 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigNvData.h"











#line 1 "d:\\edk2\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"



























extern EFI_GUID  gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID  gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID  gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID  gEfiHiiRestStyleFormsetGuid;

#line 34 "d:\\edk2\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"
#line 13 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigNvData.h"
#line 1 "d:\\edk2\\edk2\\SecurityPkg\\Include\\Guid/SecureBootConfigHii.h"
















extern EFI_GUID  { 0x5daf50a5, 0xea81, 0x4de2, {0x8f, 0x9b, 0xca, 0xbd, 0xa9, 0xcf, 0x5c, 0x14}};

#line 20 "d:\\edk2\\edk2\\SecurityPkg\\Include\\Guid/SecureBootConfigHii.h"
#line 14 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigNvData.h"















































































































typedef struct {
  BOOLEAN         AttemptSecureBoot; 
  BOOLEAN         HideSecureBoot;    
  CHAR16          SignatureGuid[37];
  BOOLEAN         PhysicalPresent; 
  UINT8           SecureBootMode;  
  BOOLEAN         DeletePk;
  BOOLEAN         HasPk;             
  BOOLEAN         AlwaysRevocation;  
  UINT8           CertificateFormat; 
  EFI_HII_DATE    RevocationDate;    
  EFI_HII_TIME    RevocationTime;    
  UINT8           FileEnrollType;    
  UINT32          ListCount;         
  UINT32          CheckedDataCount;  
} SECUREBOOT_CONFIGURATION;

#line 143 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfigNvData.h"
#line 10 "d:\\edk2\\edk2\\SecurityPkg\\VariableAuthenticated\\SecureBootConfigDxe\\SecureBootConfig.vfr"

formset
  guid      = { 0x5daf50a5, 0xea81, 0x4de2, {0x8f, 0x9b, 0xca, 0xbd, 0xa9, 0xcf, 0x5c, 0x14} },
  title     = STRING_TOKEN(0x0002),
  help      = STRING_TOKEN(0x0003),
  classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },

  varstore SECUREBOOT_CONFIGURATION,
    varid = 0x0001,
    name  = SECUREBOOT_CONFIGURATION,
    guid  = { 0x5daf50a5, 0xea81, 0x4de2, {0x8f, 0x9b, 0xca, 0xbd, 0xa9, 0xcf, 0x5c, 0x14} };

  
  
  
  form formid = 0x01,
    title = STRING_TOKEN(0x0002);

    subtitle text = STRING_TOKEN(0x0004);

    text
      help   = STRING_TOKEN(0x0006),
      text   = STRING_TOKEN(0x0005),
        text   = STRING_TOKEN(0x0007);

    
    
    
    grayoutif ideqval SECUREBOOT_CONFIGURATION.HideSecureBoot == 1 OR NOT ideqval SECUREBOOT_CONFIGURATION.PhysicalPresent == 1;
    checkbox varid = SECUREBOOT_CONFIGURATION.AttemptSecureBoot,
          questionid = 0x1000,
          prompt = STRING_TOKEN(0x0008),
          help   = STRING_TOKEN(0x0009),
          flags  = INTERACTIVE | RESET_REQUIRED,
    endcheckbox;
    endif;

    
    
    
    oneof name = SecureBootMode,
          questionid = 0x1001,
          prompt = STRING_TOKEN(0x002B),
          help   = STRING_TOKEN(0x002C),
          flags  = INTERACTIVE | NUMERIC_SIZE_1,
          option text = STRING_TOKEN(0x002D),    value = 0x00, flags = DEFAULT;
          option text = STRING_TOKEN(0x002E),      value = 0x01,   flags = 0;
    endoneof;

    
    
    
    suppressif questionref(SecureBootMode) == 0x00;
    grayoutif NOT ideqval SECUREBOOT_CONFIGURATION.PhysicalPresent == 1;
    goto 0x02,
         prompt = STRING_TOKEN(0x002F),
         help   = STRING_TOKEN(0x0030),
         flags  = INTERACTIVE,
         key    = 0x1100;
    endif;
    endif;

    text
      help   = STRING_TOKEN(0x000A),
      text   = STRING_TOKEN(0x000B),
      flags  = INTERACTIVE,
      key    = 0x1010;

  endform;

  
  
  
  form formid = 0x02,
    title  = STRING_TOKEN(0x0031);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x03,
         prompt = STRING_TOKEN(0x0032),
         help   = STRING_TOKEN(0x0033),
         flags  = INTERACTIVE,
         key    = 0x1101;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x04,
         prompt = STRING_TOKEN(0x0034),
         help   = STRING_TOKEN(0x0035),
         flags  = INTERACTIVE,
         key    = 0x1102;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x05,
         prompt = STRING_TOKEN(0x0036),
         help   = STRING_TOKEN(0x0037),
         flags  = INTERACTIVE,
         key    = 0x1103;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x06,
         prompt = STRING_TOKEN(0x0038),
         help   = STRING_TOKEN(0x0039),
         flags  = INTERACTIVE,
         key    = 0x1104;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x14,
         prompt = STRING_TOKEN(0x003A),
         help   = STRING_TOKEN(0x003B),
         flags  = INTERACTIVE,
         key    = 0x110d;

  endform;

  
  
  
  form formid = 0x03,
    title  = STRING_TOKEN(0x0032);

    subtitle text = STRING_TOKEN(0x0004);

    
    
    
    grayoutif ideqval SECUREBOOT_CONFIGURATION.HasPk == 1;
    goto 0x07,
         prompt = STRING_TOKEN(0x003C),
         help   = STRING_TOKEN(0x003D),
         flags  = INTERACTIVE,
         key    = 0x1106;
    endif;

    subtitle text = STRING_TOKEN(0x0004);

    
    
    
    grayoutif ideqval SECUREBOOT_CONFIGURATION.HideSecureBoot == 1;
    checkbox varid = SECUREBOOT_CONFIGURATION.DeletePk,
          questionid = 0x1105,
          prompt = STRING_TOKEN(0x003F),
          help   = STRING_TOKEN(0x0040),
          flags  = INTERACTIVE | RESET_REQUIRED,
    endcheckbox;
    endif;
  endform;

  
  
  
  form formid = 0x07,
    title  = STRING_TOKEN(0x003C);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x07,
         prompt = STRING_TOKEN(0x003E),
         help = STRING_TOKEN(0x003E),
         flags = INTERACTIVE,
         key = 0x07;

    subtitle text = STRING_TOKEN(0x0004);
    label 0x07;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

    goto 0x02,
      prompt = STRING_TOKEN(0x0029),
      help   = STRING_TOKEN(0x0029),
      flags  = INTERACTIVE| RESET_REQUIRED,
      key    = 0x1004;

    goto 0x02,
      prompt = STRING_TOKEN(0x002A),
      help   = STRING_TOKEN(0x002A),
      flags  = INTERACTIVE,
      key    = 0x1005;

  endform;

  
  
  
  form formid = 0x04,
    title  = STRING_TOKEN(0x0034);

    
    
    
    goto 0x09,
         prompt = STRING_TOKEN(0x0041),
         help   = STRING_TOKEN(0x0042),
         flags  = INTERACTIVE;

    subtitle text = STRING_TOKEN(0x0004);

    
    
    
    goto 0x0a,
         prompt = STRING_TOKEN(0x0043),
         help   = STRING_TOKEN(0x0044),
         flags  = INTERACTIVE,
         key    = 0x1108;

    subtitle text = STRING_TOKEN(0x0004);
  endform;

  
  
  
  form formid = 0x09,
    title = STRING_TOKEN(0x0045);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x09,
         prompt = STRING_TOKEN(0x0047),
         help   = STRING_TOKEN(0x0048),
         flags  = INTERACTIVE,
         key    = 0x09;

    subtitle text = STRING_TOKEN(0x0004);
    label 0x09;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

    string  varid   = SECUREBOOT_CONFIGURATION.SignatureGuid,
            prompt  = STRING_TOKEN(0x0016),
            help    = STRING_TOKEN(0x0017),
            flags   = INTERACTIVE,
            key     = 0x110a,
            minsize = 36,
            maxsize = 36,
    endstring;

    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x0004);

    goto 0x02,
      prompt = STRING_TOKEN(0x0029),
      help   = STRING_TOKEN(0x0029),
      flags  = INTERACTIVE,
      key    = 0x1008;

    goto 0x02,
      prompt = STRING_TOKEN(0x002A),
      help   = STRING_TOKEN(0x002A),
      flags  = INTERACTIVE,
      key    = 0x1009;

  endform;

  
  
  
  form formid = 0x0a,
    title  = STRING_TOKEN(0x0046);

    label 0x1200;
    label 0xffff;

    subtitle text = STRING_TOKEN(0x0004);

  endform;

  
  
  
  form formid = 0x05,
    title = STRING_TOKEN(0x0036);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x0b,
    prompt = STRING_TOKEN (0x000D),
    help   = STRING_TOKEN (0x000D),
    flags  = 0;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x0c,
    prompt = STRING_TOKEN (0x000E),
    help   = STRING_TOKEN (0x000E),
    flags  = INTERACTIVE,
    key    = 0x0c;

  endform;

  
  
  
  form formid = 0x06,
    title = STRING_TOKEN(0x0038);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x0d,
    prompt = STRING_TOKEN (0x000D),
    help   = STRING_TOKEN (0x000D),
    flags  = 0;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x17,
    prompt = STRING_TOKEN (0x000E),
    help   = STRING_TOKEN (0x000E),
    flags  = INTERACTIVE,
    key    = 0x100f;

  endform;

  
  
  
  form formid = 0x14,
    title = STRING_TOKEN(0x003A);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x15,
    prompt = STRING_TOKEN (0x000D),
    help   = STRING_TOKEN (0x000D),
    flags  = 0;

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x16,
    prompt = STRING_TOKEN (0x000E),
    help   = STRING_TOKEN (0x000E),
    flags  = INTERACTIVE,
    key    = 0x16;

  endform;

  
  
  
  form formid = 0x0c,
    title  = STRING_TOKEN(0x000E);

    label 0x1201;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

  endform;

  
  
  
  form formid = 0x17,
    title  = STRING_TOKEN(0x000F);

    subtitle text = STRING_TOKEN(0x0004);

    grayoutif ideqval SECUREBOOT_CONFIGURATION.ListCount == 0;
      label 0x1300;
      
      
      
      label 0xffff;
   endif;

   subtitle text = STRING_TOKEN(0x0004);
   label 0x1202;
   label 0xffff;
   subtitle text = STRING_TOKEN(0x0004);

  endform;

  
  
  
  form formid = 0x18,
    title = STRING_TOKEN(0x0010);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x17,
      prompt = STRING_TOKEN(0x0012),
      help   = STRING_TOKEN(0x0014),
      flags  = INTERACTIVE,
      key    = 0x1110;

    grayoutif ideqval SECUREBOOT_CONFIGURATION.CheckedDataCount == 0;
      goto 0x17,
        prompt = STRING_TOKEN(0x0013),
        help   = STRING_TOKEN(0x0015),
        flags  = INTERACTIVE,
        key    = 0x1111;
    endif;

    subtitle text = STRING_TOKEN(0x0004);
    label 0x1204;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

  endform;


  
  
  
  form formid = 0x16,
    title  = STRING_TOKEN(0x000E);

    label 0x1203;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

  endform;

  
  
  
  form formid = 0x0b,
    title = STRING_TOKEN(0x000D);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x0b,
         prompt = STRING_TOKEN(0x0018),
         help = STRING_TOKEN(0x0018),
         flags = INTERACTIVE,
         key = 0x0b;

    subtitle text = STRING_TOKEN(0x0004);
    label 0x0b;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

    string  varid   = SECUREBOOT_CONFIGURATION.SignatureGuid,
            prompt  = STRING_TOKEN(0x0016),
            help    = STRING_TOKEN(0x0017),
            flags   = INTERACTIVE,
            key     = 0x110b,
            minsize = 36,
            maxsize = 36,
    endstring;

    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x0004);

    goto 0x02,
         prompt = STRING_TOKEN(0x0029),
         help   = STRING_TOKEN(0x0029),
         flags  = INTERACTIVE,
         key    = 0x1002;

    goto 0x02,
         prompt = STRING_TOKEN(0x002A),
         help   = STRING_TOKEN(0x002A),
         flags  = INTERACTIVE,
         key    = 0x1003;

  endform;

  
  
  
  form formid = 0x0d,
    title = STRING_TOKEN(0x000D);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x0d,
         prompt = STRING_TOKEN(0x0018),
         help = STRING_TOKEN(0x0018),
         flags = INTERACTIVE,
         key = 0x0d;

    label 0x0d;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

    grayoutif ideqval SECUREBOOT_CONFIGURATION.FileEnrollType == 3;
      string  varid   = SECUREBOOT_CONFIGURATION.SignatureGuid,
              prompt  = STRING_TOKEN(0x0016),
              help    = STRING_TOKEN(0x0017),
              flags   = INTERACTIVE,
              key     = 0x110c,
              minsize = 36,
              maxsize = 36,
      endstring;
    endif;

    disableif NOT ideqval SECUREBOOT_CONFIGURATION.FileEnrollType == 1;
      oneof name = X509SignatureFormatInDbx,
            varid       = SECUREBOOT_CONFIGURATION.CertificateFormat,
            prompt      = STRING_TOKEN(0x0019),
            help        = STRING_TOKEN(0x001A),
            option text = STRING_TOKEN(0x001B), value = 0x1, flags = DEFAULT;
            option text = STRING_TOKEN(0x001C), value = 0x2, flags = 0;
            option text = STRING_TOKEN(0x001D), value = 0x3, flags = 0;
            option text = STRING_TOKEN(0x001E), value = 0x4, flags = 0;
      endoneof;
    endif;

    disableif NOT ideqval SECUREBOOT_CONFIGURATION.FileEnrollType == 2;
      text
        help   = STRING_TOKEN(0x001F),          
        text   = STRING_TOKEN(0x0019),     
        text   = STRING_TOKEN(0x0020);              
    endif;

    disableif NOT ideqval SECUREBOOT_CONFIGURATION.FileEnrollType == 3;
      text
        help   = STRING_TOKEN(0x0021),            
        text   = STRING_TOKEN(0x0019),     
        text   = STRING_TOKEN(0x0022);                 
    endif;

    suppressif ideqval SECUREBOOT_CONFIGURATION.CertificateFormat == 4;
        checkbox varid  = SECUREBOOT_CONFIGURATION.AlwaysRevocation,
               prompt = STRING_TOKEN(0x0027),
               help   = STRING_TOKEN(0x0028),
               flags  = INTERACTIVE,
        endcheckbox;

        suppressif ideqval SECUREBOOT_CONFIGURATION.AlwaysRevocation == 1;
            date  varid  = SECUREBOOT_CONFIGURATION.RevocationDate,
                  prompt = STRING_TOKEN(0x0025),
                  help   = STRING_TOKEN(0x0026),
                  flags  = STORAGE_NORMAL,
            enddate;

            time varid   = SECUREBOOT_CONFIGURATION.RevocationTime,
                 prompt  = STRING_TOKEN(0x0023),
                 help    = STRING_TOKEN(0x0024),
                 flags   = STORAGE_NORMAL,
            endtime;
        endif;
    endif;

    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x0004);

    goto 0x02,
         prompt = STRING_TOKEN(0x0029),
         help   = STRING_TOKEN(0x0029),
         flags  = INTERACTIVE,
         key    = 0x100a;

    goto 0x02,
         prompt = STRING_TOKEN(0x002A),
         help   = STRING_TOKEN(0x002A),
         flags  = INTERACTIVE,
         key    = 0x100b;

  endform;

  
  
  
  form formid = 0x15,
    title = STRING_TOKEN(0x000D);

    subtitle text = STRING_TOKEN(0x0004);

    goto 0x15,
         prompt = STRING_TOKEN(0x0018),
         help = STRING_TOKEN(0x0018),
         flags = INTERACTIVE,
         key = 0x15;

    subtitle text = STRING_TOKEN(0x0004);
    label 0x15;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x0004);

    string  varid   = SECUREBOOT_CONFIGURATION.SignatureGuid,
            prompt  = STRING_TOKEN(0x0016),
            help    = STRING_TOKEN(0x0017),
            flags   = INTERACTIVE,
            key     = 0x110e,
            minsize = 36,
            maxsize = 36,
    endstring;

    subtitle text = STRING_TOKEN(0x0004);
    subtitle text = STRING_TOKEN(0x0004);

    goto 0x02,
         prompt = STRING_TOKEN(0x0029),
         help   = STRING_TOKEN(0x0029),
         flags  = INTERACTIVE,
         key    = 0x100d;

    goto 0x02,
         prompt = STRING_TOKEN(0x002A),
         help   = STRING_TOKEN(0x002A),
         flags  = INTERACTIVE,
         key    = 0x100e;

  endform;

endformset;
