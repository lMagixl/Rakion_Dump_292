
void FUN_36080510(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar5 = DAT_362bef7c;
  if ((DAT_362c44cc == 0) || (DAT_362a40dc == 0)) {
    bVar4 = true;
    DAT_362c44cc = 1;
    if (((*(uint *)(DAT_362bef7c + 0x268) & *(uint *)(DAT_362bef7c + 0x26c)) == 0xffffffff) &&
       (bVar4 = false, 1 < _iStatsMode)) {
      puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x268) = *puVar6;
      *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
    }
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 200))(*(int **)(_pGfx + 0xa5c),0x8d);
    iVar5 = DAT_362bef7c;
    if ((!bVar4) && (1 < _iStatsMode)) {
      puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar7;
      uVar2 = puVar7[1];
      uVar8 = uVar1 - *(uint *)(iVar5 + 0x268);
      uVar3 = *(uint *)(iVar5 + 0x270);
      *(uint *)(iVar5 + 0x270) = uVar3 + uVar8;
      *(uint *)(iVar5 + 0x274) =
           *(int *)(iVar5 + 0x274) +
           ((uVar2 - *(int *)(iVar5 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x268))) +
           (uint)CARRY4(uVar3,uVar8);
      *(undefined4 *)(iVar5 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

