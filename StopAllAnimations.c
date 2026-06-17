
/* public: void __thiscall CModelInstance::StopAllAnimations(float) */

void __thiscall CModelInstance::StopAllAnimations(CModelInstance *this,float param_1)

{
  int iVar1;
  CModelInstance *this_00;
  int iVar2;
  float fVar3;
  
                    /* 0x15edb0  3682  ?StopAllAnimations@CModelInstance@@QAEXM@Z */
  iVar1 = FUN_36036010((int)(this + 0x4c));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      fVar3 = param_1;
      this_00 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar2);
      StopAllAnimations(this_00,fVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  NewClearState(this,param_1);
  return;
}

