
/* public: void __thiscall CInputDevice::EnableControl(long) */

void __thiscall CInputDevice::EnableControl(CInputDevice *this,long param_1)

{
                    /* 0x28830  1553  ?EnableControl@CInputDevice@@QAEXJ@Z */
  *(undefined4 *)(*(int *)(this + 0x18) + param_1 * 0x18) = 1;
  return;
}

