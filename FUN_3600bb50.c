
void __fastcall FUN_3600bb50(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620d828;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree((char *)param_1[6]);
  local_4 = 0xffffffff;
  StringFree((char *)*param_1);
  ExceptionList = local_c;
  return;
}

