
/* public: void __thiscall CModelInstance::SetModelAlpha(unsigned char) */

void __thiscall CModelInstance::SetModelAlpha(CModelInstance *this,uchar param_1)

{
  int iVar1;
  CModelInstance *this_00;
  int iVar2;
  uchar uVar3;
  
                    /* 0x15d720  3519  ?SetModelAlpha@CModelInstance@@QAEXE@Z */
  *(uint *)(this + 0xf0) = (*(uint *)(this + 0xf0) & 0xffffff00) + (uint)param_1;
  iVar1 = FUN_36036010((int)(this + 0x4c));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = param_1;
      this_00 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar2);
      SetModelAlpha(this_00,uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

