
void __cdecl FUN_360ff0d0(void *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_362cf4f4;
  puStack_8 = &LAB_362174a8;
  local_c = ExceptionList;
  DAT_362cf4f4 = 1;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_360ff8d0(&DAT_362cf4c4,param_1);
  DAT_362cf4f4 = uVar1;
  ExceptionList = local_c;
  return;
}

