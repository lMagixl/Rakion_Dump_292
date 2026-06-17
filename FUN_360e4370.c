
undefined4 * __thiscall FUN_360e4370(void *this,undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_362157d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_360e42f0(this,param_1);
  ExceptionList = local_c;
  return this;
}

