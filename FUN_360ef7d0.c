
void __fastcall FUN_360ef7d0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362162df;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360ef2f0(param_1);
  FUN_360ef010((int)(param_1 + 4));
  FUN_360efe40(param_1);
  ExceptionList = local_c;
  return;
}

