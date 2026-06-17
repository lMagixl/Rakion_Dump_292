
int __thiscall FUN_360e4a30(void *this,uint param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  bool bVar8;
  int local_4;
  
  iVar2 = *(int *)((int)this + 4);
  local_4 = 0;
  iVar7 = (param_1 % *(uint *)this) * iVar2;
  if (0 < iVar2) {
    puVar3 = (uint *)(*(int *)((int)this + 0x10) + iVar7 * 8);
    do {
      if ((puVar3[1] != 0) && (*puVar3 == param_1)) {
        pbVar6 = (byte *)*param_2;
        pbVar4 = *(byte **)(puVar3[1] + 4);
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_360e4a94:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_360e4a99;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_360e4a94;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_360e4a99:
        if (iVar5 == 0) {
          return iVar7;
        }
      }
      local_4 = local_4 + 1;
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (local_4 < iVar2);
  }
  return -1;
}

