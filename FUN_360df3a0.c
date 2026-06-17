
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360df3a0(void *this,double *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  
  dVar1 = _DAT_36227d98;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)param_1;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)param_1 + 4);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 1);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)param_1 + 0xc);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)param_1 + 0x14);
  *(undefined4 *)((int)this + 0x1c) = 0x20;
  dVar2 = _DAT_36227d98;
  if (ABS(_DAT_36227d98) < ABS(*param_1)) {
    dVar1 = *param_1;
  }
  uVar3 = (uint)(ABS(_DAT_36227d98) < ABS(*param_1));
  if (ABS(dVar1) < ABS(param_1[1])) {
    uVar3 = 2;
    dVar1 = param_1[1];
  }
  if (ABS(dVar1) < ABS(param_1[2])) {
    uVar3 = 3;
    dVar1 = param_1[2];
  }
  *(uint *)this = uVar3;
  if (dVar2 < dVar1) {
    *(undefined8 *)((int)this + 8) = _DAT_36227d28;
    return;
  }
  if (dVar1 < _DAT_36227d98) {
    *(undefined8 *)((int)this + 8) = _DAT_36227d30;
    return;
  }
  *(double *)((int)this + 8) = _DAT_36227d98;
  return;
}

