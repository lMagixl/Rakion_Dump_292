
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36054c90(int param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 8) - *(double *)(param_2 + 8);
  dVar1 = (double)(_DAT_362a29a0 * (float)_DAT_362280a8);
  if (dVar3 < dVar1) {
    return 0xffffffff;
  }
  dVar2 = (double)(_DAT_362a29a0 * (float)_DAT_362280a0);
  if (dVar3 <= dVar2) {
    dVar3 = *(double *)(param_1 + 0x10) - *(double *)(param_2 + 0x10);
    if (dVar3 < dVar1) {
      return 0xffffffff;
    }
    if (dVar3 <= dVar2) {
      dVar3 = *(double *)(param_1 + 0x18) - *(double *)(param_2 + 0x18);
      if (dVar3 < dVar1) {
        return 0xffffffff;
      }
      if (dVar3 <= dVar2) {
        dVar3 = *(double *)(param_1 + 0x20) - *(double *)(param_2 + 0x20);
        if (dVar3 < dVar1) {
          return 0xffffffff;
        }
        if (dVar3 <= dVar2) {
          dVar3 = *(double *)(param_1 + 0x28) - *(double *)(param_2 + 0x28);
          if (dVar3 < dVar1) {
            return 0xffffffff;
          }
          if (dVar3 <= dVar2) {
            dVar3 = *(double *)(param_1 + 0x30) - *(double *)(param_2 + 0x30);
            if (dVar3 < dVar1) {
              return 0xffffffff;
            }
            if (dVar3 <= dVar2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

