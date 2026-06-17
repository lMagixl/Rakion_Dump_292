
/* public: void __thiscall CPonytail::BuildBoneMatrix(float (&)[12],long) */

void __thiscall CPonytail::BuildBoneMatrix(CPonytail *this,float *param_1,long param_2)

{
  CPonytail *this_00;
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
  int iVar13;
  
                    /* 0x190070  1093  ?BuildBoneMatrix@CPonytail@@QAEXAAY0M@MJ@Z */
  this_00 = this + 0xc;
  iVar13 = FUN_361905c0(this_00,param_2);
  fVar1 = *(float *)(iVar13 + 0x38);
  fVar2 = *(float *)(iVar13 + 0x3c);
  fVar3 = *(float *)(iVar13 + 0x40);
  iVar13 = FUN_361905c0(this_00,param_2);
  fVar4 = *(float *)(iVar13 + 0x44);
  fVar5 = *(float *)(iVar13 + 0x48);
  fVar6 = *(float *)(iVar13 + 0x4c);
  iVar13 = FUN_361905c0(this_00,param_2);
  fVar7 = *(float *)(iVar13 + 0x50);
  fVar8 = *(float *)(iVar13 + 0x54);
  fVar9 = *(float *)(iVar13 + 0x58);
  iVar13 = FUN_361905c0(this_00,param_2);
  fVar10 = *(float *)(iVar13 + 4);
  fVar11 = *(float *)(iVar13 + 8);
  fVar12 = *(float *)(iVar13 + 0xc);
  param_1[1] = fVar4;
  *param_1 = fVar1;
  param_1[2] = fVar7;
  param_1[3] = fVar10;
  param_1[4] = fVar2;
  param_1[5] = fVar5;
  param_1[6] = fVar8;
  param_1[7] = fVar11;
  param_1[8] = fVar3;
  param_1[9] = fVar6;
  param_1[10] = fVar9;
  param_1[0xb] = fVar12;
  return;
}

