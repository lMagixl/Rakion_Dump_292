
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36064560(int *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_10;
  int local_c;
  uint local_8;
  int iStack_4;
  
  if (DAT_362a40e0 < 0) {
    DAT_362a40e0 = 0;
    return;
  }
  if (DAT_362a40e0 < 3) {
    if (DAT_362a40e0 == 0) {
      return;
    }
  }
  else {
    DAT_362a40e0 = 2;
  }
  if ((int)param_2 < 8) {
    CTimer::GetHighPrecisionTimer(_pTimer);
    fVar1 = (float)((float10)CONCAT44((iStack_4 - *(int *)(&DAT_362bf914 + (int)param_2 * 8)) -
                                      (uint)(local_8 < *(uint *)(&DAT_362bf910 + (int)param_2 * 8)),
                                      local_8 - *(uint *)(&DAT_362bf910 + (int)param_2 * 8)) /
                   (float10)*(longlong *)_pTimer);
    if ((DAT_362a40e0 != 2) || (_DAT_362287b0 <= fVar1)) {
      *(uint *)(&DAT_362bf910 + (int)param_2 * 8) = local_8;
      *(int *)(&DAT_362bf914 + (int)param_2 * 8) = iStack_4;
      fVar2 = (float)FUN_36063720(0x362bf950);
      if (fVar2 != 0.0) {
        local_c = 0;
        if (0 < (int)fVar2) {
          iVar4 = (int)fVar2 * 0x1c;
          local_10 = 0;
          do {
            piVar6 = (int *)(local_10 + DAT_362bf954);
            if ((param_2 == *(float *)(local_10 + 0x14 + DAT_362bf954)) &&
               (piVar6[4] < DAT_362bf908 + -8)) {
              FUN_3607c5f0(*piVar6);
              piVar5 = (int *)(DAT_362bf954 + -0x1c + iVar4);
              for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
                *piVar6 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar6 = piVar6 + 1;
              }
              fVar2 = (float)((int)fVar2 + -1);
              iVar4 = iVar4 + -0x1c;
            }
            else {
              local_c = local_c + 1;
              local_10 = local_10 + 0x1c;
            }
          } while (local_c < (int)fVar2);
        }
        _DAT_362bf958 = fVar2;
        if (fVar1 <= _DAT_36223384) {
          if (0 < (int)fVar2) {
            FUN_36063d00(param_1,param_2,DAT_362bf954,fVar2);
          }
          DAT_362bf908 = DAT_362bf908 + 1;
        }
      }
    }
  }
  return;
}

