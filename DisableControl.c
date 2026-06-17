
/* public: void __thiscall CInputDevice::DisableControl(long) */

void __thiscall CInputDevice::DisableControl(CInputDevice *this,long param_1)

{
                    /* 0x28850  1501  ?DisableControl@CInputDevice@@QAEXJ@Z */
  *(undefined4 *)(*(int *)(this + 0x18) + param_1 * 0x18) = 0;
  return;
}

