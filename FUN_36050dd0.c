
void __thiscall FUN_36050dd0(void *this,void *param_1,int *param_2,int *param_3)

{
  void *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  this_00 = (void *)((int)this + 0x3c);
  iVar1 = FUN_360543c0((int)this_00);
  *param_3 = iVar1;
  FUN_360552c0(param_1,iVar1);
  iVar1 = *param_3;
  if (iVar1 != 0) {
    *param_2 = iVar1;
    iVar1 = thunk_FUN_361bf99c(iVar1 * 4 + 4);
    param_2[1] = iVar1;
  }
  iVar1 = 0;
  if (0 < *param_3) {
    iVar4 = 0;
    do {
      iVar2 = FUN_36054380(this_00,iVar1);
      FUN_36055db0((void *)(*(int *)((int)param_1 + 4) + iVar4),iVar2);
      *(int *)(param_2[1] + iVar1 * 4) = *(int *)((int)param_1 + 4) + iVar4;
      iVar2 = *(int *)((int)param_1 + 4);
      iVar3 = FUN_36054380(this_00,iVar1);
      *(int *)(iVar3 + 8) = iVar2 + iVar4;
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 0x40;
    } while (iVar1 < *param_3);
  }
  return;
}

