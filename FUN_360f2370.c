
undefined4 * __fastcall FUN_360f2370(undefined4 *param_1)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621649d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  param_1[1] = pcVar1;
  local_4 = 0;
  CListHead::Clear((CListHead *)(param_1 + 8));
  FUN_360ff140(param_1 + 6);
  local_4._0_1_ = 1;
  CListHead::Clear((CListHead *)(param_1 + 0x16));
  FUN_360ff140(param_1 + 0x14);
  local_4._0_1_ = 2;
  CListHead::Clear((CListHead *)(param_1 + 0x24));
  FUN_360ff140(param_1 + 0x22);
  local_4._0_1_ = 3;
  CListHead::Clear((CListHead *)(param_1 + 0x32));
  FUN_360ff140(param_1 + 0x30);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_360f1ce0(param_1);
  ExceptionList = local_c;
  return param_1;
}

