
/* public: long __thiscall CInputDevice::GetControl(class CTString const &) */

long __thiscall CInputDevice::GetControl(CInputDevice *this,CTString *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x28700  1793  ?GetControl@CInputDevice@@QAEJABVCTString@@@Z */
  lVar1 = GetControlsCount(this);
  iVar4 = 0;
  if (0 < lVar1) {
    iVar3 = 0;
    do {
      iVar2 = CTString::operator==((CTString *)(*(int *)(this + 0x18) + iVar3 + 0x10),param_1);
      if (iVar2 != 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x18;
    } while (iVar4 < lVar1);
  }
  return 0;
}

