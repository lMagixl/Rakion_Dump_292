
undefined4 * __fastcall FUN_36044570(undefined4 *param_1)

{
  char *pcVar1;
  xDeviceFile *pxVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362111f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *param_1 = pcVar1;
  param_1[1] = 0;
  local_4 = 0;
  pxVar2 = Xenesis2::Device::File::createDeviceFile();
  param_1[0x12] = pxVar2;
  iVar3 = FUN_36013910();
  param_1[0x14] = iVar3;
  *(undefined1 *)(iVar3 + 0xa9) = 1;
  *(undefined4 *)(param_1[0x14] + 4) = param_1[0x14];
  *(undefined4 *)param_1[0x14] = param_1[0x14];
  *(undefined4 *)(param_1[0x14] + 8) = param_1[0x14];
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 1;
  param_1[0x17] = 0;
  param_1[4] = 0;
  ExceptionList = local_c;
  return param_1;
}

