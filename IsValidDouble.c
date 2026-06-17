
/* int __cdecl IsValidDouble(double) */

int __cdecl IsValidDouble(double param_1)

{
  int iVar1;
  
                    /* 0x48b50  2495  ?IsValidDouble@@YAHN@Z */
  iVar1 = _finite(param_1);
  if ((iVar1 != 0) && (param_1 != -6.2774385622041925e+66)) {
    return 1;
  }
  return 0;
}

