
void __fastcall FUN_36100a20(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36217568;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_36230528;
  local_4 = 0;
  if ((void *)param_1[6] != (void *)0x0) {
    FreeMemory((void *)param_1[6]);
    param_1[6] = 0;
  }
  local_4 = 0xffffffff;
  FUN_360f17e0(param_1);
  ExceptionList = local_c;
  return;
}

