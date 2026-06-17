
void FUN_360ffe80(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  
  piVar7 = DAT_362cf51c;
  if (*DAT_362cf51c != 0x46464944) {
    pcVar5 = Translate(s_ETRSNot_a_DIFF_stream__36235c5c,4);
    ThrowF_t(pcVar5);
  }
  uVar2 = piVar7[3];
  puVar8 = (uint *)(piVar7 + 4);
  DAT_362cf504 = 0xffffffff;
  if (piVar7[1] != DAT_362cf518) {
    pcVar5 = Translate(s_ETRSInvalid_DIFF_stream__36235c74,4);
    ThrowF_t(pcVar5);
  }
  if (puVar8 < (uint *)(DAT_362cf520 + (int)DAT_362cf51c)) {
    do {
      iVar4 = DAT_362cf500;
      bVar1 = (byte)*puVar8;
      puVar9 = (uint *)((int)puVar8 + 1);
      if (bVar1 == 0) {
        uVar3 = *puVar9;
        uVar12 = *(uint *)((int)puVar8 + 5);
        puVar13 = (undefined4 *)(uVar3 + DAT_362cf514);
        puVar15 = *(undefined4 **)(DAT_362cf500 + 0x14);
        for (uVar6 = uVar12 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar15 = *puVar13;
          puVar13 = puVar13 + 1;
          puVar15 = puVar15 + 1;
        }
        for (uVar6 = uVar12 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar15 = *(undefined1 *)puVar13;
          puVar13 = (undefined4 *)((int)puVar13 + 1);
          puVar15 = (undefined4 *)((int)puVar15 + 1);
        }
        *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + uVar12;
        puVar9 = (uint *)((int)puVar8 + 9);
        FUN_3603d6a0(&DAT_362cf504,DAT_362cf514 + uVar3,uVar12);
      }
      else if (bVar1 == 1) {
        uVar3 = *puVar9;
        piVar7 = (int *)(DAT_362cf500 + 0x14);
        pbVar11 = (byte *)((int)puVar8 + 5);
        pbVar10 = pbVar11;
        pbVar14 = *(byte **)(DAT_362cf500 + 0x14);
        for (uVar12 = uVar3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pbVar14 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          pbVar14 = pbVar14 + 4;
        }
        for (uVar12 = uVar3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar14 = *pbVar10;
          pbVar10 = pbVar10 + 1;
          pbVar14 = pbVar14 + 1;
        }
        *piVar7 = *piVar7 + uVar3;
        FUN_3603d6a0(&DAT_362cf504,(int)pbVar11,uVar3);
        puVar9 = (uint *)(pbVar11 + uVar3);
      }
      else if (bVar1 == 2) {
        uVar3 = *(uint *)((int)puVar8 + 9);
        pbVar10 = (byte *)((int)puVar8 + 0xd);
        uVar12 = *(uint *)((int)puVar8 + 5);
        if ((int)uVar3 < (int)*(uint *)((int)puVar8 + 5)) {
          uVar12 = uVar3;
        }
        pbVar14 = (byte *)(DAT_362cf514 + *puVar9);
        pbVar11 = pbVar10;
        if (0 < (int)uVar12) {
          do {
            bVar1 = *pbVar14;
            pbVar14 = pbVar14 + 1;
            *pbVar11 = *pbVar11 ^ bVar1;
            uVar12 = uVar12 - 1;
            pbVar11 = pbVar11 + 1;
          } while (uVar12 != 0);
        }
        piVar7 = (int *)(DAT_362cf500 + 0x14);
        pbVar14 = pbVar10;
        pbVar11 = *(byte **)(DAT_362cf500 + 0x14);
        for (uVar12 = uVar3 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pbVar11 = *(undefined4 *)pbVar14;
          pbVar14 = pbVar14 + 4;
          pbVar11 = pbVar11 + 4;
        }
        for (uVar12 = uVar3 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
          *pbVar11 = *pbVar14;
          pbVar14 = pbVar14 + 1;
          pbVar11 = pbVar11 + 1;
        }
        *piVar7 = *piVar7 + uVar3;
        uVar12 = 0;
        if (uVar3 != 0) {
          do {
            DAT_362cf504 = DAT_362cf504 >> 8 ^
                           (uint)(&crc_aulCRCTable)[(uint)pbVar10[uVar12] ^ DAT_362cf504 & 0xff];
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar3);
        }
        puVar9 = (uint *)(pbVar10 + uVar3);
      }
      else {
        pcVar5 = Translate(s_ETRSInvalid_DIFF_block_type__36235c90,4);
        ThrowF_t(pcVar5);
      }
      puVar8 = puVar9;
    } while (puVar9 < (uint *)(DAT_362cf520 + (int)DAT_362cf51c));
  }
  DAT_362cf504 = ~DAT_362cf504;
  if (DAT_362cf504 != uVar2) {
    pcVar5 = Translate(s_ETRSCRC_error_in_DIFF__36235cb0,4);
    ThrowF_t(pcVar5);
  }
  return;
}

