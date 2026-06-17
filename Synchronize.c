
/* public: void __thiscall CModelInstance::Synchronize(class CModelInstance &) */

void __thiscall CModelInstance::Synchronize(CModelInstance *this,CModelInstance *param_1)

{
  CModelInstance *pCVar1;
  long *plVar2;
  CModelInstance *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
                    /* 0x15f100  3713  ?Synchronize@CModelInstance@@QAEXAAV1@@Z */
  FUN_36161500(this + 0xbc,(undefined4 *)(param_1 + 0xbc));
  pCVar1 = param_1 + 0xcc;
  pCVar3 = this + 0xcc;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)pCVar1;
    pCVar1 = pCVar1 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  iVar4 = FUN_36036010((int)(this + 0x4c));
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      pCVar1 = (CModelInstance *)FUN_36036020(this + 0x4c,iVar5);
      iVar6 = 0;
      plVar2 = GetID(pCVar1);
      pCVar3 = GetChild(param_1,*plVar2,iVar6);
      if (pCVar3 != (CModelInstance *)0x0) {
        Synchronize(pCVar1,pCVar3);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  return;
}

