
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3605dda0(void *this,undefined4 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  dVar4 = *(double *)((int)this + 0x28);
  dVar1 = *(double *)((int)this + 0x10);
  dVar2 = (*(double *)((int)this + 0x18) + *(double *)this) * _DAT_36227cd8;
  local_20 = SUB84(dVar2,0);
  dVar3 = (*(double *)((int)this + 0x20) + *(double *)((int)this + 8)) * _DAT_36227cd8;
  *param_1 = local_20;
  uStack_1c = (undefined4)((ulonglong)dVar2 >> 0x20);
  dVar1 = (dVar4 + dVar1) * _DAT_36227cd8;
  param_1[1] = uStack_1c;
  *(double *)(param_1 + 2) = dVar3;
  *(double *)(param_1 + 4) = dVar1;
  return;
}

