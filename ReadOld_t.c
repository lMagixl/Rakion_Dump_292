
/* public: void __thiscall CMappingDefinition::ReadOld_t(class CTStream &) */

void __thiscall CMappingDefinition::ReadOld_t(CMappingDefinition *this,CTStream *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x5e290  2972  ?ReadOld_t@CMappingDefinition@@QAEXAAVCTStream@@@Z */
  iVar1 = *(int *)(param_1 + 0x14);
  fVar5 = *(float *)(iVar1 + 4);
  fVar2 = *(float *)(iVar1 + 8);
  fVar3 = *(float *)(iVar1 + 0xc);
  *(int *)(param_1 + 0x14) = iVar1 + 0x10;
  fVar4 = Sin(fVar5);
  fVar5 = Cos(fVar5);
  *(float *)(this + 0x10) = -fVar2;
  *(float *)(this + 8) = fVar4;
  *(float *)(this + 0x14) = -fVar3;
  *(float *)this = fVar5;
  *(float *)(this + 4) = -fVar4;
  *(float *)(this + 0xc) = fVar5;
  return;
}

