
void __thiscall FUN_360d2920(void *this,int param_1,int param_2)

{
  undefined4 *this_00;
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar3 = (int *)(*(int *)((int)this + 0xc) + param_1 * 0xc + 8);
  if (-1 < *piVar3) {
    piVar5 = piVar3;
    while (piVar1 = (int *)(*(int *)((int)this + 0x28) + *piVar5 * 8), *piVar1 != param_2) {
      piVar5 = piVar1 + 1;
      if (piVar1[1] < 0) {
        return;
      }
    }
    this_00 = (undefined4 *)((int)this + 0x2c);
    iVar2 = *piVar5;
    *(int *)((int)this + 0x34) = *(int *)((int)this + 0x34) + 1;
    iVar4 = FUN_3600bef0(this_00);
    if (iVar4 < *(int *)((int)this + 0x34)) {
      iVar4 = FUN_3600bef0(this_00);
      FUN_36026aa0(this_00,iVar4 + *(int *)((int)this + 0x38));
    }
    *(int *)(*(int *)((int)this + 0x30) + -4 + *(int *)((int)this + 0x34) * 4) = iVar2;
    *piVar5 = piVar1[1];
    piVar1[1] = -2;
    *piVar1 = 0;
    if (*piVar3 < 0) {
      FUN_360d2790(this,param_1);
    }
  }
  return;
}

