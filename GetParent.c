
/* public: class CModelInstance * __thiscall CModelInstance::GetParent(class CModelInstance *) */

CModelInstance * __thiscall CModelInstance::GetParent(CModelInstance *this,CModelInstance *param_1)

{
  CModelInstance *this_00;
  int iVar1;
  CModelInstance *pCVar2;
  int iVar3;
  
                    /* 0x15cde0  2030  ?GetParent@CModelInstance@@QAEPAV1@PAV1@@Z */
  if (param_1 == (CModelInstance *)0x0) {
    return (CModelInstance *)0x0;
  }
  this_00 = param_1 + 0x4c;
  iVar1 = FUN_3615fe00(this_00,(int)this);
  if (iVar1 == 0) {
    iVar1 = FUN_36036010((int)this_00);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        pCVar2 = (CModelInstance *)FUN_36036020(this_00,iVar3);
        pCVar2 = GetParent(this,pCVar2);
        if (pCVar2 != (CModelInstance *)0x0) {
          return pCVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
    return (CModelInstance *)0x0;
  }
  return param_1;
}

