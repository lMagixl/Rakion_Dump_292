
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36153be0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = *(float *)((int)this + 4) * *(float *)((int)this + 4);
  fVar8 = fVar8 + fVar8;
  fVar1 = *(float *)((int)this + 8) * *(float *)((int)this + 4);
  fVar1 = fVar1 + fVar1;
  fVar3 = *(float *)((int)this + 0xc) * *(float *)((int)this + 4);
  fVar3 = fVar3 + fVar3;
  fVar4 = *(float *)((int)this + 8) * *(float *)((int)this + 8);
  fVar4 = fVar4 + fVar4;
  fVar5 = *(float *)((int)this + 0xc) * *(float *)((int)this + 8);
  fVar5 = fVar5 + fVar5;
  fVar9 = *(float *)((int)this + 0xc) * *(float *)((int)this + 0xc);
  fVar9 = fVar9 + fVar9;
  fVar6 = *(float *)this * *(float *)((int)this + 4);
  fVar6 = fVar6 + fVar6;
  fVar7 = *(float *)((int)this + 8) * *(float *)this;
  fVar7 = fVar7 + fVar7;
  fVar2 = *(float *)((int)this + 0xc) * *(float *)this;
  fVar2 = fVar2 + fVar2;
  *param_1 = (float)_DAT_36227d28 - (fVar9 + fVar4);
  param_1[1] = fVar1 - fVar2;
  param_1[2] = fVar7 + fVar3;
  param_1[3] = fVar2 + fVar1;
  param_1[4] = (float)_DAT_36227d28 - (fVar9 + fVar8);
  param_1[5] = fVar5 - fVar6;
  param_1[6] = fVar3 - fVar7;
  param_1[7] = fVar6 + fVar5;
  param_1[8] = (float)_DAT_36227d28 - (fVar4 + fVar8);
  return;
}

