
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::TransformMappingVectors(class CMappingVectors const
   &,class CMappingVectors &)const  */

void __thiscall
CMappingDefinition::TransformMappingVectors
          (CMappingDefinition *this,CMappingVectors *param_1,CMappingVectors *param_2)

{
  CMappingVectors *pCVar1;
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
  CMappingVectors *pCVar13;
  
                    /* 0x5e9c0  3844
                       ?TransformMappingVectors@CMappingDefinition@@QBEXABVCMappingVectors@@AAV2@@Z
                        */
  fVar2 = *(float *)(this + 4);
  fVar4 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)this;
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  pCVar13 = param_2 + 0xc;
  fVar8 = *(float *)(param_1 + 0xc) * fVar3 + *(float *)(param_1 + 0x18) * fVar2;
  *(float *)pCVar13 = fVar8;
  fVar9 = fVar6 * fVar3 + fVar4 * fVar2;
  *(float *)(param_2 + 0x10) = fVar9;
  fVar10 = fVar7 * fVar3 + fVar5 * fVar2;
  *(float *)(param_2 + 0x14) = fVar10;
  fVar2 = *(float *)(this + 0xc);
  fVar4 = *(float *)(param_1 + 0x1c);
  fVar5 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(this + 8);
  fVar6 = *(float *)(param_1 + 0x10);
  fVar7 = *(float *)(param_1 + 0x14);
  pCVar1 = param_2 + 0x18;
  fVar11 = *(float *)(param_1 + 0xc) * fVar3 + *(float *)(param_1 + 0x18) * fVar2;
  *(float *)pCVar1 = fVar11;
  fVar4 = fVar6 * fVar3 + fVar4 * fVar2;
  *(float *)(param_2 + 0x1c) = fVar4;
  fVar5 = fVar7 * fVar3 + fVar5 * fVar2;
  *(float *)(param_2 + 0x20) = fVar5;
  fVar2 = *(float *)pCVar13 * *(float *)pCVar13 +
          *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x10) +
          *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x14);
  fVar6 = *(float *)pCVar1 * *(float *)pCVar13 +
          *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x10) +
          *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x14);
  fVar12 = *(float *)pCVar1 * *(float *)pCVar1 +
           *(float *)(param_2 + 0x1c) * *(float *)(param_2 + 0x1c) +
           *(float *)(param_2 + 0x20) * *(float *)(param_2 + 0x20);
  fVar3 = _DAT_36223384 /
          (fVar12 * fVar2 -
          (*(float *)pCVar13 * *(float *)pCVar1 +
          *(float *)(param_2 + 0x10) * *(float *)(param_2 + 0x1c) +
          *(float *)(param_2 + 0x14) * *(float *)(param_2 + 0x20)) * fVar6);
  fVar6 = -(fVar3 * fVar6);
  fVar7 = fVar6 * *(float *)(this + 0x10) + fVar3 * fVar2 * *(float *)(this + 0x14);
  fVar6 = fVar6 * *(float *)(this + 0x14) + fVar3 * fVar12 * *(float *)(this + 0x10);
  fVar2 = *(float *)(param_1 + 4);
  fVar3 = *(float *)(param_1 + 8);
  *(float *)param_2 = *(float *)param_1 + fVar8 * fVar6 + fVar11 * fVar7;
  *(float *)(param_2 + 4) = fVar2 + fVar9 * fVar6 + fVar4 * fVar7;
  *(float *)(param_2 + 8) = fVar3 + fVar10 * fVar6 + fVar5 * fVar7;
  return;
}

