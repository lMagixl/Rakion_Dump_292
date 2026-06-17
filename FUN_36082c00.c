
int * __cdecl FUN_36082c00(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  iVar1 = DAT_362bef7c;
  iVar9 = (int)param_1 >> 4;
  uVar10 = (uint)param_1 & 0xf;
  iVar11 = iVar9 * 0xd4 + DAT_362c4714;
  if (1 < _iStatsMode) {
    puVar6 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x268) = *puVar6;
    *(undefined4 *)(iVar1 + 0x26c) = puVar6[1];
  }
  if (iVar9 == 0) {
    switch(uVar10) {
    case 0:
      param_1 = (int *)FUN_36074c60(param_3);
      break;
    case 1:
      param_1 = FUN_360748c0();
      break;
    case 2:
      param_1 = FUN_36074960();
      break;
    case 3:
      FUN_36080510();
      param_1 = FUN_36074a00();
      break;
    case 4:
      param_1 = (int *)FUN_36074ac0(0);
    }
  }
  else {
    iVar1 = (&DAT_3622b1c0)[uVar10];
    if (param_4 == 0x66) {
      if (*(int *)(iVar11 + 0xd0) != 0x67) {
        *(undefined4 *)(iVar11 + uVar10 * 4) = 0xffffffff;
        *(undefined4 *)(iVar11 + 0x90 + uVar10 * 4) = 0xffffffff;
        piVar2 = *(int **)(iVar11 + 0x60 + uVar10 * 4);
        (**(code **)(*piVar2 + 0x2c))
                  (piVar2,iVar1 * param_2,iVar1 * param_3,&param_1,
                   (*(int *)(iVar11 + 0xd0) != 0x69) - 1 & 0x2000);
        goto LAB_36082d4d;
      }
      *(int *)(iVar11 + uVar10 * 4) = param_2;
      *(int *)(iVar11 + 0x90 + uVar10 * 4) = param_3;
    }
    else {
      *(undefined4 *)(iVar11 + uVar10 * 4) = 0;
      *(undefined4 *)(iVar11 + 0x90 + uVar10 * 4) = 0;
    }
    param_1 = (int *)(iVar1 * param_2 + *(int *)(iVar11 + 0x30 + uVar10 * 4));
  }
LAB_36082d4d:
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar7 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    uVar8 = uVar3 - *(uint *)(iVar1 + 0x268);
    uVar5 = *(uint *)(iVar1 + 0x270);
    *(uint *)(iVar1 + 0x270) = uVar5 + uVar8;
    *(uint *)(iVar1 + 0x274) =
         *(int *)(iVar1 + 0x274) +
         ((uVar4 - *(int *)(iVar1 + 0x26c)) - (uint)(uVar3 < *(uint *)(iVar1 + 0x268))) +
         (uint)CARRY4(uVar5,uVar8);
    *(undefined4 *)(iVar1 + 0x268) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x26c) = 0xffffffff;
  }
  *(uint *)(iVar11 + 0xcc) = *(uint *)(iVar11 + 0xcc) | 1 << (sbyte)uVar10;
  return param_1;
}

