
/* public: void __thiscall CEntity::CopyEntityProperties(class CEntity &,unsigned long) */

void __thiscall CEntity::CopyEntityProperties(CEntity *this,CEntity *param_1,ulong param_2)

{
  int iVar1;
  CEntityProperty *pCVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x131e10  1386  ?CopyEntityProperties@CEntity@@QAEXAAV1@K@Z */
  for (iVar1 = *(int *)(*(int *)(this + 0x78) + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
    iVar4 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      iVar3 = 0;
      do {
        pCVar2 = (CEntityProperty *)(*(int *)(iVar1 + 8) + iVar3);
        CopyOneProperty(this,pCVar2,pCVar2,param_1,param_2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar4 < *(int *)(iVar1 + 0xc));
    }
  }
  return;
}

