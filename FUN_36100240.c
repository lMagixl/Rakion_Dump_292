
void FUN_36100240(void)

{
  uint uVar1;
  uint uVar2;
  CTStream *pCVar3;
  CTStream *pCVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  bool bVar14;
  int local_14;
  uint local_c;
  uint local_8;
  undefined1 local_4;
  
  local_4 = DAT_36235c38;
  local_8 = DAT_36235c34;
  CTStream::WriteID_t(DAT_362cf500,(CChunkID *)&local_8);
  pCVar3 = DAT_362cf500;
  **(int **)(DAT_362cf500 + 0x14) = DAT_362cf518;
  pCVar4 = pCVar3 + 0x14;
  piVar12 = (int *)(*(int *)(pCVar3 + 0x14) + 4);
  *(int **)pCVar4 = piVar12;
  *piVar12 = DAT_362cf520;
  iVar10 = *(int *)pCVar4;
  *(undefined4 **)pCVar4 = (undefined4 *)(iVar10 + 4);
  *(undefined4 *)(iVar10 + 4) = DAT_362cf504;
  *(int *)pCVar4 = *(int *)pCVar4 + 4;
  piVar12 = FUN_360ffc90(DAT_362cf514,DAT_362cf518);
  piVar5 = FUN_360ffc90(DAT_362cf51c,DAT_362cf520);
  iVar10 = 0;
  if ((piVar12 == (int *)0x0) || (piVar5 == (int *)0x0)) {
    pcVar6 = Translate(s_ETRSInvalid_stream_for_Diff__36235c3c,4);
    ThrowF_t(pcVar6);
  }
  FUN_361001b0((undefined4 *)&DAT_362cf5f4,(int)DAT_362cf514,DAT_362cf518,piVar12,&local_8);
  FUN_361001b0((undefined4 *)&DAT_362cf604,(int)DAT_362cf51c,DAT_362cf520,piVar5,&local_c);
  FUN_360ffdb0(0,(int)piVar12 - (int)DAT_362cf514,0,(int)piVar5 - (int)DAT_362cf51c);
  local_14 = 0;
  iVar7 = FUN_361005c0(0x362cf604);
  if (iVar7 < 1) {
LAB_361003b9:
    FUN_360ffdb0(local_8 - (int)DAT_362cf514,(int)DAT_362cf514 + (DAT_362cf518 - local_8),
                 local_c - (int)DAT_362cf51c,(int)DAT_362cf51c + (DAT_362cf520 - local_c));
    return;
  }
LAB_36100360:
  iVar7 = DAT_362cf608;
  iVar11 = 0;
  iVar8 = FUN_361005c0(0x362cf5f4);
  if (0 < iVar8) {
    piVar12 = DAT_362cf5f8;
    do {
      if (*piVar12 == *(int *)(iVar10 + iVar7)) {
        if (-1 < iVar11) {
          uVar1 = *(uint *)(iVar10 + 8 + iVar7);
          uVar2 = DAT_362cf5f8[iVar11 * 3 + 2];
          if (uVar2 != uVar1) goto LAB_36100458;
          bVar14 = true;
          uVar9 = uVar1;
          pcVar6 = (char *)(DAT_362cf5f8[iVar11 * 3 + 1] + (int)DAT_362cf514);
          pcVar13 = (char *)(*(int *)(iVar10 + 4 + iVar7) + (int)DAT_362cf51c);
          goto code_r0x36100436;
        }
        break;
      }
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 3;
    } while (iVar11 < iVar8);
  }
  FUN_360ffd50(*(int *)(iVar10 + 4 + iVar7),*(uint *)(iVar10 + 8 + iVar7));
  goto LAB_3610039f;
  while( true ) {
    uVar9 = uVar9 - 1;
    bVar14 = *pcVar6 == *pcVar13;
    pcVar6 = pcVar6 + 1;
    pcVar13 = pcVar13 + 1;
    if (!bVar14) break;
code_r0x36100436:
    if (uVar9 == 0) break;
  }
  iVar7 = DAT_362cf608;
  if (bVar14) {
    FUN_360ffd00(DAT_362cf5f8[iVar11 * 3 + 1],uVar2);
  }
  else {
LAB_36100458:
    FUN_360ffdb0(DAT_362cf5f8[iVar11 * 3 + 1],uVar2,*(int *)(iVar10 + 4 + iVar7),uVar1);
  }
LAB_3610039f:
  local_14 = local_14 + 1;
  iVar10 = iVar10 + 0xc;
  iVar7 = FUN_361005c0(0x362cf604);
  if (iVar7 <= local_14) goto LAB_361003b9;
  goto LAB_36100360;
}

