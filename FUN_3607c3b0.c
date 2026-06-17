
undefined4 __cdecl FUN_3607c3b0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  int local_8 [2];
  
  iVar6 = DAT_362bef7c;
  iVar9 = *(int *)(_pGfx + 0xa38);
  if (iVar9 == 0) {
    bVar13 = (*(uint *)(_pGfx + 0xa54) & 0x800000) == 0;
  }
  else {
    bVar13 = iVar9 == 1;
  }
  if (!bVar13) {
    bVar13 = DAT_362c4d7c == 0;
    iVar10 = DAT_362c4d7c;
    piVar12 = DAT_362c4d78;
    if (0 < DAT_362c4d7c) {
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        bVar13 = param_1 == *piVar12;
        piVar12 = piVar12 + 1;
      } while (!bVar13);
      iVar10 = (DAT_362c4d7c - iVar10) - (uint)bVar13;
      if (iVar10 == DAT_362c4d7c) {
        return 1;
      }
      iVar1 = iVar10 * 4;
      uVar2 = *(undefined4 *)(iVar1 + DAT_362c4d70);
      if (1 < _iStatsMode) {
        puVar7 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar6 + 0x268) = *puVar7;
        *(undefined4 *)(iVar6 + 0x26c) = puVar7[1];
      }
      if (iVar9 == 0) {
        if ((param_3 != 0) &&
           ((*DAT_362c3d1c)(uVar2,0x8867,local_8), iVar9 = DAT_362bef7c, local_8[0] == 0)) {
          if (1 < _iStatsMode) {
            puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
            uVar3 = *puVar8;
            uVar4 = puVar8[1];
            uVar5 = *(uint *)(iVar9 + 0x270);
            uVar11 = uVar3 - *(uint *)(iVar9 + 0x268);
            *(uint *)(iVar9 + 0x270) = uVar5 + uVar11;
            *(uint *)(iVar9 + 0x274) =
                 *(int *)(iVar9 + 0x274) +
                 ((uVar4 - *(int *)(iVar9 + 0x26c)) - (uint)(uVar3 < *(uint *)(iVar9 + 0x268))) +
                 (uint)CARRY4(uVar5,uVar11);
            *(undefined4 *)(iVar9 + 0x268) = 0xffffffff;
            *(undefined4 *)(iVar9 + 0x26c) = 0xffffffff;
          }
          return 0;
        }
        (*DAT_362c3d1c)(uVar2,0x8866,param_2);
      }
      iVar9 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar3 = *puVar8;
        uVar4 = puVar8[1];
        uVar5 = *(uint *)(iVar9 + 0x270);
        uVar11 = uVar3 - *(uint *)(iVar9 + 0x268);
        *(uint *)(iVar9 + 0x270) = uVar5 + uVar11;
        *(uint *)(iVar9 + 0x274) =
             *(int *)(iVar9 + 0x274) +
             ((uVar4 - *(int *)(iVar9 + 0x26c)) - (uint)(uVar3 < *(uint *)(iVar9 + 0x268))) +
             (uint)CARRY4(uVar5,uVar11);
        *(undefined4 *)(iVar9 + 0x268) = 0xffffffff;
        *(undefined4 *)(iVar9 + 0x26c) = 0xffffffff;
      }
      iVar9 = DAT_362c4d7c + -1;
      if (iVar10 < iVar9) {
        *(undefined4 *)(iVar1 + DAT_362c4d74) = *(undefined4 *)(DAT_362c4d74 + iVar9 * 4);
        DAT_362c4d78[iVar10] = DAT_362c4d78[iVar9];
        *(undefined4 *)(DAT_362c4d74 + iVar9 * 4) = 0;
        DAT_362c4d78[iVar9] = 0;
        uVar2 = *(undefined4 *)(iVar1 + DAT_362c4d70);
        puVar7 = (undefined4 *)(DAT_362c4d70 + iVar9 * 4);
        *(undefined4 *)(iVar1 + DAT_362c4d70) = *(undefined4 *)(DAT_362c4d70 + iVar9 * 4);
        *puVar7 = uVar2;
      }
      else {
        *(undefined4 *)(iVar1 + DAT_362c4d74) = 0;
        DAT_362c4d78[iVar10] = 0;
      }
      do {
        DAT_362c4d7c = DAT_362c4d7c + -1;
        if (*(int *)(DAT_362c4d74 + -4 + DAT_362c4d7c * 4) != 0) {
          return 1;
        }
      } while (0 < DAT_362c4d7c);
      return 1;
    }
    DAT_362c4d7c = 0;
  }
  return 1;
}

