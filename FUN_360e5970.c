
void __fastcall FUN_360e5970(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3621594f;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360e5490(param_1);
  FUN_360e51b0((int)(param_1 + 4));
  FUN_360e6270(param_1);
  ExceptionList = local_c;
  return;
}

