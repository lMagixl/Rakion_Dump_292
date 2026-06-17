
undefined4 * __fastcall FUN_36030c70(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *param_1 = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  param_1[6] = pcVar1;
  ExceptionList = local_c;
  return param_1;
}

