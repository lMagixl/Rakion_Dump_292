
/* public: void __thiscall CEntity::ReadEntityPointer_t(class CTStream *,class CEntityPointer &) */

void __thiscall
CEntity::ReadEntityPointer_t(CEntity *this,CTStream *param_1,CEntityPointer *param_2)

{
  CEntity *pCVar1;
  ulong uVar2;
  CEntity *this_00;
  CEntity *pCVar3;
  
                    /* 0x132970  2960
                       ?ReadEntityPointer_t@CEntity@@QAEXPAVCTStream@@AAVCEntityPointer@@@Z */
  uVar2 = **(ulong **)(param_1 + 0x14);
  *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
  if (uVar2 == 0xffffffff) {
    pCVar3 = (CEntity *)0x0;
  }
  else {
    if (DAT_362cbf10 == 0) {
      pCVar3 = (CEntity *)FUN_360cafb0(*(CWorld **)(this + 0xa8) + 0x3c,uVar2);
    }
    else {
      pCVar3 = CWorld::EntityFromID(*(CWorld **)(this + 0xa8),uVar2);
    }
    if (pCVar3 != (CEntity *)0x0) {
      *(int *)(pCVar3 + 0x18) = *(int *)(pCVar3 + 0x18) + 1;
    }
  }
  this_00 = *(CEntity **)param_2;
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      DeleteSelf(this_00);
    }
  }
  *(CEntity **)param_2 = pCVar3;
  return;
}

