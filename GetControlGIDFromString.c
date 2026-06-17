
/* public: unsigned long __thiscall CInput::GetControlGIDFromString(class CTString const &,class
   CTString const &) */

ulong __thiscall CInput::GetControlGIDFromString(CInput *this,CTString *param_1,CTString *param_2)

{
  CInputDevice *this_00;
  uint uVar1;
  
                    /* 0x2a860  1798  ?GetControlGIDFromString@CInput@@QAEKABVCTString@@0@Z */
  this_00 = GetInputDevice(this,param_1);
  if (this_00 != (CInputDevice *)0x0) {
    uVar1 = CInputDevice::GetControl(this_00,param_2);
    return *(int *)(this_00 + 8) << 0x10 | uVar1;
  }
  return 0;
}

