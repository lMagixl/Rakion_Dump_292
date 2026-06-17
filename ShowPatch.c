
/* public: void __thiscall CModelObject::ShowPatch(long) */

void __thiscall CModelObject::ShowPatch(CModelObject *this,long param_1)

{
  CModelData *pCVar1;
  uint uVar2;
  
                    /* 0xb5bd0  3633  ?ShowPatch@CModelObject@@QAEXJ@Z */
  pCVar1 = GetData(this);
  if (pCVar1 != (CModelData *)0x0) {
    uVar2 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar2 & *(uint *)(this + 0x18)) == 0) {
      *(uint *)(this + 0x18) = *(uint *)(this + 0x18) | uVar2;
    }
  }
  return;
}

