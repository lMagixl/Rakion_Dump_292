
int __fastcall FUN_36019090(int param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620e256;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  local_4 = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0x28) = pcVar1;
  ExceptionList = local_c;
  return param_1;
}

