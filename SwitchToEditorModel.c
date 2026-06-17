
/* public: void __thiscall CEntity::SwitchToEditorModel(void) */

void __thiscall CEntity::SwitchToEditorModel(CEntity *this)

{
  int iVar1;
  
                    /* 0x124cf0  3708  ?SwitchToEditorModel@CEntity@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  if ((iVar1 == 3) || (iVar1 == 5)) {
    *(undefined4 *)(this + 4) = 5;
  }
  else if ((iVar1 == 9) || (iVar1 == 10)) {
    *(undefined4 *)(this + 4) = 10;
    return;
  }
  return;
}

