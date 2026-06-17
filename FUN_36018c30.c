
int FUN_36018c30(void)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e22b;
  local_c = ExceptionList;
  if (DAT_362b8e00 == 0) {
    ExceptionList = &local_c;
    iVar1 = FUN_361bf99c(0x58);
    local_4 = 0;
    if (iVar1 == 0) {
      DAT_362b8e00 = 0;
    }
    else {
      DAT_362b8e00 = FUN_361a8ec0(iVar1);
    }
    local_4 = 0xffffffff;
    FUN_36017700(DAT_362b8e00,0x40);
  }
  ExceptionList = local_c;
  return DAT_362b8e00;
}

