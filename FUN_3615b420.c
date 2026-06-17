
void __fastcall FUN_3615b420(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621a013;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_3615af80(param_1 + 10);
  StringFree((char *)param_1[9]);
  if (param_1[4] != 0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}

