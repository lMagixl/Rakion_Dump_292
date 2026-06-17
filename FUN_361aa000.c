
undefined4 FUN_361aa000(void)

{
  EPass *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bda8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (EPass *)FUN_361bf99c(0x10);
  local_4 = 0;
  if (this != (EPass *)0x0) {
    uVar1 = EPass::EPass(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

