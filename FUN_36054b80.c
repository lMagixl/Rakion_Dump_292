
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36054b80(int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + -8 + DAT_362bf664 * 8) -
          *(double *)(param_2 + -8 + DAT_362bf664 * 8);
  if (dVar1 < (double)_DAT_362a29a0 * _DAT_36228090) {
    return 0xffffffff;
  }
  if ((double)_DAT_362a29a0 * _DAT_36225648 < dVar1) {
    return 1;
  }
  return 0;
}

