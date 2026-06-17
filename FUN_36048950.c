
void __fastcall FUN_36048950(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_36047ca0((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36048750(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_36047e70(param_1,iVar1);
  return;
}

