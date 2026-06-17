
/* void __cdecl SetFPUPrecision(enum FPUPrecisionType) */

void __cdecl SetFPUPrecision(FPUPrecisionType param_1)

{
                    /* 0x48a90  3458  ?SetFPUPrecision@@YAXW4FPUPrecisionType@@@Z */
  if (param_1 != 0) {
    if (param_1 == 1) {
      _control87(0x10000,0x30000);
      return;
    }
    if (param_1 == 2) {
      _control87(0,0x30000);
      return;
    }
  }
  _control87(0x20000,0x30000);
  return;
}

