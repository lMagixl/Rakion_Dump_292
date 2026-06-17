
int __fastcall FUN_361a8ec0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bcd0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_361a9110((int *)(param_1 + 4));
  local_4 = 0;
  FUN_361a3200((LPCRITICAL_SECTION)(param_1 + 0x40));
  ExceptionList = local_c;
  return param_1;
}

