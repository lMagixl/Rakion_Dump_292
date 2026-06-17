
void __thiscall FUN_36202e30(void *this,int param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  int *this_01;
  uint local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621cfab;
  pvStack_c = ExceptionList;
  local_18 = 1;
  piVar1 = *(int **)((int)this + 0x34);
  this_01 = piVar1;
  ExceptionList = &pvStack_c;
  for (; (*(int *)((int)this + 0x3c) != 0 &&
         (local_18 < (uint)(*(int *)((int)this + 0x40) - *(int *)((int)this + 0x3c) >> 2)));
      local_18 = local_18 + 1) {
    iVar2 = *this_01;
    iVar3 = this_01[1];
    this_00 = (void *)FUN_361bf99c(0x1c);
    local_4 = 0;
    if (this_00 == (void *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = FUN_36208d70(this_00,(iVar2 + 1) / 2,(iVar3 + 1) / 2);
    }
    iVar2 = *(int *)(*(int *)((int)this + 0x3c) + local_18 * 4);
    local_4 = 0xffffffff;
    FUN_36209b90(this_01,(int)piVar4);
    if ((this_01 != piVar1) && (this_01 != (int *)0x0)) {
      FUN_36208e90((int)this_01);
      operator_delete(this_01);
    }
    uVar5 = FUN_362024f0(piVar4);
    *(undefined4 *)(iVar2 + 8 + param_1 * 4) = uVar5;
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(local_18);
    }
    this_01 = piVar4;
  }
  if ((this_01 != piVar1) && (this_01 != (int *)0x0)) {
    FUN_36208e90((int)this_01);
    operator_delete(this_01);
  }
  ExceptionList = pvStack_c;
  return;
}

