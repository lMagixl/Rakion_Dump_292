
undefined4 * __fastcall FUN_36025920(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620f0a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  param_1[2] = pcVar1;
  ExceptionList = local_c;
  return param_1;
}

