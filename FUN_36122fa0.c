
void __fastcall FUN_36122fa0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_3611f840((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36122b30(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_3611fd70(param_1,iVar1);
  return;
}

