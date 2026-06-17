
undefined4 FUN_361aa5b0(void)

{
  EBlock *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621be5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (EBlock *)FUN_361bf99c(0x1c);
  local_4 = 0;
  if (this != (EBlock *)0x0) {
    uVar1 = EBlock::EBlock(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

