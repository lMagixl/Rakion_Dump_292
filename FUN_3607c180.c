
undefined4 __cdecl FUN_3607c180(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  
  iVar5 = DAT_362bef7c;
  iVar1 = *(int *)(_pGfx + 0xa38);
  if (iVar1 == 0) {
    if ((*(uint *)(_pGfx + 0xa54) & 0x800000) == 0) {
      return 0;
    }
  }
  else if (iVar1 == 1) {
    return 0;
  }
  bVar11 = DAT_362c4d7c == 0x200;
  if (DAT_362c4d7c < 0x200) {
    iVar9 = DAT_362c4d7c;
    DAT_362c4d7c = DAT_362c4d7c + 1;
  }
  else {
    iVar9 = 0x200;
    piVar10 = DAT_362c4d74;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      bVar11 = *piVar10 == 0;
      piVar10 = piVar10 + 1;
    } while (!bVar11);
    iVar9 = (0x200 - iVar9) - (uint)bVar11;
    DAT_362c4708 = iVar9;
    if (iVar9 == 0x200) {
      return 0;
    }
  }
  DAT_362c4708 = iVar9;
  if (1 < _iStatsMode) {
    puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar5 + 0x268) = *puVar6;
    *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
  }
  if (iVar1 == 0) {
    (*DAT_362c3d24)(*(undefined4 *)(DAT_362c4d70 + iVar9 * 4));
    iVar9 = DAT_362c4708;
  }
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar8 = uVar2 - *(uint *)(iVar1 + 0x268);
    uVar4 = *(uint *)(iVar1 + 0x270);
    *(uint *)(iVar1 + 0x270) = uVar4 + uVar8;
    *(uint *)(iVar1 + 0x274) =
         *(int *)(iVar1 + 0x274) +
         ((uVar3 - *(int *)(iVar1 + 0x26c)) - (uint)(uVar2 < *(uint *)(iVar1 + 0x268))) +
         (uint)CARRY4(uVar4,uVar8);
    *(undefined4 *)(iVar1 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x26c) = 0xffffffff;
  }
  DAT_362c4d74[iVar9] = *(int *)(_pGfx + 0xafc);
  *(undefined4 *)(DAT_362c4d78 + iVar9 * 4) = param_1;
  return 1;
}

