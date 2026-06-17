
int * __cdecl FUN_36201a20(ushort *param_1,uint *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  char cVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  ushort *puVar13;
  int local_18 [6];
  
  puVar6 = param_2;
  param_2 = (uint *)0x2;
  puVar11 = puVar6;
  puVar13 = param_1;
  puVar5 = (uint *)&stack0xffffffdc;
  do {
    puVar10 = puVar5 + 3;
    uVar2 = *puVar13;
    uVar9 = (uint)uVar2;
    puVar13 = puVar13 + 1;
    *puVar10 = (uVar2 & 0xfffff8ff | (uint)(uVar2 >> 5)) >> 8;
    puVar5[4] = (uVar2 >> 6 & 0x18 | uVar9 & 0x7e0) >> 3;
    uVar9 = (uVar9 & 0x1f) << 3 | (uVar9 & 0x1c) >> 2;
    puVar5[5] = uVar9;
    *puVar11 = ((*puVar10 | 0xffffff00) << 8 | puVar5[4]) << 8 | uVar9;
    param_2 = (uint *)((int)param_2 + -1);
    puVar11 = puVar11 + 1;
    puVar5 = puVar10;
  } while (param_2 != (uint *)0x0);
  if (param_1[1] < *param_1) {
    iVar12 = 0;
    puVar6[3] = 0xff000000;
    puVar6[2] = 0xff000000;
    piVar7 = local_18;
    do {
      iVar3 = *piVar7;
      bVar8 = 0x10 - (char)iVar12;
      iVar12 = iVar12 + 8;
      puVar6[2] = puVar6[2] | (uint)(piVar7[3] + 1 + iVar3 * 2) / 3 << (bVar8 & 0x1f);
      uVar9 = iVar3 + 1 + piVar7[3] * 2;
      puVar6[3] = puVar6[3] | uVar9 / 3 << (bVar8 & 0x1f);
      piVar7 = piVar7 + 1;
    } while (iVar12 < 0x18);
    return (int *)(uVar9 * -0x55555555);
  }
  iVar12 = 0;
  DAT_36383d81 = 1;
  puVar6[2] = 0xff000000;
  puVar6[3] = 0;
  piVar7 = local_18;
  do {
    piVar1 = piVar7 + 3;
    iVar3 = *piVar7;
    piVar7 = piVar7 + 1;
    cVar4 = (char)iVar12;
    iVar12 = iVar12 + 8;
    puVar6[2] = puVar6[2] | ((uint)(*piVar1 + iVar3) >> 1) << (0x10U - cVar4 & 0x1f);
  } while (iVar12 < 0x18);
  return piVar7;
}

