
/* public: void __thiscall CEntity::SwitchToModel(void) */

void __thiscall CEntity::SwitchToModel(CEntity *this)

{
  int iVar1;
  
                    /* 0x124cc0  3709  ?SwitchToModel@CEntity@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  if ((iVar1 == 3) || (iVar1 == 5)) {
    *(undefined4 *)(this + 4) = 3;
  }
  else if ((iVar1 == 9) || (iVar1 == 10)) {
    *(undefined4 *)(this + 4) = 9;
    return;
  }
  return;
}

