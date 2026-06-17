
uint * __thiscall FUN_361bbe80(void *this,uint *param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int local_20 [2];
  uint local_18 [2];
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621c400;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_361bb0c0(this,&param_1,param_1);
  if (param_1 == *(uint **)((int)this + 8)) {
    local_18[0] = *puVar2;
    local_18[1] = 0;
    local_10 = (int *)0x0;
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    piVar3 = (int *)FUN_361bbb50(this,local_20,local_18);
    iVar1 = *piVar3;
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_10 != (int *)0x0) {
      FUN_3600cd20(local_10);
    }
    ExceptionList = local_c;
    return (uint *)(iVar1 + 0xc);
  }
  ExceptionList = local_c;
  return param_1 + 3;
}

