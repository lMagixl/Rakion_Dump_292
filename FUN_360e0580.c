
void __fastcall FUN_360e0580(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 8) != 0) {
    iVar1 = FUN_360dea40(*(int *)((int)param_1 + 8));
    FUN_360dfb90(param_1,iVar1);
    DAT_362cc0e0 = iVar1 + -1;
    FUN_360df480(param_1,*(undefined4 **)((int)param_1 + 8));
    FUN_360dea10(*(void **)((int)param_1 + 8));
    *(undefined4 *)((int)param_1 + 8) = *(undefined4 *)((int)param_1 + 4);
  }
  return;
}

