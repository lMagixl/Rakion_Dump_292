
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3607a750(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  ulong *puVar10;
  int iVar11;
  int local_c;
  
  iVar5 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar4 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar5 + 0x240) = *puVar4;
    *(undefined4 *)(iVar5 + 0x244) = puVar4[1];
  }
  iVar5 = *(int *)(DAT_362c4474 + 8);
  iVar11 = 0;
  local_c = 0;
  iVar9 = 0;
  if (param_2 < 1) {
LAB_3607a827:
    if (iVar5 != 0) goto LAB_3607a8e3;
  }
  else {
    do {
      local_c = iVar9;
      if (param_3 < 1) goto LAB_3607a827;
      if (param_5 == 0) {
        (*DAT_362c41c4)(0xde1,iVar11,param_4,param_2,param_3,0,0x1908,0x1401,param_1 + iVar9 * 4);
      }
      else {
        (*DAT_362c41e8)(0xde1,iVar11,0,0,param_2,param_3,0x1908,0x1401,param_1 + iVar9 * 4);
      }
      local_c = iVar9 + param_2 * param_3;
      param_2 = param_2 >> 1;
      param_3 = param_3 >> 1;
      iVar11 = iVar11 + 1;
      if (iVar5 != 0) goto LAB_3607a8e3;
      iVar9 = local_c;
    } while (0 < param_2);
  }
  if (param_2 != param_3) {
    iVar5 = param_3;
    if (param_3 <= param_2) {
      iVar5 = param_2;
    }
    puVar7 = (ulong *)(param_1 + (local_c + iVar5 * -2) * 4);
    puVar10 = &DAT_362c5680;
    do {
      if (param_2 < 1) {
        if (param_3 < 1) break;
        if (param_2 == 0) {
          param_2 = 1;
        }
      }
      if (param_3 == 0) {
        param_3 = 1;
      }
      iVar5 = param_2 * param_3;
      MakeSubMipmap(puVar7,puVar10,iVar5);
      if (param_5 == 0) {
        (*DAT_362c41c4)(0xde1,iVar11,param_4,param_2,param_3,0,0x1908,0x1401,puVar10);
      }
      else {
        (*DAT_362c41e8)(0xde1,iVar11,0,0,param_2,param_3);
      }
      local_c = local_c + iVar5;
      param_2 = param_2 >> 1;
      param_3 = param_3 >> 1;
      iVar11 = iVar11 + 1;
      puVar7 = puVar10;
      puVar10 = puVar10 + iVar5;
    } while( true );
  }
LAB_3607a8e3:
  *(float *)(DAT_362bef74 + 0x174) = *(float *)(DAT_362bef74 + 0x174) + _DAT_36223384;
  *(float *)(DAT_362bef74 + 0x188) = (float)(local_c * 4) + *(float *)(DAT_362bef74 + 0x188);
  iVar5 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = *(uint *)(iVar5 + 0x248);
    uVar8 = uVar1 - *(uint *)(iVar5 + 0x240);
    *(uint *)(iVar5 + 0x248) = uVar3 + uVar8;
    *(uint *)(iVar5 + 0x24c) =
         *(int *)(iVar5 + 0x24c) +
         ((uVar2 - *(int *)(iVar5 + 0x244)) - (uint)(uVar1 < *(uint *)(iVar5 + 0x240))) +
         (uint)CARRY4(uVar3,uVar8);
    *(undefined4 *)(iVar5 + 0x240) = 0xffffffff;
    *(undefined4 *)(iVar5 + 0x244) = 0xffffffff;
  }
  return;
}

