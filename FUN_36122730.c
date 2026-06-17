
void __fastcall FUN_36122730(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_3611f750((int)param_1);
  if (iVar1 - *(int *)((int)param_1 + 0x14) < 1) {
    FUN_36121dd0(param_1,*(int *)((int)param_1 + 0x18));
  }
  iVar1 = *(int *)((int)param_1 + 0x14);
  *(int *)((int)param_1 + 0x14) = iVar1 + 1;
  FUN_3611fc20(param_1,iVar1);
  return;
}

