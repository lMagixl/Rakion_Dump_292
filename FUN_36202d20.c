
void __thiscall FUN_36202d20(void *this,int param_1,undefined *param_2)

{
  int *piVar1;
  int iVar2;
  void *this_00;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  uint local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621cf8b;
  pvStack_c = ExceptionList;
  piVar1 = *(int **)((int)this + 0x34);
  local_18 = 1;
  piVar4 = piVar1;
  ExceptionList = &pvStack_c;
  while( true ) {
    iVar2 = *(int *)((int)this + 0x3c);
    piVar5 = (int *)0x0;
    if ((iVar2 == 0) || ((uint)(*(int *)((int)this + 0x40) - iVar2 >> 2) <= local_18)) break;
    iVar2 = *(int *)(iVar2 + local_18 * 4);
    this_00 = (void *)FUN_361bf99c(0x1c);
    local_4 = 0;
    if (this_00 != (void *)0x0) {
      piVar5 = FUN_36208d70(this_00,(*piVar4 + 1) / 2,(piVar4[1] + 1) / 2);
    }
    local_4 = 0xffffffff;
    FUN_36202730(piVar4,piVar5);
    if ((piVar4 != piVar1) && (piVar4 != (int *)0x0)) {
      FUN_36208e90((int)piVar4);
      operator_delete(piVar4);
    }
    uVar3 = FUN_362024f0(piVar5);
    *(undefined4 *)(iVar2 + 8 + param_1 * 4) = uVar3;
    if (param_2 != (undefined *)0x0) {
      (*(code *)param_2)(local_18);
    }
    local_18 = local_18 + 1;
    piVar4 = piVar5;
  }
  if ((piVar4 != piVar1) && (piVar4 != (int *)0x0)) {
    FUN_36208e90((int)piVar4);
    operator_delete(piVar4);
  }
  ExceptionList = pvStack_c;
  return;
}

