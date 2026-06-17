
void __cdecl FUN_3616ae40(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  int local_4;
  
  puVar2 = RM_GetRenderFlags();
  uVar4 = (ulong)((*puVar2 & 2) != 0);
  uVar5 = *puVar2 & 4;
  if (uVar5 != 0) {
    uVar4 = uVar4 | 2;
  }
  if (uVar4 != 0) {
    FUN_3608f370((byte)uVar4,0x362fe2e8,(float *)&DAT_362fe118,(float *)(param_1 + 0x18));
    if (((uVar4 & 1) != 0) && (iVar3 = shaHasFog((AABBox<float,3> *)&DAT_362a6bdc), iVar3 == 0)) {
      uVar4 = uVar4 & 0xfffffffe;
    }
    if ((uVar5 != 0) && (iVar3 = shaHasHaze((AABBox<float,3> *)&DAT_362a6bdc), iVar3 == 0)) {
      uVar4 = uVar4 & 0xfffffffd;
    }
  }
  local_4 = param_2[0x1e];
  if (local_4 < param_2[0x1f] + local_4) {
    iVar3 = local_4 * 0x7c;
    local_4 = (param_2[0x1f] + local_4) - local_4;
    do {
      puVar1 = (undefined4 *)(DAT_362fe9a4 + iVar3);
      iVar6 = *(int *)(DAT_362fe9a4 + 0x18 + iVar3) * 0x54 +
              *(int *)(**(int **)(DAT_362fe9a4 + iVar3) + 0x18);
      FUN_3616f7a0(iVar6);
      FUN_361692e0(param_1,puVar1,param_2[0x1b]);
      FUN_361685d0((int)param_1,puVar1,param_2,uVar4);
      FUN_3616e810(iVar6);
      iVar3 = iVar3 + 0x7c;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}

