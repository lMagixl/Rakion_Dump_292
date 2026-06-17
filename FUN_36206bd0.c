
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl
FUN_36206bd0(int param_1,int param_2,double *param_3,double *param_4,double *param_5,int param_6,
            int *param_7,int *param_8,char param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  double *pdVar8;
  double *pdVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  double *pdVar13;
  double *pdVar14;
  undefined4 *puVar15;
  double *pdVar16;
  int iVar17;
  double *pdVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  double *local_f8;
  int local_f4;
  int *local_f0;
  int *local_e8;
  double *local_e4;
  double *local_dc;
  int local_c8 [49];
  
  DAT_362afeac = 6 - (uint)(param_9 != '\0');
  piVar10 = local_c8 + 4;
  local_f8 = (double *)&DAT_362afea8;
  pdVar13 = param_5;
  do {
    iVar17 = 1 << (8U - (char)*(undefined4 *)local_f8 & 0x1f);
    local_f0 = (int *)0x2;
    local_e8 = piVar10 + 4;
    local_dc = (double *)((int)pdVar13 + (param_6 - (int)param_5));
    piVar7 = piVar10 + 8;
    local_e4 = (double *)piVar10;
    do {
      if (*pdVar13 == _DAT_3624cda8) {
        _DAT_36387af8 = 0.0;
      }
      else {
        _DAT_36387af8 = (*local_dc / *pdVar13) * _DAT_3624cf88;
      }
      floor(_DAT_36387af8);
      uVar5 = ftol();
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (0xff < (int)uVar5) {
        uVar5 = 0x100U - iVar17;
      }
      uVar5 = uVar5 & 0x100U - iVar17;
      bVar11 = (byte)*(undefined4 *)local_f8;
      if ((_DAT_36387af8 < (double)(int)(((int)uVar5 >> (bVar11 & 0x1f)) + uVar5)) &&
         (-1 < (int)(uVar5 - iVar17))) {
        uVar5 = uVar5 - iVar17;
      }
      iVar6 = ((int)uVar5 >> (bVar11 & 0x1f)) + uVar5;
      *(int *)local_e4 = iVar6;
      piVar7[-0xc] = iVar6;
      if ((int)(uVar5 + iVar17) < 0x100) {
        uVar5 = uVar5 + iVar17;
      }
      local_dc = local_dc + 3;
      iVar6 = uVar5 + ((int)uVar5 >> (bVar11 & 0x1f));
      *piVar7 = iVar6;
      *local_e8 = iVar6;
      local_e8 = local_e8 + -3;
      local_e4 = (double *)((int)local_e4 + 0x14);
      local_f0 = (int *)((int)local_f0 + -1);
      piVar7 = piVar7 + 1;
    } while (local_f0 != (int *)0x0);
    local_f8 = (double *)((int)local_f8 + 4);
    piVar10 = piVar10 + 0x10;
    pdVar13 = pdVar13 + 1;
  } while ((int)local_f8 < 0x362afeb4);
  if (param_1 == 3) {
    piVar10 = local_c8;
    local_f8 = (double *)&DAT_36386228;
    pdVar18 = (double *)&DAT_36383da0;
    pdVar13 = param_3;
    do {
      local_f0 = (int *)0x4;
      do {
        local_f4 = 3;
        piVar10[2] = (piVar10[1] + *piVar10) / 2;
        piVar7 = piVar10;
        pdVar8 = pdVar18;
        do {
          iVar17 = *piVar7;
          piVar7 = piVar7 + 1;
          local_f4 = local_f4 + -1;
          *pdVar8 = (double)iVar17 * *(double *)(((int)param_5 - (int)param_3) + (int)pdVar13) *
                    _DAT_3624cf40;
          pdVar8 = pdVar8 + 1;
        } while (local_f4 != 0);
        pdVar8 = local_f8;
        pdVar9 = pdVar13;
        pdVar14 = param_4;
        iVar17 = param_2;
        if (0 < param_2) {
          do {
            iVar17 = iVar17 + -1;
            *pdVar8 = (*pdVar9 - *pdVar18) * *pdVar14 * (*pdVar9 - *pdVar18);
            pdVar8[1] = (*pdVar9 - pdVar18[1]) * *pdVar14 * (*pdVar9 - pdVar18[1]);
            pdVar8[2] = (*pdVar9 - pdVar18[2]) * (*pdVar9 - pdVar18[2]) * *pdVar14;
            pdVar8 = pdVar8 + 3;
            pdVar9 = pdVar9 + 3;
            pdVar14 = pdVar14 + 1;
          } while (iVar17 != 0);
        }
        piVar10 = piVar10 + 4;
        local_f8 = local_f8 + 0x40;
        pdVar18 = pdVar18 + 4;
        local_f0 = (int *)((int)local_f0 + -1);
      } while (local_f0 != (int *)0x0);
      pdVar13 = pdVar13 + 1;
    } while ((int)pdVar18 < 0x36383f20);
    local_f8 = (double *)0xffffffff;
    puVar15 = (undefined4 *)0x0;
    _DAT_36386000 =
         (param_5[2] * param_5[2] + param_5[1] * param_5[1] + *param_5 * *param_5) * _DAT_3624cf98;
    do {
      uVar12 = (uint)puVar15 & 3;
      uVar5 = (int)puVar15 >> 2 & 3;
      iVar17 = (int)puVar15 >> 4;
      dVar1 = _DAT_3624cda8;
      switch(param_2) {
      case 0x10:
        dVar2 = (double)(&DAT_36387390)[iVar17 * 0x40] + (double)(&DAT_36386b90)[uVar5 * 0x40] +
                (double)(&DAT_36386390)[uVar12 * 0x40];
        dVar1 = (double)(&DAT_36387398)[iVar17 * 0x40] + (double)(&DAT_36386b98)[uVar5 * 0x40] +
                (double)(&DAT_36386398)[uVar12 * 0x40];
        dVar1 = (dVar1 + dVar2) - ABS(dVar2 - dVar1);
        dVar2 = (double)(&DAT_363873a0)[iVar17 * 0x40] + (double)(&DAT_36386ba0)[uVar5 * 0x40] +
                (double)(&DAT_363863a0)[uVar12 * 0x40];
        dVar2 = dVar2 + dVar2;
        dVar1 = (dVar1 + dVar2) - ABS(dVar2 - dVar1);
      case 0xf:
        dVar3 = (double)(&DAT_36387378)[iVar17 * 0x40] + (double)(&DAT_36386b78)[uVar5 * 0x40] +
                (double)(&DAT_36386378)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387380)[iVar17 * 0x40] + (double)(&DAT_36386b80)[uVar5 * 0x40] +
                (double)(&DAT_36386380)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387388)[iVar17 * 0x40] + (double)(&DAT_36386b88)[uVar5 * 0x40] +
                (double)(&DAT_36386388)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xe:
        dVar3 = (double)(&DAT_36387360)[iVar17 * 0x40] + (double)(&DAT_36386b60)[uVar5 * 0x40] +
                (double)(&DAT_36386360)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387368)[iVar17 * 0x40] + (double)(&DAT_36386b68)[uVar5 * 0x40] +
                (double)(&DAT_36386368)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387370)[iVar17 * 0x40] + (double)(&DAT_36386b70)[uVar5 * 0x40] +
                (double)(&DAT_36386370)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xd:
        dVar3 = (double)(&DAT_36387348)[iVar17 * 0x40] + (double)(&DAT_36386b48)[uVar5 * 0x40] +
                (double)(&DAT_36386348)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387350)[iVar17 * 0x40] + (double)(&DAT_36386b50)[uVar5 * 0x40] +
                (double)(&DAT_36386350)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387358)[iVar17 * 0x40] + (double)(&DAT_36386b58)[uVar5 * 0x40] +
                (double)(&DAT_36386358)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xc:
        dVar3 = (double)(&DAT_36387330)[iVar17 * 0x40] + (double)(&DAT_36386b30)[uVar5 * 0x40] +
                (double)(&DAT_36386330)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387338)[iVar17 * 0x40] + (double)(&DAT_36386b38)[uVar5 * 0x40] +
                (double)(&DAT_36386338)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387340)[iVar17 * 0x40] + (double)(&DAT_36386b40)[uVar5 * 0x40] +
                (double)(&DAT_36386340)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xb:
        dVar3 = (double)(&DAT_36387318)[iVar17 * 0x40] + (double)(&DAT_36386b18)[uVar5 * 0x40] +
                (double)(&DAT_36386318)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387320)[iVar17 * 0x40] + (double)(&DAT_36386b20)[uVar5 * 0x40] +
                (double)(&DAT_36386320)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387328)[iVar17 * 0x40] + (double)(&DAT_36386b28)[uVar5 * 0x40] +
                (double)(&DAT_36386328)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 10:
        dVar3 = (double)(&DAT_36387300)[iVar17 * 0x40] + (double)(&DAT_36386b00)[uVar5 * 0x40] +
                (double)(&DAT_36386300)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387308)[iVar17 * 0x40] + (double)(&DAT_36386b08)[uVar5 * 0x40] +
                (double)(&DAT_36386308)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387310)[iVar17 * 0x40] + (double)(&DAT_36386b10)[uVar5 * 0x40] +
                (double)(&DAT_36386310)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 9:
        dVar3 = (double)(&DAT_363872e8)[iVar17 * 0x40] + (double)(&DAT_36386ae8)[uVar5 * 0x40] +
                (double)(&DAT_363862e8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872f0)[iVar17 * 0x40] + (double)(&DAT_36386af0)[uVar5 * 0x40] +
                (double)(&DAT_363862f0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_363872f8)[iVar17 * 0x40] + (double)(&DAT_36386af8)[uVar5 * 0x40] +
                (double)(&DAT_363862f8)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 8:
        dVar3 = (double)(&DAT_363872d0)[iVar17 * 0x40] + (double)(&DAT_36386ad0)[uVar5 * 0x40] +
                (double)(&DAT_363862d0)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872d8)[iVar17 * 0x40] + (double)(&DAT_36386ad8)[uVar5 * 0x40] +
                (double)(&DAT_363862d8)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_363872e0)[iVar17 * 0x40] + (double)(&DAT_36386ae0)[uVar5 * 0x40] +
                (double)(&DAT_363862e0)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 7:
        dVar3 = (double)(&DAT_363872b8)[iVar17 * 0x40] + (double)(&DAT_36386ab8)[uVar5 * 0x40] +
                (double)(&DAT_363862b8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872c0)[iVar17 * 0x40] + (double)(&DAT_36386ac0)[uVar5 * 0x40] +
                (double)(&DAT_363862c0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_363872c8)[iVar17 * 0x40] + (double)(&DAT_36386ac8)[uVar5 * 0x40] +
                (double)(&DAT_363862c8)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 6:
        dVar3 = (double)(&DAT_363872a0)[iVar17 * 0x40] + (double)(&DAT_36386aa0)[uVar5 * 0x40] +
                (double)(&DAT_363862a0)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872a8)[iVar17 * 0x40] + (double)(&DAT_36386aa8)[uVar5 * 0x40] +
                (double)(&DAT_363862a8)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_363872b0)[iVar17 * 0x40] + (double)(&DAT_36386ab0)[uVar5 * 0x40] +
                (double)(&DAT_363862b0)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 5:
        dVar3 = (double)(&DAT_36387288)[iVar17 * 0x40] + (double)(&DAT_36386a88)[uVar5 * 0x40] +
                (double)(&DAT_36386288)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387290)[iVar17 * 0x40] + (double)(&DAT_36386a90)[uVar5 * 0x40] +
                (double)(&DAT_36386290)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387298)[iVar17 * 0x40] + (double)(&DAT_36386a98)[uVar5 * 0x40] +
                (double)(&DAT_36386298)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 4:
        dVar3 = (double)(&DAT_36387270)[iVar17 * 0x40] + (double)(&DAT_36386a70)[uVar5 * 0x40] +
                (double)(&DAT_36386270)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387278)[iVar17 * 0x40] + (double)(&DAT_36386a78)[uVar5 * 0x40] +
                (double)(&DAT_36386278)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387280)[iVar17 * 0x40] + (double)(&DAT_36386a80)[uVar5 * 0x40] +
                (double)(&DAT_36386280)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 3:
        dVar3 = (double)(&DAT_36387258)[iVar17 * 0x40] + (double)(&DAT_36386a58)[uVar5 * 0x40] +
                (double)(&DAT_36386258)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387260)[iVar17 * 0x40] + (double)(&DAT_36386a60)[uVar5 * 0x40] +
                (double)(&DAT_36386260)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387268)[iVar17 * 0x40] + (double)(&DAT_36386a68)[uVar5 * 0x40] +
                (double)(&DAT_36386268)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 2:
        dVar3 = (double)(&DAT_36387240)[iVar17 * 0x40] + (double)(&DAT_36386a40)[uVar5 * 0x40] +
                (double)(&DAT_36386240)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387248)[iVar17 * 0x40] + (double)(&DAT_36386a48)[uVar5 * 0x40] +
                (double)(&DAT_36386248)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387250)[iVar17 * 0x40] + (double)(&DAT_36386a50)[uVar5 * 0x40] +
                (double)(&DAT_36386250)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 1:
        dVar3 = (double)(&DAT_36387228)[iVar17 * 0x40] + (double)(&DAT_36386a28)[uVar5 * 0x40] +
                (double)(&DAT_36386228)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387230)[iVar17 * 0x40] + (double)(&DAT_36386a30)[uVar5 * 0x40] +
                (double)(&DAT_36386230)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar3 = (double)(&DAT_36387238)[iVar17 * 0x40] + (double)(&DAT_36386a38)[uVar5 * 0x40] +
                (double)(&DAT_36386238)[uVar12 * 0x40];
        dVar3 = dVar3 + dVar3;
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      }
      if (dVar1 < _DAT_36386000) {
        local_f8 = (double *)puVar15;
        _DAT_36386000 = dVar1;
      }
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    } while ((int)puVar15 < 0x40);
  }
  else if (param_1 == 4) {
    piVar10 = local_c8 + 1;
    local_f8 = (double *)&DAT_36386228;
    pdVar18 = (double *)&DAT_36383da0;
    pdVar13 = param_3;
    do {
      local_f0 = (int *)0x4;
      pdVar8 = pdVar18;
      do {
        piVar7 = piVar10 + -1;
        local_f4 = 4;
        piVar10[1] = (*piVar10 + 1 + piVar10[-1] * 2) / 3;
        piVar10[2] = (*piVar7 + 1 + *piVar10 * 2) / 3;
        pdVar9 = pdVar8;
        do {
          iVar17 = *piVar7;
          piVar7 = piVar7 + 1;
          pdVar18 = pdVar9 + 1;
          local_f4 = local_f4 + -1;
          *pdVar9 = (double)iVar17 * *(double *)(((int)param_5 - (int)param_3) + (int)pdVar13) *
                    _DAT_3624cf40;
          pdVar9 = pdVar18;
        } while (local_f4 != 0);
        pdVar9 = local_f8;
        pdVar14 = pdVar13;
        iVar17 = param_2;
        pdVar16 = param_4;
        if (0 < param_2) {
          do {
            iVar17 = iVar17 + -1;
            *pdVar9 = (*pdVar14 - *pdVar8) * (*pdVar14 - *pdVar8) * *pdVar16;
            pdVar9[1] = (*pdVar14 - pdVar8[1]) * (*pdVar14 - pdVar8[1]) * *pdVar16;
            pdVar9[2] = (*pdVar14 - pdVar8[2]) * (*pdVar14 - pdVar8[2]) * *pdVar16;
            pdVar9[3] = (*pdVar14 - pdVar8[3]) * (*pdVar14 - pdVar8[3]) * *pdVar16;
            pdVar9 = pdVar9 + 4;
            pdVar14 = pdVar14 + 3;
            pdVar16 = pdVar16 + 1;
          } while (iVar17 != 0);
        }
        piVar10 = piVar10 + 4;
        local_f8 = local_f8 + 0x40;
        local_f0 = (int *)((int)local_f0 + -1);
        pdVar8 = pdVar18;
      } while (local_f0 != (int *)0x0);
      pdVar13 = pdVar13 + 1;
    } while ((int)pdVar18 < 0x36383f20);
    local_f8 = (double *)0xffffffff;
    puVar15 = (undefined4 *)0x0;
    _DAT_36386000 =
         (param_5[2] * param_5[2] + param_5[1] * param_5[1] + *param_5 * *param_5) * _DAT_3624cf98;
    do {
      uVar12 = (uint)puVar15 & 3;
      uVar5 = (int)puVar15 >> 2 & 3;
      iVar17 = (int)puVar15 >> 4;
      dVar1 = _DAT_3624cda8;
      switch(param_2) {
      case 0x10:
        dVar2 = (double)(&DAT_36387408)[iVar17 * 0x40] + (double)(&DAT_36386c08)[uVar5 * 0x40] +
                (double)(&DAT_36386408)[uVar12 * 0x40];
        dVar1 = (double)(&DAT_36387410)[iVar17 * 0x40] + (double)(&DAT_36386c10)[uVar5 * 0x40] +
                (double)(&DAT_36386410)[uVar12 * 0x40];
        dVar1 = (dVar1 + dVar2) - ABS(dVar2 - dVar1);
        dVar3 = (double)(&DAT_36387418)[iVar17 * 0x40] + (double)(&DAT_36386c18)[uVar5 * 0x40] +
                (double)(&DAT_36386418)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387420)[iVar17 * 0x40] + (double)(&DAT_36386c20)[uVar5 * 0x40] +
                (double)(&DAT_36386420)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar1 = (dVar1 + dVar2) - ABS(dVar2 - dVar1);
      case 0xf:
        dVar3 = (double)(&DAT_363873e8)[iVar17 * 0x40] + (double)(&DAT_36386be8)[uVar5 * 0x40] +
                (double)(&DAT_363863e8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363873f0)[iVar17 * 0x40] + (double)(&DAT_36386bf0)[uVar5 * 0x40] +
                (double)(&DAT_363863f0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363873f8)[iVar17 * 0x40] + (double)(&DAT_36386bf8)[uVar5 * 0x40] +
                (double)(&DAT_363863f8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387400)[iVar17 * 0x40] + (double)(&DAT_36386c00)[uVar5 * 0x40] +
                (double)(&DAT_36386400)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xe:
        dVar3 = (double)(&DAT_363873c8)[iVar17 * 0x40] + (double)(&DAT_36386bc8)[uVar5 * 0x40] +
                (double)(&DAT_363863c8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363873d0)[iVar17 * 0x40] + (double)(&DAT_36386bd0)[uVar5 * 0x40] +
                (double)(&DAT_363863d0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363873d8)[iVar17 * 0x40] + (double)(&DAT_36386bd8)[uVar5 * 0x40] +
                (double)(&DAT_363863d8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363873e0)[iVar17 * 0x40] + (double)(&DAT_36386be0)[uVar5 * 0x40] +
                (double)(&DAT_363863e0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xd:
        dVar3 = (double)(&DAT_363873a8)[iVar17 * 0x40] + (double)(&DAT_36386ba8)[uVar5 * 0x40] +
                (double)(&DAT_363863a8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363873b0)[iVar17 * 0x40] + (double)(&DAT_36386bb0)[uVar5 * 0x40] +
                (double)(&DAT_363863b0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363873b8)[iVar17 * 0x40] + (double)(&DAT_36386bb8)[uVar5 * 0x40] +
                (double)(&DAT_363863b8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363873c0)[iVar17 * 0x40] + (double)(&DAT_36386bc0)[uVar5 * 0x40] +
                (double)(&DAT_363863c0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xc:
        dVar3 = (double)(&DAT_36387388)[iVar17 * 0x40] + (double)(&DAT_36386b88)[uVar5 * 0x40] +
                (double)(&DAT_36386388)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387390)[iVar17 * 0x40] + (double)(&DAT_36386b90)[uVar5 * 0x40] +
                (double)(&DAT_36386390)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387398)[iVar17 * 0x40] + (double)(&DAT_36386b98)[uVar5 * 0x40] +
                (double)(&DAT_36386398)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363873a0)[iVar17 * 0x40] + (double)(&DAT_36386ba0)[uVar5 * 0x40] +
                (double)(&DAT_363863a0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 0xb:
        dVar3 = (double)(&DAT_36387368)[iVar17 * 0x40] + (double)(&DAT_36386b68)[uVar5 * 0x40] +
                (double)(&DAT_36386368)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387370)[iVar17 * 0x40] + (double)(&DAT_36386b70)[uVar5 * 0x40] +
                (double)(&DAT_36386370)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387378)[iVar17 * 0x40] + (double)(&DAT_36386b78)[uVar5 * 0x40] +
                (double)(&DAT_36386378)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387380)[iVar17 * 0x40] + (double)(&DAT_36386b80)[uVar5 * 0x40] +
                (double)(&DAT_36386380)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 10:
        dVar3 = (double)(&DAT_36387348)[iVar17 * 0x40] + (double)(&DAT_36386b48)[uVar5 * 0x40] +
                (double)(&DAT_36386348)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387350)[iVar17 * 0x40] + (double)(&DAT_36386b50)[uVar5 * 0x40] +
                (double)(&DAT_36386350)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387358)[iVar17 * 0x40] + (double)(&DAT_36386b58)[uVar5 * 0x40] +
                (double)(&DAT_36386358)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387360)[iVar17 * 0x40] + (double)(&DAT_36386b60)[uVar5 * 0x40] +
                (double)(&DAT_36386360)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 9:
        dVar3 = (double)(&DAT_36387328)[iVar17 * 0x40] + (double)(&DAT_36386b28)[uVar5 * 0x40] +
                (double)(&DAT_36386328)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387330)[iVar17 * 0x40] + (double)(&DAT_36386b30)[uVar5 * 0x40] +
                (double)(&DAT_36386330)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387338)[iVar17 * 0x40] + (double)(&DAT_36386b38)[uVar5 * 0x40] +
                (double)(&DAT_36386338)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387340)[iVar17 * 0x40] + (double)(&DAT_36386b40)[uVar5 * 0x40] +
                (double)(&DAT_36386340)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 8:
        dVar3 = (double)(&DAT_36387308)[iVar17 * 0x40] + (double)(&DAT_36386b08)[uVar5 * 0x40] +
                (double)(&DAT_36386308)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387310)[iVar17 * 0x40] + (double)(&DAT_36386b10)[uVar5 * 0x40] +
                (double)(&DAT_36386310)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387318)[iVar17 * 0x40] + (double)(&DAT_36386b18)[uVar5 * 0x40] +
                (double)(&DAT_36386318)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387320)[iVar17 * 0x40] + (double)(&DAT_36386b20)[uVar5 * 0x40] +
                (double)(&DAT_36386320)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 7:
        dVar3 = (double)(&DAT_363872e8)[iVar17 * 0x40] + (double)(&DAT_36386ae8)[uVar5 * 0x40] +
                (double)(&DAT_363862e8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872f0)[iVar17 * 0x40] + (double)(&DAT_36386af0)[uVar5 * 0x40] +
                (double)(&DAT_363862f0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363872f8)[iVar17 * 0x40] + (double)(&DAT_36386af8)[uVar5 * 0x40] +
                (double)(&DAT_363862f8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387300)[iVar17 * 0x40] + (double)(&DAT_36386b00)[uVar5 * 0x40] +
                (double)(&DAT_36386300)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 6:
        dVar3 = (double)(&DAT_363872c8)[iVar17 * 0x40] + (double)(&DAT_36386ac8)[uVar5 * 0x40] +
                (double)(&DAT_363862c8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872d0)[iVar17 * 0x40] + (double)(&DAT_36386ad0)[uVar5 * 0x40] +
                (double)(&DAT_363862d0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363872d8)[iVar17 * 0x40] + (double)(&DAT_36386ad8)[uVar5 * 0x40] +
                (double)(&DAT_363862d8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363872e0)[iVar17 * 0x40] + (double)(&DAT_36386ae0)[uVar5 * 0x40] +
                (double)(&DAT_363862e0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 5:
        dVar3 = (double)(&DAT_363872a8)[iVar17 * 0x40] + (double)(&DAT_36386aa8)[uVar5 * 0x40] +
                (double)(&DAT_363862a8)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_363872b0)[iVar17 * 0x40] + (double)(&DAT_36386ab0)[uVar5 * 0x40] +
                (double)(&DAT_363862b0)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_363872b8)[iVar17 * 0x40] + (double)(&DAT_36386ab8)[uVar5 * 0x40] +
                (double)(&DAT_363862b8)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363872c0)[iVar17 * 0x40] + (double)(&DAT_36386ac0)[uVar5 * 0x40] +
                (double)(&DAT_363862c0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 4:
        dVar3 = (double)(&DAT_36387288)[iVar17 * 0x40] + (double)(&DAT_36386a88)[uVar5 * 0x40] +
                (double)(&DAT_36386288)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387290)[iVar17 * 0x40] + (double)(&DAT_36386a90)[uVar5 * 0x40] +
                (double)(&DAT_36386290)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387298)[iVar17 * 0x40] + (double)(&DAT_36386a98)[uVar5 * 0x40] +
                (double)(&DAT_36386298)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_363872a0)[iVar17 * 0x40] + (double)(&DAT_36386aa0)[uVar5 * 0x40] +
                (double)(&DAT_363862a0)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 3:
        dVar3 = (double)(&DAT_36387268)[iVar17 * 0x40] + (double)(&DAT_36386a68)[uVar5 * 0x40] +
                (double)(&DAT_36386268)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387270)[iVar17 * 0x40] + (double)(&DAT_36386a70)[uVar5 * 0x40] +
                (double)(&DAT_36386270)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387278)[iVar17 * 0x40] + (double)(&DAT_36386a78)[uVar5 * 0x40] +
                (double)(&DAT_36386278)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387280)[iVar17 * 0x40] + (double)(&DAT_36386a80)[uVar5 * 0x40] +
                (double)(&DAT_36386280)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 2:
        dVar3 = (double)(&DAT_36387248)[iVar17 * 0x40] + (double)(&DAT_36386a48)[uVar5 * 0x40] +
                (double)(&DAT_36386248)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387250)[iVar17 * 0x40] + (double)(&DAT_36386a50)[uVar5 * 0x40] +
                (double)(&DAT_36386250)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387258)[iVar17 * 0x40] + (double)(&DAT_36386a58)[uVar5 * 0x40] +
                (double)(&DAT_36386258)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387260)[iVar17 * 0x40] + (double)(&DAT_36386a60)[uVar5 * 0x40] +
                (double)(&DAT_36386260)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      case 1:
        dVar3 = (double)(&DAT_36387228)[iVar17 * 0x40] + (double)(&DAT_36386a28)[uVar5 * 0x40] +
                (double)(&DAT_36386228)[uVar12 * 0x40];
        dVar2 = (double)(&DAT_36387230)[iVar17 * 0x40] + (double)(&DAT_36386a30)[uVar5 * 0x40] +
                (double)(&DAT_36386230)[uVar12 * 0x40];
        dVar2 = (dVar2 + dVar3) - ABS(dVar3 - dVar2);
        dVar4 = (double)(&DAT_36387238)[iVar17 * 0x40] + (double)(&DAT_36386a38)[uVar5 * 0x40] +
                (double)(&DAT_36386238)[uVar12 * 0x40];
        dVar3 = (double)(&DAT_36387240)[iVar17 * 0x40] + (double)(&DAT_36386a40)[uVar5 * 0x40] +
                (double)(&DAT_36386240)[uVar12 * 0x40];
        dVar3 = (dVar3 + dVar4) - ABS(dVar4 - dVar3);
        dVar1 = ((dVar2 + dVar3) - ABS(dVar3 - dVar2)) + dVar1;
      }
      if (dVar1 < _DAT_36386000) {
        local_f8 = (double *)puVar15;
        _DAT_36386000 = dVar1;
      }
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    } while ((int)puVar15 < 0x40);
  }
  pdVar13 = (double *)(&DAT_36383e20 + ((int)local_f8 >> 2 & 3U) * 4);
  iVar17 = (int)&DAT_362afea8 - (int)param_7;
  local_f4 = 0;
  do {
    iVar6 = 2;
    piVar10 = local_c8 +
              (((int)local_f8 >> ((char)local_f4 * '\x02' & 0x1fU) & 3U) + local_f4 * 4) * 4;
    piVar7 = param_7;
    do {
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar10 >> (8U - (char)*(undefined4 *)(iVar17 + (int)param_7) & 0x1f);
      piVar10 = piVar10 + 1;
      piVar7 = piVar7 + 3;
    } while (iVar6 != 0);
    param_7 = param_7 + 1;
    local_f4 = local_f4 + 1;
  } while (local_f4 < 3);
  fVar19 = (float10)_DAT_3624cda8;
  if (0 < param_2) {
    local_f0 = param_8;
    local_e4 = param_4;
    local_e8 = (int *)param_2;
    pdVar18 = param_3 + 1;
    do {
      iVar17 = 0;
      local_f4 = -1;
      fVar22 = (float10)param_5[2] * (float10)param_5[2] +
               (float10)param_5[1] * (float10)param_5[1] + (float10)*param_5 * (float10)*param_5;
      fVar22 = fVar22 + fVar22;
      if (0 < param_1) {
        pdVar8 = pdVar13;
        do {
          fVar20 = (float10)pdVar18[1] -
                   (float10)*(double *)
                             ((int)&DAT_36383ea0 + (((int)local_f8 >> 4) * 0x20 - (int)pdVar13) +
                             (int)pdVar8);
          fVar21 = (float10)pdVar18[-1] -
                   (float10)*(double *)
                             ((int)&DAT_36383da0 + (((uint)local_f8 & 3) * 0x20 - (int)pdVar13) +
                             (int)pdVar8);
          fVar20 = (((float10)*pdVar18 - (float10)*pdVar8) * ((float10)*pdVar18 - (float10)*pdVar8)
                   + fVar20 * fVar20 + fVar21 * fVar21) * (float10)*local_e4;
          if (fVar20 < fVar22) {
            fVar22 = (float10)(double)fVar20;
            local_f4 = iVar17;
          }
          iVar17 = iVar17 + 1;
          pdVar8 = pdVar8 + 1;
        } while (iVar17 < param_1);
      }
      pdVar18 = pdVar18 + 3;
      *local_f0 = local_f4;
      local_f0 = local_f0 + 1;
      fVar19 = fVar19 + fVar22;
      local_e4 = local_e4 + 1;
      local_e8 = (int *)((int)local_e8 + -1);
    } while (local_e8 != (int *)0x0);
  }
  return fVar19;
}

