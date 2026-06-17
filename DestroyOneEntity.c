
/* public: void __thiscall CWorld::DestroyOneEntity(class CEntity *) */

void __thiscall CWorld::DestroyOneEntity(CWorld *this,CEntity *param_1)

{
  int iVar1;
  
                    /* 0xc8fd0  1489  ?DestroyOneEntity@CWorld@@QAEXPAVCEntity@@@Z */
  iVar1 = (**(code **)(*(int *)param_1 + 0x8c))();
  if (iVar1 != 0) {
    UntargetEntity(this,param_1);
  }
  (**(code **)(*(int *)param_1 + 0x58))(1);
  return;
}

