
void FUN_361142a0(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  if ((-1 < DAT_362a645c) && (1 < _iStatsMode)) {
    iVar1 = DAT_362bef7c + DAT_362a645c * 0x28;
    puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar5;
    uVar3 = puVar5[1];
    uVar6 = uVar2 - *(uint *)(iVar1 + 0x10);
    uVar4 = *(uint *)(iVar1 + 0x18);
    *(uint *)(iVar1 + 0x18) = uVar4 + uVar6;
    *(uint *)(iVar1 + 0x1c) =
         *(int *)(iVar1 + 0x1c) +
         ((uVar3 - *(int *)(iVar1 + 0x14)) - (uint)(uVar2 < *(uint *)(iVar1 + 0x10))) +
         (uint)CARRY4(uVar4,uVar6);
    *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x14) = 0xffffffff;
    DAT_362a645c = 0xffffffff;
    return;
  }
  DAT_362a645c = 0xffffffff;
  return;
}

