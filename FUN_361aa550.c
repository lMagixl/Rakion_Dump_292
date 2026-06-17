
undefined4 FUN_361aa550(void)

{
  ETouch *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621be46;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (ETouch *)FUN_361bf99c(0x20);
  local_4 = 0;
  if (this != (ETouch *)0x0) {
    uVar1 = ETouch::ETouch(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

