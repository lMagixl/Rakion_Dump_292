
/* public: void __thiscall CModelInstance::SetModelColor(unsigned long) */

void __thiscall CModelInstance::SetModelColor(CModelInstance *this,ulong param_1)

{
  int iVar1;
  CModelInstance *this_00;
  int iVar2;
  ulong uVar3;
  
                    /* 0x15d6e0  3523  ?SetModelColor@CModelInstance@@QAEXK@Z */
  *(ulong *)(this + 0xf0) = param_1;
  iVar1 = FUN_36036010((int)(this + 0x4c));
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      uVar3 = param_1;
      this_00 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar2);
      SetModelColor(this_00,uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

