
CListHead * __thiscall FUN_360e3830(void *this,double *param_1,double *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36215659;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_3604b9a0(this);
  local_4 = 0;
  FUN_3604b9a0((CListHead *)((int)this + 0x14));
  local_4._0_1_ = 1;
  FUN_3604b9a0((CListHead *)((int)this + 0x28));
  local_4._0_1_ = 2;
  FUN_3604b9a0((CListHead *)((int)this + 0x3c));
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_360e3550(this,param_1,param_2);
  ExceptionList = local_c;
  return this;
}

