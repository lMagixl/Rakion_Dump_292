
undefined4 FUN_360288c0(void)

{
  char *pcVar1;
  CInputDevice *unaff_ESI;
  
  *(undefined4 *)unaff_ESI = 1;
  FUN_3600bc00(unaff_ESI + 0x14,0x100);
  pcVar1 = StringDuplicate(s_Keyboard_36224fcc);
  StringFree(*(char **)(unaff_ESI + 0xc));
  *(char **)(unaff_ESI + 0xc) = pcVar1;
  pcVar1 = StringDuplicate(&DAT_36224fd5);
  StringFree(*(char **)(unaff_ESI + 0x10));
  *(char **)(unaff_ESI + 0x10) = pcVar1;
  CInputDevice::DisableControl(unaff_ESI,0xc0);
  CInputDevice::DisableControl(unaff_ESI,0xc1);
  CInputDevice::DisableControl(unaff_ESI,0xc2);
  CInputDevice::DisableControl(unaff_ESI,0xc3);
  CInputDevice::DisableControl(unaff_ESI,0xc4);
  CInputDevice::DisableControl(unaff_ESI,0xc5);
  CInputDevice::DisableControl(unaff_ESI,0xc6);
  CInputDevice::DisableControl(unaff_ESI,0xd0);
  CInputDevice::DisableControl(unaff_ESI,0xd1);
  CInputDevice::DisableControl(unaff_ESI,0xd2);
  return 1;
}

