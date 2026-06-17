
void __fastcall FUN_36122fd0(CListHead *param_1)

{
  int iVar1;
  
  iVar1 = CListHead::IsEmpty(param_1);
  if ((iVar1 == 0) && (*(int *)param_1 != *(int *)(param_1 + 8))) {
    iVar1 = FUN_3611f840((int)param_1);
    FUN_36121ff0((undefined4 *)param_1);
    FUN_36122b30(param_1,iVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

