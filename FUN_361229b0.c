
void __fastcall FUN_361229b0(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_3611f9d0((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36122100(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_3611ffd0(param_1,iVar1);
  return;
}

