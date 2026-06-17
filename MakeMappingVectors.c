
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::MakeMappingVectors(class CMappingVectors const
   &,class CMappingVectors &)const  */

void __thiscall
CMappingDefinition::MakeMappingVectors
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
  
                    /* 0x5e620  2611
                       ?MakeMappingVectors@CMappingDefinition@@QBEXABVCMappingVectors@@AAV2@@Z */
  pCVar1 = param_1 + 0x18;
  fVar3 = *(float *)(param_1 + 0x1c);
  fVar4 = *(float *)(param_1 + 0x20);
  fVar11 = _DAT_36223384 /
           (*(float *)this * *(float *)(this + 0xc) - *(float *)(this + 4) * *(float *)(this + 8));
  fVar9 = *(float *)this * *(float *)(this + 0x14) - *(float *)(this + 8) * *(float *)(this + 0x10);
  pCVar2 = param_1 + 0xc;
  fVar5 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  fVar10 = *(float *)(this + 0x10) * *(float *)(this + 0xc) -
           *(float *)(this + 4) * *(float *)(this + 0x14);
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 8);
  *(float *)param_2 =
       *(float *)param_1 + *(float *)pCVar2 * fVar10 * fVar11 + *(float *)pCVar1 * fVar9 * fVar11;
  *(float *)(param_2 + 4) = fVar7 + fVar5 * fVar10 * fVar11 + fVar3 * fVar9 * fVar11;
  *(float *)(param_2 + 8) = fVar8 + fVar6 * fVar10 * fVar11 + fVar4 * fVar9 * fVar11;
  fVar3 = *(float *)(this + 4);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar4 = *(float *)this;
  fVar7 = *(float *)(param_1 + 0x10);
  fVar8 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0xc) = *(float *)pCVar2 * fVar4 + *(float *)pCVar1 * fVar3;
  *(float *)(param_2 + 0x10) = fVar7 * fVar4 + fVar5 * fVar3;
  *(float *)(param_2 + 0x14) = fVar8 * fVar4 + fVar6 * fVar3;
  fVar3 = *(float *)(this + 0xc);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar6 = *(float *)(param_1 + 0x20);
  fVar7 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(this + 8);
  fVar8 = *(float *)(param_1 + 0x14);
  *(float *)(param_2 + 0x18) = *(float *)pCVar2 * fVar4 + *(float *)pCVar1 * fVar3;
  *(float *)(param_2 + 0x1c) = fVar7 * fVar4 + fVar5 * fVar3;
  *(float *)(param_2 + 0x20) = fVar8 * fVar4 + fVar6 * fVar3;
  return;
}

