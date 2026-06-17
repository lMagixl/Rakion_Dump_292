
void __fastcall FUN_360ec2b0(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36215faf;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360ebdd0(param_1);
  FUN_360ebb20((int)(param_1 + 4));
  FUN_360ec9d0(param_1);
  ExceptionList = local_c;
  return;
}

