
void __cdecl FUN_36082040(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar5 = DAT_362bef7c;
  if (*param_1 != 0) {
    if (1 < _iStatsMode) {
      puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x240) = *puVar4;
      *(undefined4 *)(iVar5 + 0x244) = puVar4[1];
      iVar5 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
        *(undefined4 *)(iVar5 + 0x268) = *puVar4;
        *(undefined4 *)(iVar5 + 0x26c) = puVar4[1];
      }
    }
    do {
      iVar5 = (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
    } while (0 < iVar5);
    *param_1 = 0;
    iVar5 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar7 = uVar1 - *(uint *)(iVar5 + 0x240);
      uVar3 = *(uint *)(iVar5 + 0x248);
      *(uint *)(iVar5 + 0x248) = uVar3 + uVar7;
      *(uint *)(iVar5 + 0x24c) =
           *(int *)(iVar5 + 0x24c) +
           ((uVar2 - *(int *)(iVar5 + 0x244)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x240))) +
           (uint)CARRY4(uVar3,uVar7);
      *(undefined4 *)(iVar5 + 0x240) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0x244) = 0xffffffff;
      iVar5 = DAT_362bef7c;
      if (1 < _iStatsMode) {
        puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar7 = uVar1 - *(uint *)(iVar5 + 0x268);
        uVar3 = *(uint *)(iVar5 + 0x270);
        *(uint *)(iVar5 + 0x270) = uVar3 + uVar7;
        *(uint *)(iVar5 + 0x274) =
             *(int *)(iVar5 + 0x274) +
             ((uVar2 - *(int *)(iVar5 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x268))) +
             (uint)CARRY4(uVar3,uVar7);
        *(undefined4 *)(iVar5 + 0x268) = 0xffffffff;
        *(undefined4 *)(iVar5 + 0x26c) = 0xffffffff;
      }
    }
  }
  return;
}

