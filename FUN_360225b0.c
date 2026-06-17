
CListHead * __fastcall FUN_360225b0(CListHead *param_1)

{
  CListHead::Clear(param_1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return param_1;
}

