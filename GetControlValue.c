
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CInputDevice::GetControlValue(long) */

float __thiscall CInputDevice::GetControlValue(CInputDevice *this,long param_1)

{
  int *piVar1;
  
                    /* 0x28750  1803  ?GetControlValue@CInputDevice@@QAEMJ@Z */
  piVar1 = (int *)(*(int *)(this + 0x18) + param_1 * 0x18);
  if (*piVar1 != 0) {
    return (float)piVar1[1];
  }
  return _DAT_3622376c;
}

