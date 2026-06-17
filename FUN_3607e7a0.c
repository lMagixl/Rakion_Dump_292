
void __cdecl FUN_3607e7a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  
  lVar4 = _iStatsMode;
  if (((&DAT_362c44e8)[param_1] != 0) || (DAT_362a40dc == 0)) {
    (&DAT_362c44e8)[param_1] = 0;
    iVar5 = DAT_362bef7c;
    if (1 < lVar4) {
      puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar5 + 0x268) = *puVar6;
      *(undefined4 *)(iVar5 + 0x26c) = puVar6[1];
    }
    (*DAT_362c3da8)(param_1 + 0x4000);
    iVar5 = DAT_362bef7c;
    if (1 < _iStatsMode) {
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

