
void FUN_36044e90(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  
  *(float *)(_pTimer + 8) = *(float *)(_pTimer + 8) + CTimer::InputQuantum;
  if (1 < _iStatsMode) {
    iVar4 = FUN_3603c300(&DAT_362bef78,9);
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x10) = *puVar5;
    *(undefined4 *)(iVar4 + 0x14) = puVar5[1];
  }
  for (piVar8 = *(int **)(_pTimer + 0x24); *piVar8 != 0; piVar8 = (int *)*piVar8) {
    (**(code **)(piVar8[-1] + 4))();
  }
  if (1 < _iStatsMode) {
    iVar4 = FUN_3603c300(&DAT_362bef78,9);
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar7 = uVar1 - *(uint *)(iVar4 + 0x10);
    uVar3 = *(uint *)(iVar4 + 0x18);
    *(uint *)(iVar4 + 0x18) = uVar3 + uVar7;
    *(uint *)(iVar4 + 0x1c) =
         *(int *)(iVar4 + 0x1c) +
         ((uVar2 - *(int *)(iVar4 + 0x14)) - (uint)(uVar1 < *(uint *)(iVar4 + 0x10))) +
         (uint)CARRY4(uVar3,uVar7);
    *(undefined4 *)(iVar4 + 0x10) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x14) = 0xffffffff;
  }
  return;
}

