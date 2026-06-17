
undefined4 FUN_361aa320(void)

{
  EDamage *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bdda;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (EDamage *)FUN_361bf99c(0x2c);
  local_4 = 0;
  if (this != (EDamage *)0x0) {
    uVar1 = EDamage::EDamage(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

