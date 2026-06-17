
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_36076620(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int unaff_EBP;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  uint in_stack_00000018;
  int iStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint *puStack_48;
  uint local_30 [5];
  int iStack_1c;
  uint *puStack_18;
  int iStack_c;
  
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puStack_48 = local_30;
    uStack_4c = 0x3607664d;
    puVar3 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x240) = *puVar3;
    *(undefined4 *)(iVar4 + 0x244) = puVar3[1];
  }
  uVar8 = (-(uint)(*(int *)(DAT_362c3d00 + 8) != 0) & 0xfffffff2) + 0xf;
  local_30[0] = uVar8;
  if (*param_1 != 0) {
    do {
      puStack_48 = (uint *)*param_1;
      uStack_4c = 0x36076688;
      iVar4 = (**(code **)(*puStack_48 + 8))();
    } while (0 < iVar4);
    *param_1 = 0;
  }
  puVar5 = *(uint **)(_pGfx + 0xa5c);
  puStack_48 = (uint *)param_1;
  uStack_4c = 1;
  uStack_50 = in_stack_00000018;
  iStack_54 = 0;
  (**(code **)(*puVar5 + 0x50))();
  piVar1 = (int *)*param_1;
  iStack_1c = 0;
  iStack_54 = 0;
  if (0 < iStack_c) {
    do {
      iVar4 = iStack_1c;
      if ((int)uVar8 <= iStack_1c) break;
      uVar8 = *puStack_18;
      puVar9 = puStack_18 + 1;
      puStack_18 = puVar9;
      (**(code **)(*piVar1 + 0x38))();
      (**(code **)(*piVar1 + 0x40))(piVar1,iVar4,&iStack_54,0,0);
      iVar4 = DAT_362bef7c;
      if (uStack_50 != uVar8) {
        if (1 < _iStatsMode) {
          puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
          uVar8 = *puVar5;
          uVar7 = puVar5[1];
          uVar2 = *(uint *)(iVar4 + 0x248);
          uVar6 = uVar8 - *(uint *)(iVar4 + 0x240);
          *(uint *)(iVar4 + 0x248) = uVar2 + uVar6;
          *(uint *)(iVar4 + 0x24c) =
               *(int *)(iVar4 + 0x24c) +
               ((uVar7 - *(int *)(iVar4 + 0x244)) - (uint)(uVar8 < *(uint *)(iVar4 + 0x240))) +
               (uint)CARRY4(uVar2,uVar6);
          *(undefined4 *)(iVar4 + 0x240) = 0xffffffff;
          *(undefined4 *)(iVar4 + 0x244) = 0xffffffff;
        }
        return 0;
      }
      puVar10 = puVar5;
      for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      for (uVar7 = uVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(char *)puVar10 = (char)*puVar9;
        puVar9 = (uint *)((int)puVar9 + 1);
        puVar10 = (uint *)((int)puVar10 + 1);
      }
      (**(code **)(*piVar1 + 0x44))(piVar1,unaff_EBP);
      puStack_18 = (uint *)((int)puStack_18 + uVar8);
      iStack_54 = iStack_54 + 4 + uVar8;
      iStack_1c = unaff_EBP + 1;
      uVar8 = uStack_50;
    } while (iStack_54 < iStack_c);
  }
  *(float *)(DAT_362bef74 + 0x174) = *(float *)(DAT_362bef74 + 0x174) + _DAT_36223384;
  *(float *)(DAT_362bef74 + 0x188) = (float)iStack_c + *(float *)(DAT_362bef74 + 0x188);
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar8 = *puVar5;
    uVar7 = puVar5[1];
    uVar2 = *(uint *)(iVar4 + 0x248);
    uVar6 = uVar8 - *(uint *)(iVar4 + 0x240);
    *(uint *)(iVar4 + 0x248) = uVar2 + uVar6;
    *(uint *)(iVar4 + 0x24c) =
         *(int *)(iVar4 + 0x24c) +
         ((uVar7 - *(int *)(iVar4 + 0x244)) - (uint)(uVar8 < *(uint *)(iVar4 + 0x240))) +
         (uint)CARRY4(uVar2,uVar6);
    *(undefined4 *)(iVar4 + 0x240) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x244) = 0xffffffff;
  }
  return 1;
}

