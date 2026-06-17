
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelData::SpreadMipSwitchFactors(long,float) */

void __thiscall CModelData::SpreadMipSwitchFactors(CModelData *this,long param_1,float param_2)

{
  int iVar1;
  float fVar2;
  CModelData *pCVar3;
  int iVar4;
  
                    /* 0xb4870  3653  ?SpreadMipSwitchFactors@CModelData@@QAEXJM@Z */
  fVar2 = _DAT_36231d84;
  if ((param_2 <= _DAT_36231d88) && (0 < *(int *)(this + 0x54) - param_1)) {
    fVar2 = (_DAT_36231d88 - param_2) / (float)(*(int *)(this + 0x54) - param_1);
  }
  if (param_1 < *(int *)(this + 0x54)) {
    iVar4 = 1 - param_1;
    pCVar3 = this + param_1 * 4 + 0x58;
    do {
      iVar1 = iVar4 + param_1;
      param_1 = param_1 + 1;
      *(float *)pCVar3 = (float)iVar1 * fVar2 + param_2;
      pCVar3 = pCVar3 + 4;
    } while (param_1 < *(int *)(this + 0x54));
  }
  return;
}

