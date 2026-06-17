
void __cdecl FUN_3607b9d0(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CGfxLibrary *pCVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_362c4734 != _tpGlobal) {
    iVar7 = (int)_tpGlobal / 100;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    else if (2 < iVar7) {
      iVar7 = 2;
    }
    iVar9 = (int)_tpGlobal % 10;
    iVar10 = ((int)_tpGlobal / 10) % 10;
    if (iVar10 < 1) {
      iVar10 = 1;
    }
    else if (2 < iVar10) {
      iVar10 = 2;
    }
    if (iVar9 < 0) {
      iVar9 = 0;
    }
    else if (2 < iVar9) {
      iVar9 = 2;
    }
    DAT_362c4734 = (CTexParams *)(iVar9 + (iVar10 + iVar7 * 10) * 10);
    _tpGlobal = DAT_362c4734;
  }
  iVar7 = *(int *)(_pGfx + 0xa38);
  (*DAT_362c4608)();
  iVar9 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar9 + 0x240) = *puVar5;
    *(undefined4 *)(iVar9 + 0x244) = puVar5[1];
    iVar9 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
      *(undefined4 *)(iVar9 + 0x268) = *puVar5;
      *(undefined4 *)(iVar9 + 0x26c) = puVar5[1];
    }
  }
  pCVar4 = _pGfx;
  iVar9 = DAT_362c44d4;
  if (iVar7 == 0) {
    *(undefined4 *)(&DAT_362c4564 + DAT_362c44d4 * 4) = *param_1;
    (*DAT_362c41d4)(0xde1,*param_1);
    FUN_3607a4f0(param_2);
  }
  else if (iVar7 == 1) {
    *(undefined4 **)(&DAT_362c4564 + DAT_362c44d4 * 4) = param_1;
    (**(code **)(**(int **)(pCVar4 + 0xa5c) + 0xf4))(*(int **)(pCVar4 + 0xa5c),iVar9,*param_1);
    FUN_36076180(param_2);
  }
  iVar7 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar8 = uVar1 - *(uint *)(iVar7 + 0x240);
    uVar3 = *(uint *)(iVar7 + 0x248);
    *(uint *)(iVar7 + 0x248) = uVar3 + uVar8;
    *(uint *)(iVar7 + 0x24c) =
         *(int *)(iVar7 + 0x24c) +
         ((uVar2 - *(int *)(iVar7 + 0x244)) - (uint)(uVar1 < *(uint *)(iVar7 + 0x240))) +
         (uint)CARRY4(uVar3,uVar8);
    *(undefined4 *)(iVar7 + 0x240) = 0xffffffff;
    *(undefined4 *)(iVar7 + 0x244) = 0xffffffff;
    iVar7 = DAT_362bef7c;
    if (1 < _iStatsMode) {
      puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
      uVar1 = *puVar6;
      uVar2 = puVar6[1];
      uVar8 = uVar1 - *(uint *)(iVar7 + 0x268);
      uVar3 = *(uint *)(iVar7 + 0x270);
      *(uint *)(iVar7 + 0x270) = uVar3 + uVar8;
      *(uint *)(iVar7 + 0x274) =
           *(int *)(iVar7 + 0x274) +
           ((uVar2 - *(int *)(iVar7 + 0x26c)) - (uint)(uVar1 < *(uint *)(iVar7 + 0x268))) +
           (uint)CARRY4(uVar3,uVar8);
      *(undefined4 *)(iVar7 + 0x268) = 0xffffffff;
      *(undefined4 *)(iVar7 + 0x26c) = 0xffffffff;
    }
  }
  return;
}

