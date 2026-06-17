
/* public: class CPlayerEntity * __thiscall CWorld::FindEntityWithCharacter(class CPlayerCharacter
   &) */

CPlayerEntity * __thiscall CWorld::FindEntityWithCharacter(CWorld *this,CPlayerCharacter *param_1)

{
  CWorld *this_00;
  int iVar1;
  CEntity *pCVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc85e0  1634
                       ?FindEntityWithCharacter@CWorld@@QAEPAVCPlayerEntity@@AAVCPlayerCharacter@@@Z
                        */
  puStack_8 = &LAB_362144a0;
  local_c = ExceptionList;
  this_00 = this + 0x15c;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_00);
  if (0 < iVar1) {
    do {
      pCVar2 = (CEntity *)FUN_360cafb0(this_00,iVar3);
      iVar1 = IsDerivedFromClass(pCVar2,(CDLLEntityClass *)&CPlayerEntity_DLLClass);
      if ((iVar1 != 0) && (*(int *)(pCVar2 + 0x3a8) == *(int *)(param_1 + 0x40))) {
        ExceptionList = local_c;
        return (CPlayerEntity *)pCVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360caf20((int)this_00);
    } while (iVar3 < iVar1);
  }
  ExceptionList = local_c;
  return (CPlayerEntity *)0x0;
}

