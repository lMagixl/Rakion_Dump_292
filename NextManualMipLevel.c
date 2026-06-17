
/* public: void __thiscall CModelObject::NextManualMipLevel(void) */

void __thiscall CModelObject::NextManualMipLevel(CModelObject *this)

{
  CModelData *pCVar1;
  CChangeable *this_00;
  int extraout_EDX;
  
                    /* 0xb55e0  2675  ?NextManualMipLevel@CModelObject@@QAEXXZ */
  pCVar1 = GetData(this);
  if (extraout_EDX < *(int *)(pCVar1 + 0x54) + -1) {
    *(int *)(this_00 + 0x1c) = extraout_EDX + 1;
    CChangeable::MarkChanged(this_00);
    return;
  }
  return;
}

