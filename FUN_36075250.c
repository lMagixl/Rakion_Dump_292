
void __cdecl FUN_36075250(ulonglong *param_1,int param_2,uint param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = param_3 * 4;
  FUN_36075e00(param_3,param_4,2,&local_c,&param_3,&local_10,&local_8);
  uVar15 = 0;
  uVar10 = 0;
  uVar19 = CONCAT44(DAT_362c3cfc,DAT_362c3cfc);
  do {
    do {
      uVar5 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (ulonglong *)((int)param_1 + iVar3);
      puVar4 = (ulonglong *)((int)param_1 + iVar3 + 8);
      param_1 = param_1 + 2;
      puVar16 = (undefined8 *)((uVar15 | uVar10) + param_2);
      uVar17 = *puVar2 | uVar19;
      uVar18 = *puVar4 | uVar19;
      uVar6 = (uint)(uVar5 | uVar19);
      uVar11 = (uint)((uVar5 | uVar19) >> 0x20);
      uVar7 = (uint)(*puVar1 | uVar19);
      uVar12 = (uint)((*puVar1 | uVar19) >> 0x20);
      uVar8 = (uint)uVar17;
      uVar13 = (uint)(uVar17 >> 0x20);
      uVar9 = (uint)uVar18;
      uVar14 = (uint)(uVar18 >> 0x20);
      *puVar16 = CONCAT44(((uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 << 0x18) >> 8
                          | uVar11 & 0xff000000,
                          ((uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) >> 8 |
                          uVar6 & 0xff000000);
      puVar16[1] = CONCAT44(((uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 | uVar13 << 0x18) >>
                            8 | uVar13 & 0xff000000,
                            ((uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18) >> 8 |
                            uVar8 & 0xff000000);
      puVar16[2] = CONCAT44(((uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18) >>
                            8 | uVar12 & 0xff000000,
                            ((uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18) >> 8 |
                            uVar7 & 0xff000000);
      puVar16[3] = CONCAT44(((uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18) >>
                            8 | uVar14 & 0xff000000,
                            ((uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18) >> 8 |
                            uVar9 & 0xff000000);
      uVar15 = uVar15 - local_10 & local_c;
    } while (uVar15 != 0);
    param_1 = (ulonglong *)((int)param_1 + iVar3);
    uVar10 = uVar10 - local_8 & param_3;
  } while (uVar10 != 0);
  return;
}

