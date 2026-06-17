
/* public: void __thiscall CInputDevice::ClearControlsValue(void) */

void __thiscall CInputDevice::ClearControlsValue(CInputDevice *this)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x28780  1259  ?ClearControlsValue@CInputDevice@@QAEXXZ */
  lVar1 = GetControlsCount(this);
  iVar4 = 0;
  if (3 < lVar1) {
    iVar2 = 0;
    iVar3 = (lVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    do {
      *(undefined4 *)(iVar2 + 4 + *(int *)(this + 0x18)) = 0;
      *(undefined4 *)(iVar2 + 0x1c + *(int *)(this + 0x18)) = 0;
      *(undefined4 *)(iVar2 + 0x34 + *(int *)(this + 0x18)) = 0;
      *(undefined4 *)(iVar2 + 0x4c + *(int *)(this + 0x18)) = 0;
      iVar2 = iVar2 + 0x60;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar4 < lVar1) {
    iVar2 = iVar4 * 0x18;
    iVar4 = lVar1 - iVar4;
    do {
      *(undefined4 *)(iVar2 + 4 + *(int *)(this + 0x18)) = 0;
      iVar2 = iVar2 + 0x18;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

