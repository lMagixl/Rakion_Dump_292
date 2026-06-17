
/* public: void __thiscall CInput::SetControlNames(void) */

void __thiscall CInput::SetControlNames(CInput *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x299b0  3420  ?SetControlNames@CInput@@QAEXXZ */
  iVar1 = FUN_3600aa00((undefined4 *)(this + 0x40));
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      iVar2 = *(int *)(this + 0x44) + iVar3;
      switch(*(undefined4 *)(*(int *)(this + 0x44) + iVar3)) {
      case 0:
        FUN_36029960();
        break;
      case 1:
        FUN_36028e90(iVar2);
        break;
      case 2:
        FUN_36028f80();
        break;
      case 3:
        FUN_360291f0();
        break;
      case 4:
        FUN_360293d0(iVar2);
      }
      iVar3 = iVar3 + 0x1c;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

