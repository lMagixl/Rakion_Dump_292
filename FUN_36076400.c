
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36076400(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  ulong *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = param_3;
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar10 + 0x240) = *puVar5;
    *(undefined4 *)(iVar10 + 0x244) = puVar5[1];
  }
  iVar10 = *(int *)(DAT_362c3d00 + 8);
  if (param_6 != 0) {
    if (*param_1 != 0) {
      do {
        iVar6 = (**(code **)(*(int *)*param_1 + 8))((int *)*param_1);
      } while (0 < iVar6);
      *param_1 = 0;
    }
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x50))
              (*(int **)(_pGfx + 0xa5c),param_3,param_4,iVar10 != 0,0,param_5,1,param_1);
  }
  piVar1 = (int *)*param_1;
  FUN_36075ab0(param_5);
  iVar11 = 0;
  param_6 = 0;
  param_3 = 0;
  iVar6 = 0;
  if (iVar12 < 1) {
LAB_360764ff:
    if (iVar10 != 0) goto LAB_36076585;
  }
  else {
    do {
      param_3 = iVar6;
      param_6 = iVar11;
      if (param_4 < 1) goto LAB_360764ff;
      FUN_36075c70((uint *)(param_2 + iVar6 * 4),piVar1,iVar12,param_4,iVar11);
      param_3 = iVar6 + iVar12 * param_4;
      iVar12 = iVar12 >> 1;
      param_4 = param_4 >> 1;
      iVar11 = iVar11 + 1;
      if (iVar10 != 0) goto LAB_36076585;
      iVar6 = param_3;
      param_6 = iVar11;
    } while (0 < iVar12);
  }
  if (iVar12 != param_4) {
    iVar10 = param_4;
    if (param_4 <= iVar12) {
      iVar10 = iVar12;
    }
    puVar7 = (ulong *)(param_2 + (param_3 + iVar10 * -2) * 4);
    puVar8 = &DAT_362c5680;
    do {
      if (iVar12 < 1) {
        if (param_4 < 1) break;
        if (iVar12 == 0) {
          iVar12 = 1;
        }
      }
      if (param_4 == 0) {
        param_4 = 1;
      }
      iVar10 = iVar12 * param_4;
      MakeSubMipmap(puVar7,puVar8,iVar10);
      FUN_36075c70(puVar8,piVar1,iVar12,param_4,param_6);
      param_3 = param_3 + iVar10;
      iVar12 = iVar12 >> 1;
      param_4 = param_4 >> 1;
      param_6 = param_6 + 1;
      puVar7 = puVar8;
      puVar8 = puVar8 + iVar10;
    } while( true );
  }
LAB_36076585:
  *(float *)(DAT_362bef74 + 0x174) = *(float *)(DAT_362bef74 + 0x174) + _DAT_36223384;
  *(float *)(DAT_362bef74 + 0x188) = (float)(param_3 * 4) + *(float *)(DAT_362bef74 + 0x188);
  iVar10 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar8 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar2 = *puVar8;
    uVar3 = puVar8[1];
    uVar4 = *(uint *)(iVar10 + 0x248);
    uVar9 = uVar2 - *(uint *)(iVar10 + 0x240);
    *(uint *)(iVar10 + 0x248) = uVar4 + uVar9;
    *(uint *)(iVar10 + 0x24c) =
         *(int *)(iVar10 + 0x24c) +
         ((uVar3 - *(int *)(iVar10 + 0x244)) - (uint)(uVar2 < *(uint *)(iVar10 + 0x240))) +
         (uint)CARRY4(uVar4,uVar9);
    *(undefined4 *)(iVar10 + 0x240) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x244) = 0xffffffff;
  }
  return;
}

