
undefined4 * __fastcall FUN_360ef770(undefined4 *param_1)

{
  void *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362162c2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360efdb0(param_1);
  local_4 = 0;
  FUN_360eeff0(param_1 + 4);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_360ef070(this,0x32,2,2);
  ExceptionList = local_c;
  return param_1;
}

