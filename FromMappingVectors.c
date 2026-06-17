
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::FromMappingVectors(class CMappingVectors const
   &,class CMappingVectors const &) */

void __thiscall
CMappingDefinition::FromMappingVectors
          (CMappingDefinition *this,CMappingVectors *param_1,CMappingVectors *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
                    /* 0x5f090  1681
                       ?FromMappingVectors@CMappingDefinition@@QAEXABVCMappingVectors@@0@Z */
  fVar4 = *(float *)(param_1 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_1 + 0x10) * *(float *)(param_2 + 0x10) +
          *(float *)(param_1 + 0x14) * *(float *)(param_2 + 0x14);
  fVar3 = *(float *)(param_2 + 0x18) * *(float *)(param_1 + 0xc) +
          *(float *)(param_1 + 0x10) * *(float *)(param_2 + 0x1c) +
          *(float *)(param_1 + 0x14) * *(float *)(param_2 + 0x20);
  fVar1 = *(float *)(param_1 + 0x18) * *(float *)(param_2 + 0xc) +
          *(float *)(param_1 + 0x1c) * *(float *)(param_2 + 0x10) +
          *(float *)(param_1 + 0x20) * *(float *)(param_2 + 0x14);
  fVar5 = *(float *)(param_1 + 0x18) * *(float *)(param_2 + 0x18) +
          *(float *)(param_1 + 0x1c) * *(float *)(param_2 + 0x1c) +
          *(float *)(param_1 + 0x20) * *(float *)(param_2 + 0x20);
  fVar2 = _DAT_36223384 / (fVar5 * fVar4 - fVar1 * fVar3);
  fVar5 = fVar2 * fVar5;
  *(float *)this = fVar5;
  fVar6 = -(fVar3 * fVar2);
  *(float *)(this + 4) = fVar6;
  fVar4 = fVar2 * fVar4;
  *(float *)(this + 0xc) = fVar4;
  fVar1 = -(fVar2 * fVar1);
  *(float *)(this + 8) = fVar1;
  fVar2 = (*(float *)param_2 - *(float *)param_1) * *(float *)(param_1 + 0xc) +
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x14) +
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_1 + 0x10);
  fVar3 = (*(float *)param_2 - *(float *)param_1) * *(float *)(param_1 + 0x18) +
          (*(float *)(param_2 + 8) - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x20) +
          (*(float *)(param_2 + 4) - *(float *)(param_1 + 4)) * *(float *)(param_1 + 0x1c);
  *(float *)(this + 0x10) = fVar5 * fVar2 + fVar6 * fVar3;
  *(float *)(this + 0x14) = fVar4 * fVar3 + fVar1 * fVar2;
  return;
}

