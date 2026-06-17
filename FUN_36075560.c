
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36075560(ulonglong *param_1,int param_2,uint param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = param_3 * 4;
  FUN_36075e00(param_3,param_4,1,&local_c,&param_3,&local_10,&local_8);
  uVar12 = 0;
  uVar11 = 0;
  uVar14 = CONCAT44(DAT_362c3cfc,DAT_362c3cfc);
  do {
    do {
      uVar15 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (ulonglong *)((int)param_1 + iVar3);
      puVar4 = (ulonglong *)((int)param_1 + iVar3 + 8);
      param_1 = param_1 + 2;
      puVar13 = (undefined8 *)((uVar12 | uVar11) + param_2);
      uVar15 = uVar15 | uVar14;
      uVar17 = *puVar1 | uVar14;
      uVar19 = *puVar2 | uVar14;
      uVar21 = *puVar4 | uVar14;
      uVar15 = CONCAT44((int)((uVar15 & _DAT_36228b70) >> 0x20) << 4,
                        (int)(uVar15 & _DAT_36228b70) << 4) |
               CONCAT44((uint)((uVar15 & _DAT_36228b78) >> 0x28),(uint)(uVar15 & _DAT_36228b78) >> 8
                       ) |
               CONCAT44((uint)((uVar15 & _DAT_36228b80) >> 0x34),
                        (uint)(uVar15 & _DAT_36228b80) >> 0x14) |
               CONCAT44((uint)((uVar15 & _DAT_36228b88) >> 0x30),
                        (uint)(uVar15 & _DAT_36228b88) >> 0x10);
      uVar17 = CONCAT44((int)((uVar17 & _DAT_36228b70) >> 0x20) << 4,
                        (int)(uVar17 & _DAT_36228b70) << 4) |
               CONCAT44((uint)((uVar17 & _DAT_36228b78) >> 0x28),(uint)(uVar17 & _DAT_36228b78) >> 8
                       ) |
               CONCAT44((uint)((uVar17 & _DAT_36228b80) >> 0x34),
                        (uint)(uVar17 & _DAT_36228b80) >> 0x14) |
               CONCAT44((uint)((uVar17 & _DAT_36228b88) >> 0x30),
                        (uint)(uVar17 & _DAT_36228b88) >> 0x10);
      uVar19 = CONCAT44((int)((uVar19 & _DAT_36228b70) >> 0x20) << 4,
                        (int)(uVar19 & _DAT_36228b70) << 4) |
               CONCAT44((uint)((uVar19 & _DAT_36228b78) >> 0x28),(uint)(uVar19 & _DAT_36228b78) >> 8
                       ) |
               CONCAT44((uint)((uVar19 & _DAT_36228b80) >> 0x34),
                        (uint)(uVar19 & _DAT_36228b80) >> 0x14) |
               CONCAT44((uint)((uVar19 & _DAT_36228b88) >> 0x30),
                        (uint)(uVar19 & _DAT_36228b88) >> 0x10);
      uVar21 = CONCAT44((int)((uVar21 & _DAT_36228b70) >> 0x20) << 4,
                        (int)(uVar21 & _DAT_36228b70) << 4) |
               CONCAT44((uint)((uVar21 & _DAT_36228b78) >> 0x28),(uint)(uVar21 & _DAT_36228b78) >> 8
                       ) |
               CONCAT44((uint)((uVar21 & _DAT_36228b80) >> 0x34),
                        (uint)(uVar21 & _DAT_36228b80) >> 0x14) |
               CONCAT44((uint)((uVar21 & _DAT_36228b88) >> 0x30),
                        (uint)(uVar21 & _DAT_36228b88) >> 0x10);
      iVar9 = (int)DAT_36228bb0;
      iVar10 = (int)((ulonglong)DAT_36228bb0 >> 0x20);
      uVar16 = CONCAT44((int)(uVar15 >> 0x20) - iVar10,(int)uVar15 - iVar9);
      uVar18 = CONCAT44((int)(uVar17 >> 0x20) - iVar10,(int)uVar17 - iVar9);
      uVar20 = CONCAT44((int)(uVar19 >> 0x20) - iVar10,(int)uVar19 - iVar9);
      uVar22 = CONCAT44((int)(uVar21 >> 0x20) - iVar10,(int)uVar21 - iVar9);
      uVar16 = packssdw(uVar16,uVar16);
      uVar18 = packssdw(uVar18,uVar18);
      uVar20 = packssdw(uVar20,uVar20);
      uVar22 = packssdw(uVar22,uVar22);
      sVar5 = (short)DAT_36228bb8;
      sVar6 = (short)((ulonglong)DAT_36228bb8 >> 0x10);
      sVar7 = (short)((ulonglong)DAT_36228bb8 >> 0x20);
      sVar8 = (short)((ulonglong)DAT_36228bb8 >> 0x30);
      *puVar13 = CONCAT26((short)((ulonglong)uVar20 >> 0x10) + sVar8,
                          CONCAT24((short)uVar20 + sVar7,
                                   CONCAT22((short)((ulonglong)uVar16 >> 0x10) + sVar6,
                                            (short)uVar16 + sVar5)));
      puVar13[1] = CONCAT26((short)((ulonglong)uVar22 >> 0x10) + sVar8,
                            CONCAT24((short)uVar22 + sVar7,
                                     CONCAT22((short)((ulonglong)uVar18 >> 0x10) + sVar6,
                                              (short)uVar18 + sVar5)));
      uVar12 = uVar12 - local_10 & local_c;
    } while (uVar12 != 0);
    param_1 = (ulonglong *)((int)param_1 + iVar3);
    uVar11 = uVar11 - local_8 & param_3;
  } while (uVar11 != 0);
  return;
}

