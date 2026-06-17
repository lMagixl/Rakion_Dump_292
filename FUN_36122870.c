
void __fastcall FUN_36122870(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_3611f7f0((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36121f50(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_3611fd00(param_1,iVar1);
  return;
}

