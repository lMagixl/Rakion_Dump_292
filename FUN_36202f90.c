
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36202f90(void *this,int param_1,char param_2,undefined *param_3)

{
  int *this_00;
  void *pvVar1;
  int *this_01;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_30;
  int local_2c;
  undefined4 *local_1c [2];
  double local_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621cfde;
  pvStack_c = ExceptionList;
  this_00 = *(int **)((int)this + 0x34);
  ExceptionList = &pvStack_c;
  FUN_36208c70(local_1c,2);
  local_14 = _DAT_3624cdd0;
  local_4 = 0;
  *local_1c[0] = 0;
  local_1c[0][1] = 0x3f800000;
  local_14 = local_14 / (double)CONCAT44(DAT_3624cf5c,DAT_3624cf58);
  if (param_2 != '\0') {
    this_00 = (int *)FUN_36209c50(this_00);
    FUN_36209c10((int)this_00);
  }
  local_2c = 4;
  for (local_30 = 1;
      (*(int *)((int)this + 0x3c) != 0 &&
      (local_30 < (uint)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2)));
      local_30 = local_30 + 1) {
    iVar3 = (*this_00 + 1) / 2;
    iVar5 = (this_00[1] + 1) / 2;
    if ((iVar3 == 1) && (iVar5 == 1)) break;
    piVar4 = *(int **)((int)this + local_2c + -4);
    pvVar1 = (void *)FUN_361bf99c(0x1c);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      this_01 = (int *)0x0;
    }
    else {
      this_01 = FUN_36208d70(pvVar1,iVar3,iVar5);
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_36209b50(this_00,(int)this_01,piVar4);
    if (param_2 != '\0') {
      FUN_36209bd0(this_01,0.0,100.0);
      FUN_36209c10((int)this_01);
    }
    if (4 < local_2c) {
      iVar3 = local_30 - 1;
      piVar4 = this_01;
      do {
        pvVar1 = (void *)FUN_361bf99c(0x1c);
        local_4._0_1_ = 2;
        if (pvVar1 == (void *)0x0) {
          this_01 = (int *)0x0;
        }
        else {
          this_01 = FUN_36208d70(pvVar1,(*piVar4 + 1) / 2,(piVar4[1] + 1) / 2);
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_36209b50(piVar4,(int)this_01,(int *)local_1c);
        if (piVar4 != (int *)0x0) {
          FUN_36208e90((int)piVar4);
          operator_delete(piVar4);
        }
        iVar3 = iVar3 + -1;
        piVar4 = this_01;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(*(int *)((int)this + 0x3c) + local_2c);
    uVar2 = FUN_362024f0(this_01);
    *(undefined4 *)(iVar3 + 8 + param_1 * 4) = uVar2;
    if (this_01 != (int *)0x0) {
      FUN_36208e90((int)this_01);
      operator_delete(this_01);
    }
    if (param_3 != (undefined *)0x0) {
      (*(code *)param_3)(local_30);
    }
    local_2c = local_2c + 4;
  }
  if ((param_2 != '\0') && (this_00 != (int *)0x0)) {
    FUN_36208e90((int)this_00);
    operator_delete(this_00);
  }
  local_4 = 0xffffffff;
  FUN_36208cb0(local_1c);
  ExceptionList = pvStack_c;
  return;
}

