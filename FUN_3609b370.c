
void FUN_3609b370(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  byte *pbVar14;
  
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x218) = *puVar6;
    *(undefined4 *)(iVar1 + 0x21c) = puVar6[1];
  }
  iVar1 = *(int *)(DAT_362c9c7c + 0x60);
  uVar12 = *(int *)(DAT_362c9c7c + 0x20) >> ((byte)*(undefined4 *)(DAT_362c9c7c + 0x28) & 0x1f);
  puVar6 = *(undefined4 **)(DAT_362c9c80 + 0x60);
  pbVar14 = *(byte **)(DAT_362c9c80 + 0x68);
  iVar7 = DAT_362c9c70 / DAT_362c9c78;
  iVar8 = (iVar7 + -1) * DAT_362c9c70;
  iVar4 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar13 = DAT_362c9c78;
  iVar10 = DAT_362c9c74;
  do {
    do {
      *puVar6 = *(undefined4 *)(iVar1 + (uint)(*pbVar14 >> (8U - (char)iVar4 & 0x1f)) * 4);
      iVar5 = DAT_362bef7c;
      pbVar14 = pbVar14 + iVar7;
      puVar6 = puVar6 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    pbVar14 = pbVar14 + iVar8;
    iVar10 = iVar10 + -1;
    iVar13 = DAT_362c9c78;
  } while (iVar10 != 0);
  if (1 < _iStatsMode) {
    puVar9 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar12 = *puVar9;
    uVar2 = puVar9[1];
    uVar3 = *(uint *)(iVar5 + 0x220);
    uVar11 = uVar12 - *(uint *)(iVar5 + 0x218);
    *(uint *)(iVar5 + 0x220) = uVar3 + uVar11;
    *(uint *)(iVar5 + 0x224) =
         *(int *)(iVar5 + 0x224) +
         ((uVar2 - *(int *)(iVar5 + 0x21c)) - (uint)(uVar12 < *(uint *)(iVar5 + 0x218))) +
         (uint)CARRY4(uVar3,uVar11);
    *(undefined4 *)(iVar5 + 0x218) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x21c) = 0xffffffff;
  }
  return;
}

