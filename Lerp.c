
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerAction::Lerp(class CPlayerAction const &,class CPlayerAction const
   &,float) */

void __thiscall
CPlayerAction::Lerp(CPlayerAction *this,CPlayerAction *param_1,CPlayerAction *param_2,float param_3)

{
  CPlayerAction *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* 0x106a50  2536  ?Lerp@CPlayerAction@@QAEXABV1@0M@Z */
  fVar3 = _DAT_3622376c;
  pCVar1 = param_1 + 0x14;
  if (param_3 == _DAT_3622376c) {
    fVar2 = *(float *)pCVar1;
    fVar5 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x1c);
  }
  else {
    fVar2 = *(float *)(param_2 + 0x14);
    if (param_3 == _DAT_36223384) {
      fVar5 = *(float *)(param_2 + 0x18);
      fVar4 = *(float *)(param_2 + 0x1c);
    }
    else {
      fVar2 = *(float *)pCVar1 + (fVar2 - *(float *)pCVar1) * param_3;
      fVar5 = *(float *)(param_1 + 0x18) +
              (*(float *)(param_2 + 0x18) - *(float *)(param_1 + 0x18)) * param_3;
      fVar4 = *(float *)(param_1 + 0x1c) +
              (*(float *)(param_2 + 0x1c) - *(float *)(param_1 + 0x1c)) * param_3;
    }
  }
  *(float *)(this + 0x14) = fVar2;
  *(float *)(this + 0x18) = fVar5;
  *(float *)(this + 0x1c) = fVar4;
  fVar2 = _DAT_3622376c;
  pCVar1 = param_1 + 0x20;
  if (param_3 == fVar3) {
    fVar3 = *(float *)pCVar1;
    fVar5 = *(float *)(param_1 + 0x24);
    fVar4 = *(float *)(param_1 + 0x28);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x20);
    if (param_3 == _DAT_36223384) {
      fVar5 = *(float *)(param_2 + 0x24);
      fVar4 = *(float *)(param_2 + 0x28);
    }
    else {
      fVar3 = *(float *)pCVar1 + (fVar3 - *(float *)pCVar1) * param_3;
      fVar5 = *(float *)(param_1 + 0x24) +
              (*(float *)(param_2 + 0x24) - *(float *)(param_1 + 0x24)) * param_3;
      fVar4 = *(float *)(param_1 + 0x28) +
              (*(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28)) * param_3;
    }
  }
  *(float *)(this + 0x20) = fVar3;
  *(float *)(this + 0x24) = fVar5;
  *(float *)(this + 0x28) = fVar4;
  fVar3 = _DAT_3622376c;
  pCVar1 = param_1 + 0x2c;
  if (param_3 == fVar2) {
    fVar2 = *(float *)pCVar1;
    fVar5 = *(float *)(param_1 + 0x30);
    fVar4 = *(float *)(param_1 + 0x34);
  }
  else {
    fVar2 = *(float *)(param_2 + 0x2c);
    if (param_3 == _DAT_36223384) {
      fVar5 = *(float *)(param_2 + 0x30);
      fVar4 = *(float *)(param_2 + 0x34);
    }
    else {
      fVar2 = *(float *)pCVar1 + (fVar2 - *(float *)pCVar1) * param_3;
      fVar5 = *(float *)(param_1 + 0x30) +
              (*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30)) * param_3;
      fVar4 = *(float *)(param_1 + 0x34) +
              (*(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34)) * param_3;
    }
  }
  *(float *)(this + 0x2c) = fVar2;
  *(float *)(this + 0x30) = fVar5;
  *(float *)(this + 0x34) = fVar4;
  pCVar1 = param_1 + 0x38;
  if (param_3 == fVar3) {
    fVar3 = *(float *)pCVar1;
    fVar2 = *(float *)(param_1 + 0x3c);
    fVar5 = *(float *)(param_1 + 0x40);
  }
  else {
    fVar3 = *(float *)(param_2 + 0x38);
    if (param_3 == _DAT_36223384) {
      fVar2 = *(float *)(param_2 + 0x3c);
      fVar5 = *(float *)(param_2 + 0x40);
    }
    else {
      fVar3 = *(float *)pCVar1 + (fVar3 - *(float *)pCVar1) * param_3;
      fVar2 = *(float *)(param_1 + 0x3c) +
              (*(float *)(param_2 + 0x3c) - *(float *)(param_1 + 0x3c)) * param_3;
      fVar5 = *(float *)(param_1 + 0x40) +
              (*(float *)(param_2 + 0x40) - *(float *)(param_1 + 0x40)) * param_3;
    }
  }
  *(float *)(this + 0x38) = fVar3;
  *(float *)(this + 0x3c) = fVar2;
  *(float *)(this + 0x40) = fVar5;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return;
}

