
void __thiscall FUN_3604c180(void *this,undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  
  dVar2 = *(double *)this;
  dVar3 = *(double *)((int)this + 8);
  dVar4 = *(double *)((int)this + 0x10);
  local_18 = SUB84(-dVar2,0);
  dVar1 = *(double *)((int)this + 0x18);
  *param_1 = local_18;
  uStack_14 = (undefined4)((ulonglong)-dVar2 >> 0x20);
  *(double *)(param_1 + 6) = -dVar1;
  param_1[1] = uStack_14;
  *(double *)(param_1 + 2) = -dVar3;
  *(double *)(param_1 + 4) = -dVar4;
  return;
}

