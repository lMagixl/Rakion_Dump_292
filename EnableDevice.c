
/* public: void __thiscall CInputDevice::EnableDevice(void) */

void __thiscall CInputDevice::EnableDevice(CInputDevice *this)

{
                    /* 0x287f0  1554  ?EnableDevice@CInputDevice@@QAEXXZ */
  if (*(int *)(this + 4) == 0) {
    ClearControlsValue(this);
    *(undefined4 *)(this + 4) = 1;
  }
  return;
}

