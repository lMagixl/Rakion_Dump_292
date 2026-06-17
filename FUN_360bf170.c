
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * __thiscall FUN_360bf170(void *this,float *param_1,float *param_2,float *param_3)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float *pfVar15;
  float local_18 [6];
  
  pfVar15 = (float *)FUN_3605cd80(param_1,local_18);
  fVar1 = *pfVar15;
  fVar2 = param_3[3];
  fVar3 = pfVar15[2];
  fVar4 = param_3[5];
  fVar5 = pfVar15[1];
  fVar6 = param_3[4];
  fVar7 = pfVar15[2];
  fVar8 = param_3[8];
  fVar9 = pfVar15[1];
  fVar10 = param_3[7];
  fVar11 = param_3[6];
  fVar12 = *pfVar15;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  *(float *)this =
       pfVar15[1] * param_3[1] + pfVar15[2] * param_3[2] + *pfVar15 * *param_3 + *param_2;
  *(float *)((int)this + 4) = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar13;
  *(float *)((int)this + 8) = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8 + fVar14;
  *(float *)((int)this + 0xc) = *param_3;
  *(float *)((int)this + 0x10) = param_3[3];
  *(float *)((int)this + 0x14) = param_3[6];
  *(float *)((int)this + 0x18) = param_3[1];
  *(float *)((int)this + 0x1c) = param_3[4];
  *(float *)((int)this + 0x20) = param_3[7];
  *(float *)((int)this + 0x24) = param_3[2];
  *(float *)((int)this + 0x28) = param_3[5];
  *(float *)((int)this + 0x2c) = param_3[8];
  *(float *)((int)this + 0x30) = (param_1[3] - *param_1) * _DAT_36227cf0;
  *(float *)((int)this + 0x34) = (param_1[4] - param_1[1]) * _DAT_36227cf0;
  *(float *)((int)this + 0x38) = (param_1[5] - param_1[2]) * _DAT_36227cf0;
  return this;
}

