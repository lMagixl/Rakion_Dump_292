
/* public: void __thiscall CWorld::SetBackgroundViewer(class CEntity *) */

void __thiscall CWorld::SetBackgroundViewer(CWorld *this,CEntity *param_1)

{
  CEntity *pCVar1;
  CEntity *this_00;
  
                    /* 0xc8290  3406  ?SetBackgroundViewer@CWorld@@QAEXPAVCEntity@@@Z */
  if (param_1 != (CEntity *)0x0) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  this_00 = *(CEntity **)(this + 0x9c);
  if (this_00 != (CEntity *)0x0) {
    pCVar1 = this_00 + 0x18;
    *(int *)pCVar1 = *(int *)pCVar1 + -1;
    if (*(int *)pCVar1 == 0) {
      CEntity::DeleteSelf(this_00);
    }
  }
  *(CEntity **)(this + 0x9c) = param_1;
  return;
}

