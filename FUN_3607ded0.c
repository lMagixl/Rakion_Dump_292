
void __cdecl FUN_3607ded0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  
  iVar3 = DAT_362bef7c;
  uVar4 = (uint)(param_1 == 0x41);
  if (((uVar4 == 0) != (DAT_362a400c == 0)) || (DAT_362a40dc == 0)) {
    if (1 < _iStatsMode) {
      puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar3 + 0x268) = *puVar5;
      *(undefined4 *)(iVar3 + 0x26c) = puVar5[1];
    }
    if (param_1 == 0x41) {
      uVar8 = 0x901;
    }
    else {
      uVar8 = 0x900;
    }
    (*DAT_362c3d68)(uVar8);
    iVar3 = DAT_362bef7c;
    DAT_362a400c = uVar4;
    if (1 < _iStatsMode) {
      puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar4 = *puVar6;
      uVar1 = puVar6[1];
      uVar2 = *(uint *)(iVar3 + 0x270);
      uVar7 = uVar4 - *(uint *)(iVar3 + 0x268);
      *(uint *)(iVar3 + 0x270) = uVar2 + uVar7;
      *(uint *)(iVar3 + 0x274) =
           *(int *)(iVar3 + 0x274) +
           ((uVar1 - *(int *)(iVar3 + 0x26c)) - (uint)(uVar4 < *(uint *)(iVar3 + 0x268))) +
           (uint)CARRY4(uVar2,uVar7);
      *(undefined4 *)(iVar3 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

