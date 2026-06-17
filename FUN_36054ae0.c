
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36054ae0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(_DAT_362a29a0 * (float)_DAT_36228090);
  if (*param_1 - *param_2 < dVar1) {
    return 0xffffffff;
  }
  dVar2 = (double)(_DAT_362a29a0 * (float)_DAT_36225648);
  if (*param_1 - *param_2 <= dVar2) {
    if (param_1[1] - param_2[1] < dVar1) {
      return 0xffffffff;
    }
    if (param_1[1] - param_2[1] <= dVar2) {
      if (param_1[2] - param_2[2] < dVar1) {
        return 0xffffffff;
      }
      if (param_1[2] - param_2[2] <= dVar2) {
        return 0;
      }
    }
  }
  return 1;
}

