
void __fastcall FUN_36031570(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620f9e8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  StringFree((char *)param_1[2]);
  local_4 = 0xffffffff;
  StringFree((char *)*param_1);
  ExceptionList = local_c;
  return;
}

