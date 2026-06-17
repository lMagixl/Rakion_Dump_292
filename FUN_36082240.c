
void __cdecl FUN_36082240(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar3 + 0x268) = *puVar4;
    *(undefined4 *)(iVar3 + 0x26c) = puVar4[1];
  }
  piVar5 = FUN_360748c0();
  uVar6 = DAT_362c4560 * 3 & 0x3fffffff;
  if (uVar6 != 0) {
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      *piVar5 = *param_1;
      param_1 = param_1 + 1;
      piVar5 = piVar5 + 1;
    }
  }
  FUN_36074940();
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar6 = *puVar7;
    uVar1 = puVar7[1];
    uVar8 = uVar6 - *(uint *)(iVar3 + 0x268);
    uVar2 = *(uint *)(iVar3 + 0x270);
    *(uint *)(iVar3 + 0x270) = uVar2 + uVar8;
    *(uint *)(iVar3 + 0x274) =
         *(int *)(iVar3 + 0x274) +
         ((uVar1 - *(int *)(iVar3 + 0x26c)) - (uint)(uVar6 < *(uint *)(iVar3 + 0x268))) +
         (uint)CARRY4(uVar2,uVar8);
    *(undefined4 *)(iVar3 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x26c) = 0xffffffff;
  }
  return;
}

