
undefined4 FUN_361aa610(void)

{
  EDeath *this;
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621be70;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (EDeath *)FUN_361bf99c(0x34);
  local_4 = 0;
  if (this != (EDeath *)0x0) {
    uVar1 = EDeath::EDeath(this);
    ExceptionList = local_c;
    return uVar1;
  }
  ExceptionList = local_c;
  return 0;
}

