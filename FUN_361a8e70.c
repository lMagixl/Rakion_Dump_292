
void __fastcall FUN_361a8e70(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621bcbb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_361a3210((LPCRITICAL_SECTION)(param_1 + 0x40));
  local_4 = 0xffffffff;
  FUN_361a8f60((undefined4 *)(param_1 + 4));
  ExceptionList = local_c;
  return;
}

