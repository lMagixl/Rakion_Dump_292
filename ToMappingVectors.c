
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::ToMappingVectors(class CMappingVectors const &,class
   CMappingVectors &)const  */

void __thiscall
CMappingDefinition::ToMappingVectors
          (CMappingDefinition *this,CMappingVectors *param_1,CMappingVectors *param_2)

{
  CMappingVectors *pCVar1;
  CMappingVectors *pCVar2;
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
  
                    /* 0x5ed50  3830
                       ?ToMappingVectors@CMappingDefinition@@QBEXABVCMappingVectors@@AAV2@@Z */
  pCVar1 = param_1 + 0x18;
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar5 = _DAT_36223384 /
          (*(float *)this * *(float *)(this + 0xc) - *(float *)(this + 4) * *(float *)(this + 8));
  fVar9 = fVar5 * *(float *)(this + 0xc);
  fVar13 = -(fVar5 * *(float *)(this + 4));
  fVar10 = fVar5 * *(float *)this;
  fVar11 = -(fVar5 * *(float *)(this + 8));
  fVar12 = fVar10 * *(float *)(this + 0x14) + fVar11 * *(float *)(this + 0x10);
  pCVar2 = param_1 + 0xc;
  fVar14 = fVar9 * *(float *)(this + 0x10) + fVar13 * *(float *)(this + 0x14);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 8);
  *(float *)param_2 = *(float *)param_1 + *(float *)pCVar2 * fVar14 + *(float *)pCVar1 * fVar12;
  *(float *)(param_2 + 4) = fVar7 + fVar5 * fVar14 + fVar3 * fVar12;
  *(float *)(param_2 + 8) = fVar8 + fVar6 * fVar14 + fVar4 * fVar12;
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0xc) = *(float *)pCVar2 * fVar9 + *(float *)pCVar1 * fVar11;
  *(float *)(param_2 + 0x10) = fVar5 * fVar9 + fVar3 * fVar11;
  *(float *)(param_2 + 0x14) = fVar6 * fVar9 + fVar4 * fVar11;
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0x18) = *(float *)pCVar2 * fVar13 + *(float *)pCVar1 * fVar10;
  *(float *)(param_2 + 0x1c) = fVar5 * fVar13 + fVar3 * fVar10;
  *(float *)(param_2 + 0x20) = fVar6 * fVar13 + fVar4 * fVar10;
  return;
}

