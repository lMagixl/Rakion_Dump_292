
void __fastcall FUN_36175a80(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  int local_54;
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_3[6];
  iVar14 = param_2 * 0x160 + param_3[0x41];
  iVar2 = *(int *)(iVar14 + 0x3c);
  iVar18 = param_3[0x15] >> ((byte)*(undefined4 *)(iVar14 + 0xc) & 0x1f);
  iVar3 = *(int *)(iVar14 + 0x38);
  iVar8 = (iVar18 + 1) * (iVar18 + 1);
  iVar11 = *(int *)(iVar14 + 0x20);
  iVar16 = *(int *)(iVar14 + 0x1c);
  iVar4 = *(int *)(iVar14 + 0x24);
  iVar5 = *param_3;
  local_54 = 0;
  if (-1 < *(int *)(iVar14 + 0x18)) {
    bVar12 = (byte)*(undefined4 *)(*(int *)(iVar14 + 0x18) * 0x160 + 0xc + param_3[0x41]);
    uVar9 = 1 << (bVar12 & 0x1f);
    iVar10 = (param_3[0x15] >> (bVar12 & 0x1f)) / iVar18 + -1;
    if ((0 < iVar10) && (uVar17 = 0, 0 < iVar18)) {
      local_38 = iVar8 * 8;
      local_20 = iVar18;
      do {
        uVar17 = uVar17 + uVar9;
        iVar13 = local_38;
        if (0 < iVar10) {
          local_40 = (undefined2 *)(iVar5 + ((iVar2 + uVar17) * iVar1 + iVar3) * 2);
          local_54 = local_54 + iVar10;
          iVar13 = local_38 + iVar10 * 8;
          local_8 = CONCAT13(local_8._3_1_,0x10000);
          local_24 = iVar10;
          do {
            uVar7 = *local_40;
            if ((uVar9 & uVar17) != 0) {
              uVar19 = FUN_361bfd6c();
              uVar7 = (undefined2)uVar19;
            }
            local_4 = CONCAT22(uVar7,*local_40);
            iVar6 = *(int *)(iVar14 + 0x128);
            local_8 = (uint)CONCAT21(local_8._2_2_,(char)uVar17) << 8;
            *(int *)(local_38 + iVar6) = local_8;
            *(undefined4 *)(local_38 + 4 + iVar6) = local_4;
            local_40 = local_40 + uVar9 * iVar1;
            uVar17 = uVar17 + uVar9;
            local_38 = local_38 + 8;
            local_24 = local_24 + -1;
          } while (local_24 != 0);
        }
        local_38 = iVar13;
        local_20 = local_20 + -1;
      } while (local_20 != 0);
    }
  }
  if (-1 < iVar16) {
    bVar12 = (byte)*(undefined4 *)(iVar16 * 0x160 + 0xc + param_3[0x41]);
    uVar9 = 1 << (bVar12 & 0x1f);
    iVar16 = param_3[0x15];
    iVar10 = (iVar16 >> (bVar12 & 0x1f)) / iVar18 + -1;
    if ((0 < iVar10) && (uVar17 = 0, 0 < iVar18)) {
      local_30 = (local_54 + iVar8) * 8;
      iVar13 = local_30;
      local_18 = iVar18;
      do {
        iVar6 = local_8;
        uVar17 = uVar17 + uVar9;
        iVar15 = iVar13;
        if (0 < iVar10) {
          local_48 = (undefined2 *)(iVar5 + ((iVar2 + uVar17) * iVar1 + iVar16 + iVar3) * 2);
          local_54 = local_54 + iVar10;
          iVar15 = local_30 + iVar10 * 8;
          local_8._0_2_ = (ushort)iVar16 & 0xff;
          local_8._3_1_ = SUB41(iVar6,3);
          local_8._0_3_ = CONCAT12(2,(ushort)local_8);
          local_24 = iVar10;
          do {
            if ((uVar9 & uVar17) == 0) {
              uVar7 = *local_48;
            }
            else {
              uVar19 = FUN_361bfd6c();
              uVar7 = (undefined2)uVar19;
            }
            local_4 = CONCAT22(uVar7,*local_48);
            iVar6 = *(int *)(iVar14 + 0x128);
            local_8._0_2_ = CONCAT11((char)uVar17,(undefined1)local_8);
            *(int *)(iVar6 + iVar13) = local_8;
            *(undefined4 *)(iVar6 + 4 + iVar13) = local_4;
            local_48 = local_48 + uVar9 * iVar1;
            uVar17 = uVar17 + uVar9;
            iVar13 = iVar13 + 8;
            local_24 = local_24 + -1;
            local_30 = iVar15;
          } while (local_24 != 0);
        }
        local_18 = local_18 + -1;
        iVar13 = iVar15;
      } while (local_18 != 0);
    }
  }
  if (-1 < iVar11) {
    bVar12 = (byte)*(undefined4 *)(iVar11 * 0x160 + 0xc + param_3[0x41]);
    uVar9 = 1 << (bVar12 & 0x1f);
    iVar11 = (param_3[0x15] >> (bVar12 & 0x1f)) / iVar18 + -1;
    if ((0 < iVar11) && (uVar17 = 0, 0 < iVar18)) {
      local_2c = (local_54 + iVar8) * 8;
      iVar16 = local_2c;
      local_1c = iVar18;
      do {
        uVar17 = uVar17 + uVar9;
        iVar10 = iVar16;
        if (0 < iVar11) {
          local_40 = (undefined2 *)(iVar5 + (iVar1 * iVar2 + uVar17 + iVar3) * 2);
          local_54 = local_54 + iVar11;
          iVar10 = local_2c + iVar11 * 8;
          local_8 = CONCAT13(local_8._3_1_,0x30000);
          local_18 = iVar11;
          do {
            uVar7 = *local_40;
            if ((uVar9 & uVar17) != 0) {
              uVar19 = FUN_361bfd6c();
              uVar7 = (undefined2)uVar19;
            }
            local_4 = CONCAT22(uVar7,*local_40);
            iVar13 = *(int *)(iVar14 + 0x128);
            local_8 = CONCAT31(local_8._1_3_,(char)uVar17);
            *(int *)(iVar13 + iVar16) = local_8;
            *(undefined4 *)(iVar13 + 4 + iVar16) = local_4;
            local_40 = local_40 + uVar9;
            iVar16 = iVar16 + 8;
            uVar17 = uVar17 + uVar9;
            local_18 = local_18 + -1;
            local_2c = iVar10;
          } while (local_18 != 0);
        }
        local_1c = local_1c + -1;
        iVar16 = iVar10;
      } while (local_1c != 0);
    }
  }
  if (-1 < iVar4) {
    iVar11 = param_3[0x15];
    bVar12 = (byte)*(undefined4 *)(iVar4 * 0x160 + 0xc + param_3[0x41]);
    uVar9 = 1 << (bVar12 & 0x1f);
    iVar16 = (iVar11 >> (bVar12 & 0x1f)) / iVar18 + -1;
    if ((0 < iVar16) && (uVar17 = 0, 0 < iVar18)) {
      local_28 = (local_54 + iVar8) * 8;
      local_1c = iVar18;
      do {
        iVar4 = local_8;
        uVar17 = uVar17 + uVar9;
        iVar8 = local_28;
        if (0 < iVar16) {
          local_8._0_2_ = (ushort)(byte)iVar11 << 8;
          param_3 = (int *)(iVar5 + ((iVar2 + iVar11) * iVar1 + uVar17 + iVar3) * 2);
          iVar8 = local_28 + iVar16 * 8;
          local_8._3_1_ = SUB41(iVar4,3);
          local_8._0_3_ = CONCAT12(4,(ushort)local_8);
          local_18 = iVar16;
          do {
            uVar7 = (undefined2)*param_3;
            if ((uVar9 & uVar17) != 0) {
              uVar19 = FUN_361bfd6c();
              uVar7 = (undefined2)uVar19;
            }
            local_4 = CONCAT22(uVar7,(short)*param_3);
            iVar4 = *(int *)(iVar14 + 0x128);
            local_8 = CONCAT31(local_8._1_3_,(char)uVar17);
            *(int *)(local_28 + iVar4) = local_8;
            *(undefined4 *)(local_28 + 4 + iVar4) = local_4;
            param_3 = (int *)((int)param_3 + uVar9 * 2);
            local_28 = local_28 + 8;
            uVar17 = uVar17 + uVar9;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
        local_28 = iVar8;
        local_1c = local_1c + -1;
      } while (local_1c != 0);
    }
  }
  return;
}

