#line 1 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2Config.vfr"
#line 1 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigDxe\\DEBUG\\Tcg2ConfigDxeStrDefs.h"











































































































extern unsigned char Tcg2ConfigDxeStrings[];







































#line 149 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigDxe\\DEBUG\\Tcg2ConfigDxeStrDefs.h"

#line 151 "d:\\edk2\\edk2\\Build\\OvmfX64\\RELEASE_VS2019\\X64\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigDxe\\DEBUG\\Tcg2ConfigDxeStrDefs.h"
#line 1 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2Config.vfr"








#line 1 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigNvData.h"











#line 1 "d:\\edk2\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"



























extern EFI_GUID  gEfiHiiPlatformSetupFormsetGuid;
extern EFI_GUID  gEfiHiiDriverHealthFormsetGuid;
extern EFI_GUID  gEfiHiiUserCredentialFormsetGuid;
extern EFI_GUID  gEfiHiiRestStyleFormsetGuid;

#line 34 "d:\\edk2\\edk2\\MdePkg\\Include\\Guid/HiiPlatformSetupFormset.h"
#line 13 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigNvData.h"
#line 1 "d:\\edk2\\edk2\\SecurityPkg\\Include\\Guid/Tcg2ConfigHii.h"
















extern EFI_GUID  {0x6339d487, 0x26ba, 0x424b, { 0x9a, 0x5d, 0x68, 0x7e, 0x25, 0xd7, 0x40, 0xbc }};

#line 20 "d:\\edk2\\edk2\\SecurityPkg\\Include\\Guid/Tcg2ConfigHii.h"
#line 14 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigNvData.h"
#line 1 "d:\\edk2\\edk2\\MdePkg\\Include\\IndustryStandard/TcgPhysicalPresence.h"


























































































































#line 124 "d:\\edk2\\edk2\\MdePkg\\Include\\IndustryStandard/TcgPhysicalPresence.h"
#line 15 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigNvData.h"








































typedef struct {
  UINT8    TpmDevice;
} TCG2_CONFIGURATION;

typedef struct {
  UINT64    PpiVersion;
  UINT8     Tpm2AcpiTableRev;
} TCG2_VERSION;

typedef struct {
  BOOLEAN    Sha1Supported;
  BOOLEAN    Sha256Supported;
  BOOLEAN    Sha384Supported;
  BOOLEAN    Sha512Supported;
  BOOLEAN    Sm3Supported;
  UINT8      TpmDeviceInterfaceAttempt;
  BOOLEAN    TpmDeviceInterfacePtpFifoSupported;
  BOOLEAN    TpmDeviceInterfacePtpCrbSupported;
  BOOLEAN    ChangeEPSSupported;
} TCG2_CONFIGURATION_INFO;





typedef struct {
  UINT8    TpmDeviceDetected;
} TCG2_DEVICE_DETECTION;






#line 90 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2ConfigNvData.h"
#line 10 "d:\\edk2\\edk2\\SecurityPkg\\Tcg\\Tcg2Config\\Tcg2Config.vfr"

