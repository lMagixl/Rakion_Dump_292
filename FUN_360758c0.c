
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_360758c0(ulonglong *param_1,int param_2,uint param_3,uint param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar3 = param_3 * 4;
  FUN_36075e00(param_3,param_4,1,&local_c,&param_3,&local_10,&local_8);
  uVar5 = DAT_36228bb8;
  uVar4 = DAT_36228bb0;
  uVar7 = 0;
  uVar6 = 0;
  do {
    do {
      uVar11 = *param_1;
      puVar1 = param_1 + 1;
      puVar2 = (ulonglong *)((int)param_1 + iVar3);
      uVar15 = *(ulonglong *)((int)param_1 + iVar3 + 8);
      param_1 = param_1 + 2;
      puVar8 = (undefined8 *)((uVar7 | uVar6) + param_2);
      uVar17 = uVar11 & _DAT_36228ba8;
      uVar18 = *puVar1 & _DAT_36228ba8;
      uVar11 = uVar11 & _DAT_36228ba0 | CONCAT44((uint)(uVar17 >> 0x30),(uint)uVar17 >> 0x10);
      uVar17 = *puVar1 & _DAT_36228ba0 | CONCAT44((uint)(uVar18 >> 0x30),(uint)uVar18 >> 0x10);
      uVar18 = *puVar2 & _DAT_36228ba8;
      uVar19 = uVar15 & _DAT_36228ba8;
      uVar18 = *puVar2 & _DAT_36228ba0 | CONCAT44((uint)(uVar18 >> 0x30),(uint)uVar18 >> 0x10);
      uVar15 = uVar15 & _DAT_36228ba0 | CONCAT44((uint)(uVar19 >> 0x30),(uint)uVar19 >> 0x10);
      iVar9 = (int)uVar4;
      iVar10 = (int)((ulonglong)uVar4 >> 0x20);
      uVar12 = CONCAT44((int)(uVar11 >> 0x20) - iVar10,(int)uVar11 - iVar9);
      uVar13 = CONCAT44((int)(uVar17 >> 0x20) - iVar10,(int)uVar17 - iVar9);
      uVar14 = CONCAT44((int)(uVar18 >> 0x20) - iVar10,(int)uVar18 - iVar9);
      uVar16 = CONCAT44((int)(uVar15 >> 0x20) - iVar10,(int)uVar15 - iVar9);
      uVar12 = packssdw(uVar12,uVar12);
      uVar13 = packssdw(uVar13,uVar13);
      uVar14 = packssdw(uVar14,uVar14);
      uVar16 = packssdw(uVar16,uVar16);
      sVar20 = (short)((ulonglong)uVar5 >> 0x10);
      sVar21 = (short)((ulonglong)uVar5 >> 0x20);
      sVar22 = (short)((ulonglong)uVar5 >> 0x30);
      *puVar8 = CONCAT26((short)((ulonglong)uVar14 >> 0x10) + sVar22,
                         CONCAT24((short)uVar14 + sVar21,
                                  CONCAT22((short)((ulonglong)uVar12 >> 0x10) + sVar20,
                                           (short)uVar12 + (short)uVar5)));
      puVar8[1] = CONCAT26((short)((ulonglong)uVar16 >> 0x10) + sVar22,
                           CONCAT24((short)uVar16 + sVar21,
                                    CONCAT22((short)((ulonglong)uVar13 >> 0x10) + sVar20,
                                             (short)uVar13 + (short)uVar5)));
      uVar7 = uVar7 - local_10 & local_c;
    } while (uVar7 != 0);
    param_1 = (ulonglong *)((int)param_1 + iVar3);
    uVar6 = uVar6 - local_8 & param_3;
  } while (uVar6 != 0);
  return;
}

