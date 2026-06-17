
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_3605cd80(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)((int)this + 0x10);
  fVar4 = *(float *)((int)this + 0x14);
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = (*(float *)((int)this + 0xc) + *(float *)this) * _DAT_36227cf0;
  param_1[1] = (fVar3 + fVar1) * _DAT_36227cf0;
  param_1[2] = (fVar4 + fVar2) * _DAT_36227cf0;
  return;
}

