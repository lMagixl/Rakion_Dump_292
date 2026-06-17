
void FUN_3607f080(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  FUN_3607d670();
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x268) = *puVar5;
    *(undefined4 *)(iVar4 + 0x26c) = puVar5[1];
  }
  (*DAT_362c40ac)(4);
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar7 = uVar1 - *(uint *)(iVar4 + 0x268);
    uVar3 = *(uint *)(iVar4 + 0x270);
    *(uint *)(iVar4 + 0x270) = uVar3 + uVar7;
    *(uint *)(iVar4 + 0x274) =
         *(int *)(iVar4 + 0x274) +
         ((uVar2 - *(int *)(iVar4 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar4 + 0x268))) +
         (uint)CARRY4(uVar3,uVar7);
    *(undefined4 *)(iVar4 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x26c) = 0xffffffff;
  }
  return;
}

