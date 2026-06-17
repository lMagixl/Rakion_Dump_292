
/* public: int __thiscall CInput::AddDevice(enum DeviceType,long) */

int __thiscall CInput::AddDevice(CInput *this,DeviceType param_1,long param_2)

{
  int iVar1;
  CInputDevice *this_00;
  
                    /* 0x2a830  971  ?AddDevice@CInput@@QAEHW4DeviceType@@J@Z */
  this_00 = (CInputDevice *)(param_2 * 0x1c + *(int *)(this + 0x44));
  iVar1 = CInputDevice::InitDevice(this_00,param_1);
  if (iVar1 != 0) {
    CInputDevice::EnableDevice(this_00);
  }
  return iVar1;
}

