
/* public: void __thiscall CInputDevice::DisableDevice(void) */

void __thiscall CInputDevice::DisableDevice(CInputDevice *this)

{
                    /* 0x28810  1502  ?DisableDevice@CInputDevice@@QAEXXZ */
  if (*(int *)(this + 4) != 0) {
    ClearControlsValue(this);
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

