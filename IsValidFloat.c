
/* int __cdecl IsValidFloat(float) */

int __cdecl IsValidFloat(float param_1)

{
  int iVar1;
  
                    /* 0x48b20  2496  ?IsValidFloat@@YAHM@Z */
  iVar1 = _finite((double)param_1);
  if ((iVar1 != 0) && (param_1 != -4.3160208e+08)) {
    return 1;
  }
  return 0;
}

