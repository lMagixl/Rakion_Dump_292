
/* public: class CInputDevice * __thiscall CInput::GetInputDevice(class CTString const &) */

CInputDevice * __thiscall CInput::GetInputDevice(CInput *this,CTString *param_1)

{
  int iVar1;
  CInputDevice *pCVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x28550  1926  ?GetInputDevice@CInput@@QAEPAVCInputDevice@@ABVCTString@@@Z */
  iVar1 = FUN_3600aa00((undefined4 *)(this + 0x40));
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      pCVar2 = GetInputDevice(this,iVar4);
      if (pCVar2 != (CInputDevice *)0x0) {
        iVar3 = CTString::operator==((CTString *)(pCVar2 + 0xc),param_1);
        if (iVar3 != 0) {
          return pCVar2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return (CInputDevice *)0x0;
}

