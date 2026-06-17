
void __fastcall FUN_360e0d90(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar1 = FUN_360deca0(*(int *)((int)param_1 + 8));
    FUN_360dfd00(param_1,iVar1);
    DAT_362cc0e0 = iVar1 + -1;
    FUN_360df710(param_1,*(undefined4 **)((int)param_1 + 8));
    FUN_360dec50(*(void **)((int)param_1 + 8));
    *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}

