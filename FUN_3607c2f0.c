
void FUN_3607c2f0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  bool bVar9;
  
  iVar5 = DAT_362bef7c;
  iVar1 = *(int *)(_pGfx + 0xa38);
  if (iVar1 == 0) {
    bVar9 = (*(uint *)(_pGfx + 0xa54) & 0x800000) == 0;
  }
  else {
    bVar9 = iVar1 == 1;
  }
  if (!bVar9) {
    if (1 < _iStatsMode) {
      puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x268) = *puVar6;
      *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
    }
    if (iVar1 == 0) {
      (*DAT_362c3d20)();
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
    DAT_362c4708 = 0xffffffff;
  }
  return;
}

