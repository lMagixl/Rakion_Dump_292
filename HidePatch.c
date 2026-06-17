
/* public: void __thiscall CModelObject::HidePatch(long) */

void __thiscall CModelObject::HidePatch(CModelObject *this,long param_1)

{
  CModelData *pCVar1;
  uint uVar2;
  int extraout_EDX;
  
                    /* 0xb5c00  2263  ?HidePatch@CModelObject@@QAEXJ@Z */
  pCVar1 = GetData(this);
  if (pCVar1 != (CModelData *)0x0) {
    uVar2 = 1 << ((byte)param_1 & 0x1f);
    if ((uVar2 & *(uint *)(extraout_EDX + 0x18)) != 0) {
      *(uint *)(extraout_EDX + 0x18) = ~uVar2 & *(uint *)(extraout_EDX + 0x18);
    }
  }
  return;
}

