
void __cdecl FUN_36205140(int param_1,int param_2,double *param_3,int *param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  int local_40 [16];
  
  iVar1 = param_1;
  if (0 < param_1) {
    piVar2 = local_40;
    for (iVar3 = param_1; pdVar5 = (double *)(param_2 + 8), pdVar6 = (double *)&DAT_36385f80,
        iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar2 = 1;
      piVar2 = piVar2 + 1;
    }
    do {
      param_1 = param_1 + -1;
      *pdVar6 = param_3[1] * *pdVar5 + pdVar5[-1] * *param_3 + pdVar5[1] * param_3[2];
      pdVar5 = pdVar5 + 3;
      pdVar6 = pdVar6 + 1;
    } while (param_1 != 0);
  }
  param_1 = iVar1;
  if (param_5 == 0) {
    if (0 < iVar1) {
      do {
        iVar3 = 0;
        piVar2 = local_40;
        do {
          if (*piVar2 != 0) break;
          iVar3 = iVar3 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar3 < iVar1);
        iVar4 = iVar3 + 1;
        if (iVar4 < iVar1) {
          iVar7 = iVar3 * 8;
          piVar2 = local_40 + iVar4;
          do {
            if ((*piVar2 != 0) &&
               ((double)(&DAT_36385f80)[iVar4] < *(double *)((int)&DAT_36385f80 + iVar7))) {
              iVar3 = iVar4;
              iVar7 = iVar4 * 8;
            }
            iVar4 = iVar4 + 1;
            piVar2 = piVar2 + 1;
          } while (iVar4 < iVar1);
        }
        local_40[iVar3] = 0;
        *param_4 = iVar3;
        param_4 = param_4 + 1;
        param_1 = param_1 + -1;
      } while (param_1 != 0);
    }
  }
  else if (0 < iVar1) {
    do {
      iVar3 = 0;
      piVar2 = local_40;
      do {
        if (*piVar2 != 0) break;
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar3 < iVar1);
      iVar4 = iVar3 + 1;
      if (iVar4 < iVar1) {
        iVar7 = iVar3 * 8;
        piVar2 = local_40 + iVar4;
        do {
          if ((*piVar2 != 0) &&
             ((double)(&DAT_36385f80)[iVar4] <= *(double *)((int)&DAT_36385f80 + iVar7))) {
            iVar3 = iVar4;
            iVar7 = iVar4 * 8;
          }
          iVar4 = iVar4 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar4 < iVar1);
      }
      local_40[iVar3] = 0;
      *param_4 = iVar3;
      param_4 = param_4 + 1;
      param_1 = param_1 + -1;
      if (param_1 == 0) {
        return;
      }
    } while( true );
  }
  return;
}

