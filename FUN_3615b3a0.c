
undefined4 * __fastcall FUN_3615b3a0(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36219ff3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x10;
  param_1[4] = 0;
  param_1[5] = 0;
  local_4 = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  param_1[9] = pcVar1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  ExceptionList = local_c;
  return param_1;
}

