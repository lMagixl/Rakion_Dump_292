
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_361fc980(double *param_1,uint param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  
  if (param_2 == 1) {
    *param_3 = *param_1 * _DAT_3624cdc0;
    return;
  }
  if (param_2 == 2) {
    *param_3 = param_1[1] * _DAT_3624cdb8 - *param_1 * _DAT_3624cdb0;
    return;
  }
  *param_3 = (param_1[1] * _DAT_3624cdb8 - *param_1 * _DAT_3624cdb0) + param_1[2];
  if (1 < (int)(param_2 - 1)) {
    iVar5 = param_2 - 2;
    pdVar3 = param_1;
    pdVar4 = param_3;
    do {
      pdVar4 = pdVar4 + 1;
      pdVar1 = pdVar3 + 2;
      dVar2 = *pdVar3;
      pdVar3 = pdVar3 + 1;
      iVar5 = iVar5 + -1;
      *pdVar4 = (*pdVar1 - dVar2) * _DAT_3624cda0;
    } while (iVar5 != 0);
  }
  param_3[param_2 - 1] =
       param_1[param_2 - 1] * _DAT_3624cdb0 -
       (param_1[param_2 - 2] * _DAT_3624cdb8 + param_1[param_2 - 3]);
  FUN_361fca40(param_3,param_2);
  return;
}

