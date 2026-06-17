
/* public: class CModelInstance * __thiscall CModelInstance::GetFirstNonReferencedParent(class
   CModelInstance *) */

CModelInstance * __thiscall
CModelInstance::GetFirstNonReferencedParent(CModelInstance *this,CModelInstance *param_1)

{
  CModelInstance *pCVar1;
  int iVar2;
  CModelInstance *this_00;
  CModelInstance *pCVar3;
  
                    /* 0x15cf40  1869  ?GetFirstNonReferencedParent@CModelInstance@@QAEPAV1@PAV1@@Z
                        */
  pCVar1 = GetParent(this,param_1);
  if (pCVar1 != (CModelInstance *)0x0) {
    pCVar3 = this;
    do {
      this_00 = pCVar1;
      iVar2 = CTString::operator!=((CTString *)(this_00 + 0xf4),(CTString *)(this + 0xf4));
      if (iVar2 != 0) {
        return pCVar3;
      }
      pCVar1 = GetParent(this_00,param_1);
      pCVar3 = this_00;
    } while (pCVar1 != (CModelInstance *)0x0);
  }
  return (CModelInstance *)0x0;
}

