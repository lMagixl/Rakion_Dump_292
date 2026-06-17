
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl FUN_3607a970(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int *piStack_24;
  int local_10;
  int local_c [2];
  int iStack_4;
  
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    piStack_24 = local_c;
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar1 + 0x240) = *puVar5;
    *(undefined4 *)(iVar1 + 0x244) = puVar5[1];
  }
  if (param_5 == DAT_362c9b70) {
    param_5 = 0x83f1;
  }
  if (param_5 == DAT_362c9b74) {
    param_5 = 0x83f2;
  }
  if (param_5 == DAT_362c9b78) {
    param_5 = 0x83f3;
  }
  local_10 = 0;
  local_c[0] = 0;
  if (0 < param_4) {
    do {
      iVar1 = *param_1;
      iVar8 = param_3;
      piStack_24 = param_1 + 1;
      (*DAT_362c3d08)(0xde1,local_10,param_5,param_2,param_3,0,iVar1);
      (*DAT_362c41bc)(0xde1,iVar8,0x86a0,&piStack_24);
      iVar8 = DAT_362bef7c;
      if (iStack_4 != iVar1) {
        if (1 < _iStatsMode) {
          piStack_24 = local_c;
          puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
          uVar2 = *puVar6;
          uVar3 = puVar6[1];
          uVar4 = *(uint *)(iVar8 + 0x248);
          uVar7 = uVar2 - *(uint *)(iVar8 + 0x240);
          *(uint *)(iVar8 + 0x248) = uVar4 + uVar7;
          *(uint *)(iVar8 + 0x24c) =
               *(int *)(iVar8 + 0x24c) +
               ((uVar3 - *(int *)(iVar8 + 0x244)) - (uint)(uVar2 < *(uint *)(iVar8 + 0x240))) +
               (uint)CARRY4(uVar4,uVar7);
          *(undefined4 *)(iVar8 + 0x240) = 0xffffffff;
          *(undefined4 *)(iVar8 + 0x244) = 0xffffffff;
        }
        return 0;
      }
      param_1 = (int *)((int)(param_1 + 1) + iVar1);
      param_2 = param_2 >> 1;
      local_c[0] = local_c[0] + 4 + iVar1;
      if (param_2 < 1) {
        param_2 = 1;
      }
      param_3 = param_3 >> 1;
      if (param_3 < 1) {
        param_3 = 1;
      }
      local_10 = local_10 + 1;
    } while (local_c[0] < param_4);
  }
  *(float *)(DAT_362bef74 + 0x174) = *(float *)(DAT_362bef74 + 0x174) + _DAT_36223384;
  *(float *)(DAT_362bef74 + 0x188) = (float)param_4 + *(float *)(DAT_362bef74 + 0x188);
  iVar1 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    piStack_24 = local_c;
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar6;
    uVar3 = puVar6[1];
    uVar4 = *(uint *)(iVar1 + 0x248);
    uVar7 = uVar2 - *(uint *)(iVar1 + 0x240);
    *(uint *)(iVar1 + 0x248) = uVar4 + uVar7;
    *(uint *)(iVar1 + 0x24c) =
         *(int *)(iVar1 + 0x24c) +
         ((uVar3 - *(int *)(iVar1 + 0x244)) - (uint)(uVar2 < *(uint *)(iVar1 + 0x240))) +
         (uint)CARRY4(uVar4,uVar7);
    *(undefined4 *)(iVar1 + 0x240) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x244) = 0xffffffff;
  }
  return 1;
}

