
/* public: long __thiscall CModelObject::GetMipModel(float) */

long __thiscall CModelObject::GetMipModel(CModelObject *this,float param_1)

{
  CModelData *pCVar1;
  int extraout_ECX;
  int iVar2;
  CModelData *pCVar3;
  
                    /* 0xb5520  1980  ?GetMipModel@CModelObject@@QAEJM@Z */
  pCVar1 = GetData(this);
  if (*(int *)(extraout_ECX + 0x20) == 0) {
    return *(long *)(extraout_ECX + 0x1c);
  }
  iVar2 = 0;
  if (0 < *(int *)(pCVar1 + 0x54)) {
    pCVar3 = pCVar1 + 0x58;
    do {
      if (param_1 < *(float *)pCVar3) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar2 < *(int *)(pCVar1 + 0x54));
  }
  return iVar2 + -1;
}