formset
  guid      = { 0x6339d487, 0x26ba, 0x424b, { 0x9a, 0x5d, 0x68, 0x7e, 0x25, 0xd7, 0x40, 0xbc } },
  title     = STRING_TOKEN(0x0002),
  help      = STRING_TOKEN(0x0003),
  classguid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x4, 0xe } },

  efivarstore TCG2_CONFIGURATION_INFO,
    varid = 0x0002,
    attribute = 0x02,  
    name  = TCG2_CONFIGURATION_INFO,
    guid  = { 0x6339d487, 0x26ba, 0x424b, { 0x9a, 0x5d, 0x68, 0x7e, 0x25, 0xd7, 0x40, 0xbc } };

  efivarstore TCG2_CONFIGURATION,
    varid = 0x0001,
    attribute = 0x03,  
    name  = TCG2_CONFIGURATION,
    guid  = { 0x6339d487, 0x26ba, 0x424b, { 0x9a, 0x5d, 0x68, 0x7e, 0x25, 0xd7, 0x40, 0xbc } };

  efivarstore TCG2_VERSION,
    varid = 0x0003,
    attribute = 0x03,  
    name  = TCG2_VERSION,
    guid  = { 0x6339d487, 0x26ba, 0x424b, { 0x9a, 0x5d, 0x68, 0x7e, 0x25, 0xd7, 0x40, 0xbc } };

  form formid = 0x0001,
    title = STRING_TOKEN(0x0002);

    subtitle text = STRING_TOKEN(0x0054);

    text
      help   = STRING_TOKEN(0x0005),
      text   = STRING_TOKEN(0x0004),
        text   = STRING_TOKEN(0x0006);

    oneof varid  = TCG2_CONFIGURATION.TpmDevice,
          questionid = 0x2000,
          prompt = STRING_TOKEN(0x0007),
          help   = STRING_TOKEN(0x0008),
          flags  = INTERACTIVE,
            option text = STRING_TOKEN(0x002E),          value = 1,          flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
            option text = STRING_TOKEN(0x002F),     value = 2,     flags = RESET_REQUIRED;
    endoneof;

    suppressif ideqvallist TCG2_CONFIGURATION.TpmDevice == 0 1;

    subtitle text = STRING_TOKEN(0x0054);

    text
      help   = STRING_TOKEN(0x000F),
      text   = STRING_TOKEN(0x000E),
        text   = STRING_TOKEN(0x0010);

    text
      help   = STRING_TOKEN(0x0012),
      text   = STRING_TOKEN(0x0011),
        text   = STRING_TOKEN(0x0013);

    oneof varid  = TCG2_VERSION.Tpm2AcpiTableRev,
          questionid = 0x200A,
          prompt = STRING_TOKEN(0x0014),
          help   = STRING_TOKEN(0x0015),
          flags  = INTERACTIVE,
            option text = STRING_TOKEN(0x0030),     value = 3,     flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0031),     value = 4,     flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;

    subtitle text = STRING_TOKEN(0x0054);

    text
      help   = STRING_TOKEN(0x0017),
      text   = STRING_TOKEN(0x0016),
        text   = STRING_TOKEN(0x0018);

    text
      help   = STRING_TOKEN(0x001A),
      text   = STRING_TOKEN(0x0019),
        text   = STRING_TOKEN(0x001B);

    suppressif ideqval TCG2_CONFIGURATION_INFO.TpmDeviceInterfacePtpFifoSupported == 0
            OR ideqval TCG2_CONFIGURATION_INFO.TpmDeviceInterfacePtpCrbSupported == 0;
    oneof varid  = TCG2_CONFIGURATION_INFO.TpmDeviceInterfaceAttempt,
          questionid = 0x2008,
          prompt = STRING_TOKEN(0x001C),
          help   = STRING_TOKEN(0x001D),
          flags  = INTERACTIVE,
            option text = STRING_TOKEN(0x001E),          value = 0,          flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x001F),     value = 1,     flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0020),      value = 2,      flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;
    endif;

    endif;

    subtitle text = STRING_TOKEN(0x0054);

    suppressif ideqvallist TCG2_CONFIGURATION.TpmDevice == 0 1;
    text
      help   = STRING_TOKEN(0x0035),
      text   = STRING_TOKEN(0x0034),
        text   = STRING_TOKEN(0x0036);
    text
      help   = STRING_TOKEN(0x0038),
      text   = STRING_TOKEN(0x0037),
        text   = STRING_TOKEN(0x0039);
    text
      help   = STRING_TOKEN(0x003B),
      text   = STRING_TOKEN(0x003A),
        text   = STRING_TOKEN(0x003C);

    subtitle text = STRING_TOKEN(0x0054);
    subtitle text = STRING_TOKEN(0x0021);

    text
      help   = STRING_TOKEN(0x000A),
      text   = STRING_TOKEN(0x0009),
        text   = STRING_TOKEN(0x000B);

    oneof varid  = TCG2_VERSION.PpiVersion,
          questionid = 0x2009,
          prompt = STRING_TOKEN(0x000C),
          help   = STRING_TOKEN(0x000D),
          flags  = INTERACTIVE,
            option text = STRING_TOKEN(0x0032), value = 0x322E31, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0033), value = 0x332E31, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
    endoneof;

    oneof name = Tpm2Operation,
          questionid = 0x2001,
          prompt = STRING_TOKEN(0x0022),
          help   = STRING_TOKEN(0x0023),
          flags  = INTERACTIVE | NUMERIC_SIZE_1,
            option text = STRING_TOKEN(0x0024), value = 0, flags = DEFAULT | MANUFACTURING | RESET_REQUIRED;
            option text = STRING_TOKEN(0x0025), value = 1, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0026), value = 2, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0027), value = 5, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x0028), value = 23, flags = RESET_REQUIRED;
            suppressif ideqval TCG2_CONFIGURATION_INFO.ChangeEPSSupported == 0;
            option text = STRING_TOKEN(0x0029), value = 24, flags = RESET_REQUIRED;
            endif
            option text = STRING_TOKEN(0x002A), value = 33, flags = RESET_REQUIRED;
            option text = STRING_TOKEN(0x002B), value = 34, flags = RESET_REQUIRED;
    endoneof;

    suppressif NOT questionref(Tpm2Operation) == 23;
    numeric name = Tpm2OperationParameter,
            questionid = 0x2002,
            prompt  = STRING_TOKEN(0x002C),
            help    = STRING_TOKEN(0x002D),
            flags   = DISPLAY_UINT_HEX | INTERACTIVE | NUMERIC_SIZE_4,
            minimum = 0,
            maximum = 0xFFFFFFFF,
            step    = 0,
            default = 0,
    endnumeric;
    endif;

    subtitle text = STRING_TOKEN(0x0054);
    subtitle text = STRING_TOKEN(0x003D);

    text
      help   = STRING_TOKEN(0x003F),
      text   = STRING_TOKEN(0x003E),
        text   = STRING_TOKEN(0x0040);

    text
      help   = STRING_TOKEN(0x0042),
      text   = STRING_TOKEN(0x0041),
        text   = STRING_TOKEN(0x0043);

    text
      help   = STRING_TOKEN(0x0045),
      text   = STRING_TOKEN(0x0044),
        text   = STRING_TOKEN(0x0046);

    text
      help   = STRING_TOKEN(0x0048),
      text   = STRING_TOKEN(0x0047),
        text   = STRING_TOKEN(0x0049);

    subtitle text = STRING_TOKEN(0x0054);

  suppressif ideqval TCG2_CONFIGURATION_INFO.Sha1Supported == 0;
    checkbox name = TCG2ActivatePCRBank0,
            questionid = 0x2003,
            prompt     = STRING_TOKEN(0x004A),
            help       = STRING_TOKEN(0x004B),
            flags      = INTERACTIVE | RESET_REQUIRED,
            default    = 1,
    endcheckbox;
  endif;

  suppressif ideqval TCG2_CONFIGURATION_INFO.Sha256Supported == 0;
    checkbox name = TCG2ActivatePCRBank1,
            questionid = 0x2004,
            prompt     = STRING_TOKEN(0x004C),
            help       = STRING_TOKEN(0x004D),
            flags      = INTERACTIVE | RESET_REQUIRED,
            default    = 0,
    endcheckbox;
  endif;

  suppressif ideqval TCG2_CONFIGURATION_INFO.Sha384Supported == 0;
    checkbox name = TCG2ActivatePCRBank2,
            questionid = 0x2005,
            prompt     = STRING_TOKEN(0x004E),
            help       = STRING_TOKEN(0x004F),
            flags      = INTERACTIVE | RESET_REQUIRED,
            default    = 0,
    endcheckbox;
  endif;

  suppressif ideqval TCG2_CONFIGURATION_INFO.Sha512Supported == 0;
    checkbox name = TCG2ActivatePCRBank3,
            questionid = 0x2006,
            prompt     = STRING_TOKEN(0x0050),
            help       = STRING_TOKEN(0x0051),
            flags      = INTERACTIVE | RESET_REQUIRED,
            default    = 0,
    endcheckbox;
  endif;

  suppressif ideqval TCG2_CONFIGURATION_INFO.Sm3Supported == 0;
    checkbox name = TCG2ActivatePCRBank4,
            questionid = 0x2007,
            prompt     = STRING_TOKEN(0x0052),
            help       = STRING_TOKEN(0x0053),
            flags      = INTERACTIVE | RESET_REQUIRED,
            default    = 0,
    endcheckbox;
  endif;

    endif;

  endform;

endformset;
