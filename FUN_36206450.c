
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_36206450(int param_1,int *param_2,int param_3,double *param_4,int param_5,uint *param_6,
            int *param_7,char param_8)

{
  double dVar1;
  char cVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  double *pdVar9;
  byte *pbVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  double *pdVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int *piVar20;
  uint *puVar21;
  bool bVar22;
  int local_60;
  int local_5c;
  uint local_58;
  double *local_54;
  double *local_50;
  uint *local_4c;
  uint *local_40;
  uint *local_3c;
  int local_38;
  uint local_34 [12];
  
  DAT_362afeac = 6 - (uint)(param_8 != '\0');
  if (DAT_363883f8 == 0) {
    DAT_363883f8 = 1;
    local_4c = (uint *)0x0;
    local_50 = (double *)&DAT_362afea8;
    do {
      bVar11 = (byte)*(undefined4 *)local_50;
      iVar4 = (1 << (bVar11 & 0x1f)) + -1;
      for (iVar18 = iVar4; -1 < iVar18; iVar18 = iVar18 + -1) {
        if (-1 < iVar4) {
          bVar12 = 8 - bVar11;
          uVar13 = iVar18 >> (bVar11 * '\x02' - 8 & 0x1f) | iVar18 << (bVar12 & 0x1f);
          iVar7 = iVar4;
          do {
            local_58 = 0;
            piVar20 = &DAT_362afeb4;
            uVar17 = iVar7 >> (bVar11 * '\x02' - 8 & 0x1f) | iVar7 << (bVar12 & 0x1f);
            do {
              iVar5 = ((int)local_4c +
                      ((int)(piVar20[1] * uVar17 + *piVar20 * uVar13 + piVar20[2]) / piVar20[3]) * 3
                      ) * 3 + local_58;
              if (((&DAT_36384420)[iVar5 * 3] == '\0') ||
                 (uVar14 = (int)((uint)(byte)(&DAT_36384422)[iVar5 * 3] -
                                (uint)(byte)(&DAT_36384421)[iVar5 * 3]) >> 0x1f,
                 uVar6 = uVar17 - uVar13, uVar15 = (int)uVar6 >> 0x1f,
                 (int)((uVar6 ^ uVar15) - uVar15) <
                 (int)(((uint)(byte)(&DAT_36384422)[iVar5 * 3] -
                        (uint)(byte)(&DAT_36384421)[iVar5 * 3] ^ uVar14) - uVar14))) {
                local_5c._0_1_ = (char)iVar18;
                local_60._0_1_ = (char)iVar7;
                (&DAT_36384420)[iVar5 * 3] = 1;
                (&DAT_36384421)[iVar5 * 3] = (char)local_5c << (bVar12 & 0x1f);
                (&DAT_36384422)[iVar5 * 3] = (char)local_60 << (bVar12 & 0x1f);
              }
              piVar20 = piVar20 + 4;
              local_58 = local_58 + 1;
            } while ((int)piVar20 < 0x362afee4);
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
      }
      local_50 = (double *)((int)local_50 + 4);
      local_4c = (uint *)((int)local_4c + 1);
    } while ((int)local_50 < 0x362afeb4);
  }
  local_60 = 0;
  if (*param_2 != 1 && -1 < *param_2 + -1) {
    local_40 = local_34 + 2;
    local_50 = &DAT_36388230;
    do {
      *(undefined4 *)local_50 = 0;
      *(undefined4 *)((int)local_50 + 4) = 0;
      local_5c = 0;
      iVar18 = param_5 - (int)param_4;
      local_54 = param_4;
      local_4c = local_40;
      do {
        floor((*local_54 * _DAT_3624cf88) / *(double *)(iVar18 + (int)local_54) + _DAT_3624cd88);
        uVar13 = ftol();
        if ((int)uVar13 < 0) {
          uVar13 = 0;
        }
        else if (0xff < (int)uVar13) {
          uVar13 = 0xff;
        }
        local_38 = 1;
        cVar2 = (&DAT_36384420)[(local_60 + (local_5c + uVar13 * 3) * 3) * 3];
        local_3c = local_34;
        pdVar16 = &DAT_36388158;
        do {
          if ((cVar2 == '\0') ||
             (local_58 = uVar13,
             _DAT_3624cda8 <
             ((*local_54 * _DAT_3624cf88) / *(double *)(iVar18 + (int)local_54) -
             (double)(int)uVar13) * (double)local_38)) {
            local_58 = local_38 + uVar13;
            if ((int)local_58 < 0) {
              local_58 = 0;
            }
            else if (0xff < (int)local_58) {
              local_58 = 0xff;
            }
            iVar4 = local_60 + (local_5c + local_58 * 3) * 3;
            pcVar8 = &DAT_36384420 + iVar4 * 3;
            if ((&DAT_36384420)[iVar4 * 3] == '\0') {
              do {
                pcVar8 = pcVar8 + local_38 * 0x1b;
                local_58 = local_58 + local_38;
              } while (*pcVar8 == '\0');
            }
          }
          uVar17 = local_58;
          *(undefined4 *)pdVar16 = 0;
          *(undefined4 *)((int)pdVar16 + 4) = 0;
          if (0 < param_3) {
            dVar1 = (double)(int)local_58;
            local_58 = param_3;
            pdVar9 = local_54;
            do {
              local_58 = local_58 + -1;
              dVar3 = dVar1 * *(double *)(iVar18 + (int)local_54) - *pdVar9 * _DAT_3624cf88;
              *pdVar16 = dVar3 * dVar3 + *pdVar16;
              pdVar9 = pdVar9 + 3;
            } while (local_58 != 0);
          }
          pdVar16 = pdVar16 + 1;
          local_38 = -local_38;
          *local_3c = uVar17;
          local_3c = local_3c + 1;
        } while ((int)pdVar16 < 0x36388168);
        if (_DAT_36388160 <= DAT_36388158) {
          bVar22 = DAT_36388158 <= _DAT_36388160;
          *local_50 = _DAT_36388160 + *local_50;
          if (bVar22) {
            uVar17 = local_34[0];
            if ((uVar13 & 1) == 0) {
              uVar17 = local_34[1];
            }
            *local_4c = uVar17;
          }
          else {
            *local_4c = local_34[1];
          }
        }
        else {
          dVar1 = *local_50;
          *local_4c = local_34[0];
          *local_50 = DAT_36388158 + dVar1;
        }
        local_5c = local_5c + 1;
        local_54 = local_54 + 1;
        local_4c = local_4c + 3;
      } while (local_5c < 3);
      local_60 = local_60 + 1;
      local_40 = local_40 + 1;
      local_50 = local_50 + 1;
    } while (local_60 < *param_2 + -1);
  }
  if (*param_2 == 4) {
    if ((*(char *)(param_1 + 0x1a4) != '\0') || (DAT_36388230 <= _DAT_36388238)) {
      if (DAT_36388230 <= _DAT_36388240) {
        local_60 = 0;
        goto LAB_3620690e;
      }
    }
    else if (_DAT_36388238 <= _DAT_36388240) goto LAB_36206906;
    local_60 = 2;
  }
  else {
    if ((*param_2 != 3) || (local_60 = 0, DAT_36388230 <= _DAT_36388238)) goto LAB_3620690e;
LAB_36206906:
    local_60 = 1;
  }
LAB_3620690e:
  local_40 = local_34 + local_60 + 2;
  local_5c = 0;
  puVar21 = param_6;
  do {
    iVar18 = 2;
    pbVar10 = &DAT_36384421 + (local_60 + (local_5c + *local_40 * 3) * 3) * 3;
    puVar19 = puVar21;
    do {
      bVar11 = *pbVar10;
      pbVar10 = pbVar10 + 1;
      iVar18 = iVar18 + -1;
      *puVar19 = (uint)(bVar11 >>
                       (8U - *(char *)(((int)&DAT_362afea8 - (int)param_6) + (int)puVar21) & 0x1f));
      puVar19 = puVar19 + 3;
    } while (iVar18 != 0);
    local_5c = local_5c + 1;
    local_40 = local_40 + 3;
    puVar21 = puVar21 + 1;
  } while (local_5c < 3);
  if (param_8 != '\0') {
    param_6[1] = param_6[1] << 1;
    param_6[4] = param_6[4] << 1;
  }
  if (0 < param_3) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      *param_7 = local_60 + 1;
      param_7 = param_7 + 1;
    }
  }
  if (local_60 != 0) {
    *param_2 = local_60 + 2;
  }
  return (float10)(&DAT_36388230)[local_60];
}

