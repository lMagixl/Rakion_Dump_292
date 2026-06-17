
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::FromUI(class CMappingDefinitionUI const &) */

void __thiscall CMappingDefinition::FromUI(CMappingDefinition *this,CMappingDefinitionUI *param_1)

{
  float fVar1;
  
                    /* 0x5e200  1688  ?FromUI@CMappingDefinition@@QAEXABVCMappingDefinitionUI@@@Z */
  fVar1 = Cos(-*(float *)(param_1 + 4));
  *(float *)this = fVar1;
  fVar1 = Sin(-*(float *)(param_1 + 4));
  *(float *)(this + 4) = fVar1;
  fVar1 = Cos(_DAT_36228128 - *(float *)param_1);
  *(float *)(this + 8) = fVar1;
  fVar1 = Sin(_DAT_36228128 - *(float *)param_1);
  *(float *)(this + 0xc) = fVar1;
  *(float *)this = *(float *)this / *(float *)(param_1 + 8);
  *(float *)(this + 4) = *(float *)(this + 4) / *(float *)(param_1 + 8);
  *(float *)(this + 8) = *(float *)(this + 8) / *(float *)(param_1 + 0xc);
  *(float *)(this + 0xc) = fVar1 / *(float *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return;
}

