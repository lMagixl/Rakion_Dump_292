
/* public: int __thiscall CInputDevice::HasJoystickPOV(void) */

int __thiscall CInputDevice::HasJoystickPOV(CInputDevice *this)

{
  int iVar1;
  
                    /* 0x286b0  2256  ?HasJoystickPOV@CInputDevice@@QAEHXZ */
  if ((((*(int *)this == 4) && (iVar1 = *(int *)(this + 0x18), *(int *)(iVar1 + 0x420) != 0)) &&
      (*(int *)(iVar1 + 0x438) != 0)) &&
     ((*(int *)(iVar1 + 0x450) != 0 && (*(int *)(iVar1 + 0x468) != 0)))) {
    return 1;
  }
  return 0;
}

