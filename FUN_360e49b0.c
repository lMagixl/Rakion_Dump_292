
uint * __thiscall FUN_360e49b0(void *this,uint param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint *puVar7;
  bool bVar8;
  
  iVar2 = *(int *)((int)this + 4);
  iVar3 = 0;
  if (0 < iVar2) {
    puVar7 = (uint *)(*(int *)((int)this + 0x10) + (param_1 % *(uint *)this) * iVar2 * 8);
    do {
      if ((puVar7[1] != 0) && (*puVar7 == param_1)) {
        pbVar6 = (byte *)*param_2;
        pbVar4 = *(byte **)(puVar7[1] + 4);
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < *pbVar6;
          if (bVar1 != *pbVar6) {
LAB_360e4a0c:
            iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
            goto LAB_360e4a11;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < pbVar6[1];
          if (bVar1 != pbVar6[1]) goto LAB_360e4a0c;
          pbVar4 = pbVar4 + 2;
          pbVar6 = pbVar6 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_360e4a11:
        if (iVar5 == 0) {
          return puVar7;
        }
      }
      iVar3 = iVar3 + 1;
      puVar7 = puVar7 + 2;
    } while (iVar3 < iVar2);
  }
  return (uint *)0x0;
}

