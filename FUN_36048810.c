
int __fastcall FUN_36048810(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621165b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  local_4 = 0;
  CListHead::Clear((CListHead *)(param_1 + 0xc));
  ExceptionList = local_c;
  return param_1;
}

