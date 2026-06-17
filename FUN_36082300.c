
void __cdecl FUN_36082300(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar3 + 0x268) = *puVar4;
    *(undefined4 *)(iVar3 + 0x26c) = puVar4[1];
  }
  piVar5 = FUN_36074960();
  uVar7 = (uint)(DAT_362c4560 * 8) >> 2;
  if (uVar7 != 0) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      *piVar5 = *param_1;
      param_1 = param_1 + 1;
      piVar5 = piVar5 + 1;
    }
  }
  FUN_360749e0();
  iVar3 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar7 = *puVar6;
    uVar1 = puVar6[1];
    uVar8 = uVar7 - *(uint *)(iVar3 + 0x268);
    uVar2 = *(uint *)(iVar3 + 0x270);
    *(uint *)(iVar3 + 0x270) = uVar2 + uVar8;
    *(uint *)(iVar3 + 0x274) =
         *(int *)(iVar3 + 0x274) +
         ((uVar1 - *(int *)(iVar3 + 0x26c)) - (uint)(uVar7 < *(uint *)(iVar3 + 0x268))) +
         (uint)CARRY4(uVar2,uVar8);
    *(undefined4 *)(iVar3 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar3 + 0x26c) = 0xffffffff;
  }
  return;
}

