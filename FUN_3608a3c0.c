
CDisplayMode * __fastcall FUN_3608a3c0(CDisplayMode *param_1)

{
  char *pcVar1;
  int iVar2;
  CDisplayMode *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621273c;
  local_c = ExceptionList;
  iVar2 = 0x19;
  this = param_1;
  ExceptionList = &local_c;
  do {
    CDisplayMode::CDisplayMode(this);
    this = this + 0xc;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0x138) = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0x13c) = pcVar1;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(param_1 + 0x140) = pcVar1;
  ExceptionList = local_c;
  return param_1;
}

