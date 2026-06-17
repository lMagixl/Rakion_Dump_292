
void __fastcall FUN_36023220(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_360225f0((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_360230f0(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_36022660(param_1,iVar1);
  return;
}

