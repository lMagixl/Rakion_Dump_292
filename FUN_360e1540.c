
void __fastcall FUN_360e1540(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215458;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_360e05d0(param_1);
  if (*param_1 != 0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  ExceptionList = local_c;
  return;
}

