
undefined4 __fastcall FUN_36106480(CListHead *param_1)

{
  int iVar1;
  
  iVar1 = CListHead::IsEmpty(param_1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)param_1 + 8);
}

