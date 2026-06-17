
int __fastcall FUN_360ece90(void *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621601a;
  local_c = ExceptionList;
  iVar4 = 0;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_3608a4c0((int)param_1);
  if (0 < iVar1) {
    do {
      piVar2 = (int *)FUN_3608a4d0(param_1,iVar4);
      iVar1 = (**(code **)(*piVar2 + 0x18))();
      if (iVar1 < 0) {
        ExceptionList = local_c;
        return -1;
      }
      iVar3 = iVar3 + iVar1;
      iVar4 = iVar4 + 1;
      iVar1 = FUN_3608a4c0((int)param_1);
    } while (iVar4 < iVar1);
  }
  ExceptionList = local_c;
  return iVar3;
}

