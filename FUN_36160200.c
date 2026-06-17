
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36160200(void *this,float *param_1)

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
  float fVar10;
  
  fVar5 = Cos(*param_1 * _DAT_36227cf0);
  fVar6 = Sin(*param_1 * _DAT_36227cf0);
  fVar7 = Cos(param_1[1] * _DAT_36227cf0);
  fVar8 = Sin(param_1[1] * _DAT_36227cf0);
  fVar9 = Cos(param_1[2] * _DAT_36227cf0);
  fVar10 = Sin(param_1[2] * _DAT_36227cf0);
  fVar2 = (fVar7 * fVar5 - fVar8 * _DAT_3622376c) - fVar6 * _DAT_3622376c;
  fVar1 = fVar8 * fVar5 + fVar7 * _DAT_3622376c + fVar6 * _DAT_3622376c;
  fVar3 = fVar7 * fVar6 + fVar5 * _DAT_3622376c + fVar8 * _DAT_3622376c;
  fVar8 = (fVar5 * _DAT_3622376c - fVar8 * fVar6) + fVar7 * _DAT_3622376c;
  fVar7 = _DAT_3622376c * fVar1;
  fVar4 = fVar3 * _DAT_3622376c;
  fVar6 = fVar2 * _DAT_3622376c;
  fVar5 = fVar8 * _DAT_3622376c;
  *(float *)this = ((fVar2 * fVar9 - fVar7) - fVar4) - fVar8 * fVar10;
  *(float *)((int)this + 4) = (fVar1 * fVar9 + fVar3 * fVar10 + fVar6) - fVar5;
  *(float *)((int)this + 8) = fVar3 * fVar9 + (fVar6 - fVar1 * fVar10) + fVar5;
  *(float *)((int)this + 0xc) = fVar8 * fVar9 + ((fVar2 * fVar10 + fVar7) - fVar4);
  return;
}

