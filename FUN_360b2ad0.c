
CListHead * __fastcall FUN_360b2ad0(CListHead *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213cf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360b0f60(param_1);
  local_4 = 0;
  FUN_360b0f80(param_1 + 0x14);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_360b0fa0(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x3c) = 0x7f61b1e6;
  *(undefined4 *)(param_1 + 0x40) = 0x7f61b1e6;
  *(undefined4 *)(param_1 + 0x44) = 0x7f61b1e6;
  *(undefined4 *)(param_1 + 0x48) = 0xff61b1e6;
  *(undefined4 *)(param_1 + 0x4c) = 0xff61b1e6;
  *(undefined4 *)(param_1 + 0x50) = 0xff61b1e6;
  ExceptionList = local_c;
  return param_1;
}

