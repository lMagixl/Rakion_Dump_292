
float10 __cdecl
FUN_362069d0(int *param_1,int param_2,int param_3,double *param_4,double *param_5,double *param_6,
            double *param_7,uint *param_8,int *param_9,char param_10)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  float10 fVar10;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0 [14];
  int local_88 [33];
  
  local_c0[0] = (uint)(*param_1 == 4);
  fVar10 = FUN_36206bd0(local_c0[0] + 3,param_3,param_4,param_5,param_6,(int)param_7,
                        (int *)(local_c0 + 2),local_88,param_10);
  DAT_36387d50 = (double)fVar10;
  iVar5 = 1;
  local_c4 = 1;
  *param_1 = *param_1 + -2;
  local_d0 = 0;
  if (0 < param_2 + -2) {
    local_cc = 0;
    do {
      local_c8 = 0;
      if (0 < *(int *)(&DAT_362afee4 + (local_cc + *param_1) * 4)) {
        do {
          iVar5 = 0;
          pdVar3 = (double *)&DAT_36387da8;
          do {
            iVar6 = 3;
            pdVar2 = param_7;
            pdVar4 = pdVar3;
            do {
              pdVar3 = pdVar4 + 1;
              iVar1 = (iVar5 + (local_c8 + (local_d0 * 2 + *param_1) * 6) * 2) * 0x10;
              iVar6 = iVar6 + -1;
              *pdVar4 = *(double *)(&DAT_362aff00 + iVar1) * *pdVar2 +
                        *(double *)(&DAT_362aff08 + iVar1) * pdVar2[3];
              pdVar2 = pdVar2 + 1;
              pdVar4 = pdVar3;
            } while (iVar6 != 0);
            iVar5 = iVar5 + 1;
          } while ((int)pdVar3 < 0x36387dd8);
          local_c0[local_c4] = local_d0;
          fVar10 = FUN_36206bd0(local_d0 + 3,param_3,param_4,param_5,param_6,0x36387da8,
                                (int *)(local_c0 + local_c4 * 6 + 2),local_88 + local_c4 * 0x10,
                                param_10);
          (&DAT_36387d50)[local_c4] = (double)fVar10;
          if (fVar10 < (float10)(double)(&DAT_36387d58)[-local_c4]) {
            local_c4 = 1 - local_c4;
          }
          local_c8 = local_c8 + 1;
          iVar5 = local_c4;
        } while (local_c8 < *(int *)(&DAT_362afee4 + (local_cc + *param_1) * 4));
      }
      local_d0 = local_d0 + 1;
      local_cc = local_cc + 3;
    } while ((int)local_d0 < param_2 + -2);
  }
  iVar5 = 1 - iVar5;
  if (0 < param_3) {
    piVar7 = local_88 + iVar5 * 0x10;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_9 = *piVar7;
      piVar7 = piVar7 + 1;
      param_9 = param_9 + 1;
    }
  }
  puVar8 = local_c0 + iVar5 * 6 + 2;
  puVar9 = param_8;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  if (param_10 != '\0') {
    param_8[1] = local_c0[iVar5 * 6 + 3] << 1;
    param_8[4] = local_c0[iVar5 * 6 + 6] << 1;
  }
  *param_1 = local_c0[iVar5] + 3;
  return (float10)(&DAT_36387d50)[iVar5];
}

