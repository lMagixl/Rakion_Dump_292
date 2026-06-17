
/* public: int __thiscall CInputDevice::InitDevice(enum DeviceType) */

int __thiscall CInputDevice::InitDevice(CInputDevice *this,DeviceType param_1)

{
  int iVar1;
  
                    /* 0x28e30  2312  ?InitDevice@CInputDevice@@QAEHW4DeviceType@@@Z */
  switch(param_1) {
  case 0:
    iVar1 = FUN_36028870();
    return iVar1;
  case 1:
    iVar1 = FUN_360288c0();
    return iVar1;
  case 2:
    iVar1 = FUN_36028990();
    return iVar1;
  case 3:
    iVar1 = FUN_360289e0();
    return iVar1;
  case 4:
    iVar1 = FUN_36028a30();
    return iVar1;
  default:
    return 0;
  }
}

