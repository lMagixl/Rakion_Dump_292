
void __cdecl FUN_36082dc0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar10 = (int)param_1 >> 4;
  uVar9 = (uint)param_1 & 0xf;
  iVar8 = iVar10 * 0xd4 + DAT_362c4714;
  if (1 < _iStatsMode) {
    param_1 = (undefined4 *)(DAT_362bef7c + 600);
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    param_1[4] = *puVar4;
    param_1[5] = puVar4[1];
  }
  if (iVar10 == 0) {
    if (0 < param_2) {
      DAT_362c4560 = param_2;
    }
    switch(uVar9) {
    case 0:
      FUN_36074890();
      break;
    case 1:
      FUN_36074940();
      break;
    case 2:
      FUN_360749e0();
      break;
    case 3:
      FUN_36074aa0();
      break;
    case 4:
      FUN_36074ba0();
    }
  }
  else {
    iVar10 = *(int *)(iVar8 + 0x90 + uVar9 * 4);
    piVar1 = *(int **)(iVar8 + 0x60 + uVar9 * 4);
    if (0 < iVar10) {
      uVar6 = iVar10 * (&DAT_3622b1c0)[uVar9];
      iVar10 = *(int *)(iVar8 + uVar9 * 4) * (&DAT_3622b1c0)[uVar9];
      puVar4 = (undefined4 *)(*(int *)(iVar8 + 0x30 + uVar9 * 4) + iVar10);
      (**(code **)(*piVar1 + 0x2c))(piVar1,iVar10,uVar6,&param_1,0);
      uVar6 = uVar6 >> 2;
      puVar11 = param_1;
      if (uVar6 != 0) {
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar11 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar11 = puVar11 + 1;
        }
      }
    }
    if (*(int *)(iVar8 + 0x90 + uVar9 * 4) != 0) {
      *(undefined4 *)(iVar8 + uVar9 * 4) = 0;
      *(undefined4 *)(iVar8 + 0x90 + uVar9 * 4) = 0;
      (**(code **)(*piVar1 + 0x30))(piVar1);
    }
  }
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar6 = *puVar5;
    uVar2 = puVar5[1];
    uVar7 = uVar6 - *(uint *)(iVar10 + 0x268);
    uVar3 = *(uint *)(iVar10 + 0x270);
    *(uint *)(iVar10 + 0x270) = uVar3 + uVar7;
    *(uint *)(iVar10 + 0x274) =
         *(int *)(iVar10 + 0x274) +
         ((uVar2 - *(int *)(iVar10 + 0x26c)) - (uint)(uVar6 < *(uint *)(iVar10 + 0x268))) +
         (uint)CARRY4(uVar3,uVar7);
    *(undefined4 *)(iVar10 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x26c) = 0xffffffff;
  }
  *(uint *)(iVar8 + 0xcc) = *(uint *)(iVar8 + 0xcc) & ~(1 << (sbyte)uVar9);
  return;
}

