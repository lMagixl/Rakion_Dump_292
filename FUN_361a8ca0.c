
void __fastcall FUN_361a8ca0(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621bc9b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_361a92f0(*(void **)(param_1 + 0x18),*(uint *)(param_1 + 8));
  FUN_361a92f0(*(void **)(param_1 + 0x18),*(uint *)(param_1 + 0xc));
  local_4 = 0xffffffff;
  FUN_361a3210((LPCRITICAL_SECTION)(param_1 + 0x1c));
  ExceptionList = local_c;
  return;
}

