
void __fastcall FUN_360ed470(int *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362160bf;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_360ecf90(param_1);
  FUN_360eccb0((int)(param_1 + 4));
  FUN_360edb70(param_1);
  ExceptionList = local_c;
  return;
}

