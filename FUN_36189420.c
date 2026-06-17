
void __fastcall FUN_36189420(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621aed8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if ((int *)param_1[2] != (int *)0x0) {
    ExceptionList = &local_c;
    FUN_3600cd20((int *)param_1[2]);
  }
  local_4 = 0xffffffff;
  StringFree((char *)*param_1);
  ExceptionList = local_c;
  return;
}

