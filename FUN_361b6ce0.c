
void __fastcall FUN_361b6ce0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_361b6b80((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_361b6c60(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_361b6be0(param_1,iVar1);
  return;
}

