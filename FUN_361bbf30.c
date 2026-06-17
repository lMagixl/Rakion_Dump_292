
uint * __fastcall FUN_361bbf30(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 local_15;
  DWORD local_14;
  uint *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c426;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  local_4 = 0;
  FUN_361bbad0(param_1 + 7,&local_15);
  local_4 = CONCAT31(local_4._1_3_,1);
  local_14 = timeGetTime();
  FUN_361bc0f0(&local_14);
  uVar1 = FUN_361bc120();
  uVar2 = FUN_361bc120();
  *param_1 = uVar1 << 0x10 | uVar2;
  ExceptionList = local_c;
  return param_1;
}

