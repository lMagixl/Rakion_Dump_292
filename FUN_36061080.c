
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_36061080(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  short sVar15;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar7 = DAT_362a2ac4;
  iVar14 = DAT_362a2ac4 * DAT_362a2ac0;
  iVar12 = DAT_362bf8cc + iVar14;
  DAT_362bf8cc = iVar12;
  iVar6 = FUN_36061f60((undefined4 *)&DAT_362bf8c4);
  if (iVar6 < iVar12) {
    iVar7 = FUN_36061f60((undefined4 *)&DAT_362bf8c4);
    FUN_360621d0(&DAT_362bf8c4,iVar7 + ((iVar14 + -1) / DAT_362bf8d0 + 1) * DAT_362bf8d0);
    iVar7 = DAT_362a2ac4;
  }
  iVar12 = DAT_362bf8dc + iVar14;
  DAT_362bf8dc = iVar12;
  iVar6 = FUN_36061fd0((undefined4 *)&DAT_362bf8d4);
  if (iVar6 < iVar12) {
    iVar7 = FUN_36061fd0((undefined4 *)&DAT_362bf8d4);
    FUN_36062460(&DAT_362bf8d4,iVar7 + ((iVar14 + -1) / DAT_362bf8e0 + 1) * DAT_362bf8e0);
    iVar7 = DAT_362a2ac4;
  }
  iVar12 = DAT_362bf8ec + iVar14;
  DAT_362bf8ec = iVar12;
  iVar6 = FUN_36061f90((undefined4 *)&DAT_362bf8e4);
  if (iVar6 < iVar12) {
    iVar7 = FUN_36061f90((undefined4 *)&DAT_362bf8e4);
    FUN_360622b0(&DAT_362bf8e4,iVar7 + ((iVar14 + -1) / DAT_362bf8f0 + 1) * DAT_362bf8f0);
    iVar7 = DAT_362a2ac4;
  }
  local_18 = 0;
  if (0 < DAT_362a2ac0) {
    local_10 = 0;
    local_14 = 0;
    local_8 = 0;
    do {
      local_c = 0;
      if (0 < iVar7) {
        fVar5 = (float)DAT_362a2ac4;
        uVar8 = local_18 & 0x80000001;
        fVar4 = _DAT_36228798 - ((float)(int)local_18 / (float)DAT_362a2ac0) * _DAT_3622879c;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffe) + 1;
        }
        iVar6 = local_10;
        iVar12 = local_14;
        iVar14 = local_8;
        do {
          *(float *)(iVar6 + DAT_362bf8c8) =
               ((float)local_c / fVar5) * _DAT_3622879c - _DAT_36228798;
          *(float *)(iVar6 + 4 + DAT_362bf8c8) = fVar4;
          *(undefined4 *)(iVar6 + 8 + DAT_362bf8c8) = 0xbf800000;
          uVar13 = local_c + local_18 & 0x80000001;
          if ((int)uVar13 < 0) {
            uVar13 = (uVar13 - 1 | 0xfffffffe) + 1;
          }
          local_c = local_c + 1;
          iVar6 = iVar6 + 0xc;
          *(float *)(iVar12 + DAT_362bf8d8) = (float)(int)uVar13;
          *(float *)(iVar12 + 4 + DAT_362bf8d8) = (float)(int)uVar8;
          *(undefined4 *)(iVar14 + DAT_362bf8e8) = 0xffffffff;
          iVar12 = iVar12 + 8;
          iVar14 = iVar14 + 4;
        } while (local_c < iVar7);
      }
      local_8 = local_8 + iVar7 * 4;
      local_14 = local_14 + iVar7 * 8;
      local_18 = local_18 + 1;
      local_10 = local_10 + iVar7 * 0xc;
    } while ((int)local_18 < DAT_362a2ac0);
  }
  iVar14 = (iVar7 * 6 + -6) * (DAT_362a2ac0 + -1);
  iVar12 = DAT_362bf8fc + iVar14;
  DAT_362bf8fc = iVar12;
  iVar6 = FUN_3600bda0((undefined4 *)&DAT_362bf8f4);
  if (iVar6 < iVar12) {
    iVar7 = FUN_3600bda0((undefined4 *)&DAT_362bf8f4);
    FUN_360623a0(&DAT_362bf8f4,iVar7 + ((iVar14 + -1) / DAT_362bf900 + 1) * DAT_362bf900);
    iVar7 = DAT_362a2ac4;
  }
  iVar6 = DAT_362a2ac0 + -1;
  local_18 = 0;
  if (0 < iVar6) {
    iVar12 = iVar7 + -1;
    iVar14 = iVar12 * 0xc;
    local_10 = 0;
    do {
      iVar10 = 0;
      if (0 < iVar12) {
        sVar2 = ((short)local_18 + 1) * (short)iVar7;
        sVar3 = (short)local_18 * (short)iVar7;
        iVar9 = local_10;
        do {
          sVar1 = (short)iVar10;
          *(short *)(iVar9 + DAT_362bf8f8) = sVar1 + sVar2;
          sVar15 = sVar1 + 1 + sVar2;
          *(short *)(iVar9 + 2 + DAT_362bf8f8) = sVar15;
          sVar11 = sVar1 + sVar3;
          *(short *)(iVar9 + 4 + DAT_362bf8f8) = sVar11;
          *(short *)(iVar9 + 6 + DAT_362bf8f8) = sVar11;
          *(short *)(iVar9 + 8 + DAT_362bf8f8) = sVar15;
          *(short *)(iVar9 + 10 + DAT_362bf8f8) = sVar1 + 1 + sVar3;
          iVar10 = iVar10 + 1;
          iVar12 = DAT_362a2ac4 + -1;
          iVar9 = iVar9 + 0xc;
          iVar7 = DAT_362a2ac4;
        } while (iVar10 < iVar12);
      }
      local_18 = local_18 + 1;
      local_10 = local_10 + iVar14;
    } while ((int)local_18 < iVar6);
  }
  return;
}

