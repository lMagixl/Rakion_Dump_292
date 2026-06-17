
int __cdecl FUN_36152250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_36153e00(&DAT_362fdd04);
  if (iVar1 <= param_1) {
    return -1;
  }
  if (*(int *)(DAT_362fdd08 + param_1 * 4) != 0) {
    do {
      if (*(int *)(DAT_362fdd08 + param_1 * 4) == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_1 < iVar1);
    param_1 = -1;
  }
  return param_1;
}

