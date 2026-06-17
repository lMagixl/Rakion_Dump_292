
void __fastcall FUN_36025a50(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_360216b0((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36021930(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_360217c0(param_1,iVar1);
  return;
}

