
void __thiscall FUN_360f0fc0(void *this,undefined4 *param_1)

{
  double *pdVar1;
  int *piVar2;
  CListNode *pCVar3;
  CListNode *pCVar4;
  int iVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_36216453;
  local_14 = ExceptionList;
  piVar2 = *(int **)this;
  do {
    if ((int *)*piVar2 == (int *)0x0) {
      ExceptionList = &local_14;
      pCVar3 = (CListNode *)FUN_361bf99c(0x50);
      pCVar4 = (CListNode *)0x0;
      if (pCVar3 != (CListNode *)0x0) {
        *(undefined4 *)pCVar3 = 0;
        *(undefined4 *)(pCVar3 + 4) = 0;
        local_c = 1;
        CPlayerAction::CPlayerAction((CPlayerAction *)(pCVar3 + 8));
        pCVar4 = pCVar3;
      }
      pCVar3 = pCVar4 + 8;
      for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pCVar3 = *param_1;
        param_1 = param_1 + 1;
        pCVar3 = pCVar3 + 4;
      }
      local_c = 0xffffffff;
      CListHead::AddTail(this,pCVar4);
      CListHead::Sort(this,(_func_int_void_ptr_void_ptr *)&LAB_360f0f90,0);
      ExceptionList = local_14;
      return;
    }
    pdVar1 = (double *)(piVar2 + 4);
    piVar2 = (int *)*piVar2;
  } while (*pdVar1 != *(double *)(param_1 + 2));
  return;
}

