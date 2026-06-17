
void __fastcall FUN_36122810(CListHead *param_1)

{
  int iVar1;
  
  iVar1 = CListHead::IsEmpty(param_1);
  if ((iVar1 == 0) && (*(int *)param_1 != *(int *)(param_1 + 8))) {
    iVar1 = FUN_3611f7a0((int)param_1);
    FUN_36121f00((undefined4 *)param_1);
    FUN_36121eb0(param_1,iVar1);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

