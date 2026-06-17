
void __cdecl FUN_36082480(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar3 + 0x268) = *puVar4;
    *(undefined4 *)(iVar3 + 0x26c) = puVar4[1];
  }
  puVar4 = (undefined4 *)FUN_36074ac0(param_2);
  uVar5 = ((uint)(param_2 != 0) * 8 + 8) * DAT_362c4560 >> 2;
  if (uVar5 != 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  FUN_36074ba0();
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar5 = *puVar6;
    uVar1 = puVar6[1];
    uVar7 = uVar5 - *(uint *)(iVar3 + 0x268);
    uVar2 = *(uint *)(iVar3 + 0x270);
    *(uint *)(iVar3 + 0x270) = uVar2 + uVar7;
    *(uint *)(iVar3 + 0x274) =
         *(int *)(iVar3 + 0x274) +
         ((uVar1 - *(int *)(iVar3 + 0x26c)) - (uint)(uVar5 < *(uint *)(iVar3 + 0x268))) +
         (uint)CARRY4(uVar2,uVar7);
    *(undefined4 *)(iVar3 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x26c) = 0xffffffff;
  }
  return;
}

