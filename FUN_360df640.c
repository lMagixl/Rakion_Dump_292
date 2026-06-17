
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360df640(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = _DAT_3622376c;
  *(float *)((int)this + 0x18) = *param_1;
  *(float *)((int)this + 0x1c) = param_1[1];
  *(float *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x14) = 0x20;
  fVar2 = _DAT_3622376c;
  if (ABS((float)_DAT_36227d98) < ABS(*param_1)) {
    fVar1 = *param_1;
  }
  uVar3 = (uint)(ABS((float)_DAT_36227d98) < ABS(*param_1));
  if (ABS(fVar1) < ABS(param_1[1])) {
    uVar3 = 2;
    fVar1 = param_1[1];
  }
  if (ABS(fVar1) < ABS(param_1[2])) {
    uVar3 = 3;
    fVar1 = param_1[2];
  }
  *(uint *)this = uVar3;
  if (fVar2 < fVar1) {
    *(undefined4 *)((int)this + 4) = 0x3f800000;
    return;
  }
  if (fVar1 < _DAT_3622376c) {
    *(undefined4 *)((int)this + 4) = 0xbf800000;
    return;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return;
}

