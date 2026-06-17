
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall CAOTimeOld::Compensation(void) */

float __thiscall CAOTimeOld::Compensation(CAOTimeOld *this)

{
  short sVar1;
  
                    /* 0x1999c0  1349  ?Compensation@CAOTimeOld@@QAEMXZ */
  sVar1 = *(short *)(this + 0x10);
  if (sVar1 != 1) {
    if (sVar1 == 2) {
      return _DAT_3622376c;
    }
    if (sVar1 != 3) {
      return _DAT_36223384;
    }
  }
  return _DAT_36227cf0;
}

