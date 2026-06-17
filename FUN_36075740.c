
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36075740(ulonglong *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = param_3 * 4;
  FUN_36075e00(param_3,param_4,1,&local_c,&param_3,&local_10,&local_8);
  uVar3 = DAT_36228bb8;
  uVar2 = DAT_36228bb0;
  uVar5 = 0;
  uVar4 = 0;
  do {
    do {
      uVar9 = *param_1;
      uVar11 = param_1[1];
      uVar13 = *(ulonglong *)((int)param_1 + iVar1);
      uVar15 = *(ulonglong *)((int)param_1 + iVar1 + 8);
      param_1 = param_1 + 2;
      puVar6 = (undefined8 *)((uVar5 | uVar4) + param_2);
      uVar9 = CONCAT44((int)((uVar9 & _DAT_36228b58) >> 0x20) << 8,(int)(uVar9 & _DAT_36228b58) << 8
                      ) |
              CONCAT44((uint)((uVar9 & _DAT_36228b60) >> 0x25),(uint)(uVar9 & _DAT_36228b60) >> 5) |
              CONCAT44((uint)((uVar9 & _DAT_36228b68) >> 0x33),(uint)(uVar9 & _DAT_36228b68) >> 0x13
                      );
      uVar11 = CONCAT44((int)((uVar11 & _DAT_36228b58) >> 0x20) << 8,
                        (int)(uVar11 & _DAT_36228b58) << 8) |
               CONCAT44((uint)((uVar11 & _DAT_36228b60) >> 0x25),(uint)(uVar11 & _DAT_36228b60) >> 5
                       ) |
               CONCAT44((uint)((uVar11 & _DAT_36228b68) >> 0x33),
                        (uint)(uVar11 & _DAT_36228b68) >> 0x13);
      uVar13 = CONCAT44((int)((uVar13 & _DAT_36228b58) >> 0x20) << 8,
                        (int)(uVar13 & _DAT_36228b58) << 8) |
               CONCAT44((uint)((uVar13 & _DAT_36228b60) >> 0x25),(uint)(uVar13 & _DAT_36228b60) >> 5
                       ) |
               CONCAT44((uint)((uVar13 & _DAT_36228b68) >> 0x33),
                        (uint)(uVar13 & _DAT_36228b68) >> 0x13);
      uVar15 = CONCAT44((int)((uVar15 & _DAT_36228b58) >> 0x20) << 8,
                        (int)(uVar15 & _DAT_36228b58) << 8) |
               CONCAT44((uint)((uVar15 & _DAT_36228b60) >> 0x25),(uint)(uVar15 & _DAT_36228b60) >> 5
                       ) |
               CONCAT44((uint)((uVar15 & _DAT_36228b68) >> 0x33),
                        (uint)(uVar15 & _DAT_36228b68) >> 0x13);
      iVar7 = (int)uVar2;
      iVar8 = (int)((ulonglong)uVar2 >> 0x20);
      uVar10 = CONCAT44((int)(uVar9 >> 0x20) - iVar8,(int)uVar9 - iVar7);
      uVar12 = CONCAT44((int)(uVar11 >> 0x20) - iVar8,(int)uVar11 - iVar7);
      uVar14 = CONCAT44((int)(uVar13 >> 0x20) - iVar8,(int)uVar13 - iVar7);
      uVar16 = CONCAT44((int)(uVar15 >> 0x20) - iVar8,(int)uVar15 - iVar7);
      uVar10 = packssdw(uVar10,uVar10);
      uVar12 = packssdw(uVar12,uVar12);
      uVar14 = packssdw(uVar14,uVar14);
      uVar16 = packssdw(uVar16,uVar16);
      sVar17 = (short)((ulonglong)uVar3 >> 0x10);
      sVar18 = (short)((ulonglong)uVar3 >> 0x20);
      sVar19 = (short)((ulonglong)uVar3 >> 0x30);
      *puVar6 = CONCAT26((short)((ulonglong)uVar14 >> 0x10) + sVar19,
                         CONCAT24((short)uVar14 + sVar18,
                                  CONCAT22((short)((ulonglong)uVar10 >> 0x10) + sVar17,
                                           (short)uVar10 + (short)uVar3)));
      puVar6[1] = CONCAT26((short)((ulonglong)uVar16 >> 0x10) + sVar19,
                           CONCAT24((short)uVar16 + sVar18,
                                    CONCAT22((short)((ulonglong)uVar12 >> 0x10) + sVar17,
                                             (short)uVar12 + (short)uVar3)));
      uVar5 = uVar5 - local_10 & local_c;
    } while (uVar5 != 0);
    param_1 = (ulonglong *)((int)param_1 + iVar1);
    uVar4 = uVar4 - local_8 & param_3;
  } while (uVar4 != 0);
  return;
}

