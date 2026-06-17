
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMappingDefinition::ToUI(class CMappingDefinitionUI &)const  */

void __thiscall CMappingDefinition::ToUI(CMappingDefinition *this,CMappingDefinitionUI *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_8;
  float local_4;
  
                    /* 0x5e0d0  3835  ?ToUI@CMappingDefinition@@QBEXAAVCMappingDefinitionUI@@@Z */
  fVar1 = *(float *)this;
  fVar2 = *(float *)(this + 8);
  fVar3 = *(float *)(this + 0xc);
  fVar4 = *(float *)(this + 4);
  fVar5 = (float10)fpatan((float10)fVar3,(float10)fVar2);
  local_8 = (float)-(fVar5 * (float10)_DAT_36227d14 - (float10)_DAT_36228128);
  fVar5 = (float10)fpatan((float10)fVar4,(float10)fVar1);
  local_4 = (float)-(fVar5 * (float10)_DAT_36227d14);
  Snap(&local_8,0.001);
  Snap(&local_4,0.001);
  fVar5 = (float10)_CIfmod();
  local_8 = (float)fVar5;
  fVar5 = (float10)_CIfmod();
  *(float *)param_1 = (float)(fVar5 - (float10)_DAT_362280e0);
  _CIfmod();
  fVar5 = (float10)_CIfmod();
  *(float *)(param_1 + 4) = (float)(fVar5 - (float10)_DAT_362280e0);
  *(float *)(param_1 + 8) = _DAT_36223384 / SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  *(float *)(param_1 + 0xc) = _DAT_36223384 / SQRT(fVar2 * fVar2 + fVar3 * fVar3);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x14);
  return;
}

