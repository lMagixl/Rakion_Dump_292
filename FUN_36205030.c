
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36205030(int param_1,int param_2,double *param_3)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int local_10;
  int local_c;
  
  iVar2 = 0;
  _DAT_363840d0 = 0.0;
  if (0 < param_1) {
    pdVar1 = (double *)(param_2 + 0x10);
    pdVar4 = pdVar1;
    iVar3 = iVar2;
    do {
      for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
        _DAT_36387d40 =
             (pdVar4[-2] - pdVar1[-2]) * (pdVar4[-2] - pdVar1[-2]) +
             (pdVar4[-1] - pdVar1[-1]) * (pdVar4[-1] - pdVar1[-1]) +
             (*pdVar4 - *pdVar1) * (*pdVar4 - *pdVar1);
        if (_DAT_363840d0 < _DAT_36387d40) {
          _DAT_363840d0 = _DAT_36387d40;
          local_10 = iVar3;
          local_c = iVar2;
        }
        pdVar1 = pdVar1 + 3;
      }
      iVar2 = iVar3 + 1;
      pdVar1 = pdVar4 + 3;
      pdVar4 = pdVar1;
      iVar3 = iVar2;
    } while (iVar2 < param_1);
  }
  pdVar1 = (double *)(param_2 + local_10 * 0x18);
  pdVar4 = (double *)(param_2 + local_c * 0x18);
  _DAT_363840d0 = _DAT_3624cdd0 / SQRT(_DAT_363840d0);
  *param_3 = (*pdVar1 - *pdVar4) * _DAT_363840d0;
  param_3[1] = (pdVar1[1] - pdVar4[1]) * _DAT_363840d0;
  param_3[2] = (pdVar1[2] - pdVar4[2]) * _DAT_363840d0;
  return;
}

