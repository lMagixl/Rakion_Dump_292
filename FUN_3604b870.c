
int __fastcall FUN_3604b870(int param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211776;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(s_I_<unnamed>_36227d8a + 2);
  *(char **)(param_1 + 8) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0xc) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0x10) = pcVar1;
  ExceptionList = local_c;
  return param_1;
}

