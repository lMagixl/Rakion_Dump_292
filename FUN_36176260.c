
void __fastcall FUN_36176260(int param_1)

{
  short sVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  short sVar22;
  int iVar23;
  int iVar24;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_3c;
  int local_38;
  int local_30;
  undefined4 local_22;
  
  iVar5 = *(int *)(param_1 + 0x104);
  iVar2 = in_EAX * 0x160 + iVar5;
  iVar19 = *(int *)(iVar2 + 0xc);
  bVar6 = (byte)iVar19;
  iVar18 = *(int *)(param_1 + 0x54) >> (bVar6 & 0x1f);
  iVar7 = (iVar18 + 1) * (iVar18 + 1);
  local_4c = (iVar18 + -2) * (iVar18 + -2);
  local_5c = 0;
  local_58 = 0;
  iVar23 = local_4c * 2;
  iVar15 = iVar19;
  if ((*(int *)(iVar2 + 0x18) != -1) &&
     (iVar11 = *(int *)(*(int *)(iVar2 + 0x18) * 0x160 + 0xc + iVar5), iVar11 < iVar19)) {
    iVar15 = iVar11;
  }
  iVar11 = 1 << (bVar6 - (char)iVar15 & 0x1f);
  iVar12 = iVar11 * 2;
  iVar15 = iVar19;
  if ((*(int *)(iVar2 + 0x1c) != -1) &&
     (iVar13 = *(int *)(*(int *)(iVar2 + 0x1c) * 0x160 + 0xc + iVar5), iVar13 < iVar19)) {
    iVar15 = iVar13;
  }
  iVar13 = 1 << (bVar6 - (char)iVar15 & 0x1f);
  iVar14 = iVar13 * 2;
  iVar15 = iVar19;
  if ((*(int *)(iVar2 + 0x20) != -1) &&
     (iVar16 = *(int *)(*(int *)(iVar2 + 0x20) * 0x160 + 0xc + iVar5), iVar16 < iVar19)) {
    iVar15 = iVar16;
  }
  iVar15 = 1 << (bVar6 - (char)iVar15 & 0x1f);
  iVar16 = iVar15 * 2;
  if ((*(int *)(iVar2 + 0x24) != -1) &&
     (iVar5 = *(int *)(*(int *)(iVar2 + 0x24) * 0x160 + 0xc + iVar5), iVar5 < iVar19)) {
    iVar19 = iVar5;
  }
  iVar19 = 1 << (bVar6 - (char)iVar19 & 0x1f);
  iVar5 = iVar18 + 2;
  iVar20 = iVar19 * 2;
  local_50 = 0;
  sVar1 = (short)iVar18;
  if (0 < iVar18) {
    iVar24 = (iVar18 + 1) * 2;
    local_4c = local_4c * 0xc;
    local_48 = 0;
    local_3c = local_4c;
    iVar17 = iVar5;
    local_54 = iVar24;
    do {
      iVar21 = 0;
      sVar10 = (short)iVar17;
      iVar3 = local_3c;
      if (0 < iVar12) {
        local_5c = local_5c + iVar12;
        iVar3 = local_3c + iVar11 * 0xc;
        iVar9 = local_48;
        do {
          if (iVar21 == iVar12 + -1 >> 1) {
            iVar8 = local_48 + 1 + iVar18;
          }
          else {
            iVar8 = local_54;
            if (iVar21 != iVar12 + -1) {
              iVar8 = iVar7 + local_58;
              local_58 = local_58 + 1;
            }
          }
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + local_3c);
          *puVar4 = CONCAT22((short)iVar8,(short)iVar9);
          local_3c = local_3c + 6;
          *(short *)(puVar4 + 1) = sVar10;
          iVar21 = iVar21 + 1;
          iVar9 = iVar8;
          local_4c = iVar3;
        } while (iVar21 < iVar12);
      }
      local_50 = local_50 + 2;
      if (local_50 < iVar18) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + iVar3);
        *puVar4 = CONCAT22((short)local_54,sVar10);
        sVar22 = sVar10 + 1 + sVar1;
        *(short *)(puVar4 + 1) = sVar22;
        *(uint *)((int)puVar4 + 6) = CONCAT22((short)local_54,sVar22);
        *(short *)((int)puVar4 + 10) = sVar10 + (sVar1 + 1) * 2;
        local_5c = local_5c + 2;
        iVar3 = local_4c + 0xc;
        local_4c = iVar3;
      }
      local_48 = local_48 + iVar24;
      local_54 = local_54 + iVar24;
      iVar17 = iVar17 + iVar24;
      local_3c = iVar3;
    } while (local_50 < iVar18);
  }
  iVar11 = (iVar18 + 1) * 2;
  iVar12 = iVar11 + -2;
  local_50 = 0;
  if (0 < iVar18) {
    local_48 = (local_5c + iVar23) * 6;
    local_54 = (iVar18 + 1) * 3 + -1;
    local_3c = local_48;
    iVar24 = iVar18;
    do {
      iVar3 = 0;
      sVar10 = (short)iVar12;
      iVar17 = local_3c;
      if (0 < iVar14) {
        local_5c = local_5c + iVar14;
        iVar17 = local_3c + iVar13 * 0xc;
        iVar21 = iVar24;
        do {
          if (iVar3 == iVar14 + -1 >> 1) {
            iVar9 = iVar24 + 1 + iVar18;
          }
          else {
            iVar9 = local_54;
            if (iVar3 != iVar14 + -1) {
              iVar9 = iVar7 + local_58;
              local_58 = local_58 + 1;
            }
          }
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + local_3c);
          *puVar4 = CONCAT22((short)iVar21,(short)iVar9);
          local_3c = local_3c + 6;
          *(short *)(puVar4 + 1) = sVar10;
          iVar3 = iVar3 + 1;
          iVar21 = iVar9;
          local_48 = iVar17;
        } while (iVar3 < iVar14);
      }
      local_50 = local_50 + 2;
      if (local_50 < iVar18) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + iVar17);
        *puVar4 = CONCAT22(sVar10,(short)local_54);
        sVar22 = sVar10 + 1 + sVar1;
        *(short *)(puVar4 + 1) = sVar22;
        *(uint *)((int)puVar4 + 6) = CONCAT22(sVar22,(short)local_54);
        *(short *)((int)puVar4 + 10) = sVar10 + (sVar1 + 1) * 2;
        local_5c = local_5c + 2;
        iVar17 = local_48 + 0xc;
        local_48 = iVar17;
      }
      local_54 = local_54 + iVar11;
      iVar24 = iVar24 + iVar11;
      iVar12 = iVar12 + iVar11;
      local_3c = iVar17;
    } while (local_50 < iVar18);
    if (0 < iVar18) {
      local_44 = (local_5c + iVar23) * 6;
      iVar11 = -iVar5;
      local_3c = local_44;
      do {
        iVar14 = iVar11 + 2 + iVar5;
        iVar13 = 0;
        sVar1 = (short)iVar5;
        iVar12 = local_3c;
        if (0 < iVar16) {
          local_5c = local_5c + iVar16;
          iVar12 = local_3c + iVar15 * 0xc;
          iVar24 = iVar14 + -2;
          do {
            if (iVar13 == iVar16 + -1 >> 1) {
              iVar17 = iVar14 + -1;
            }
            else {
              iVar17 = iVar14;
              if (iVar13 != iVar16 + -1) {
                iVar17 = iVar7 + local_58;
                local_58 = local_58 + 1;
              }
            }
            puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + local_3c);
            *puVar4 = CONCAT22((short)iVar24,(short)iVar17);
            local_3c = local_3c + 6;
            iVar13 = iVar13 + 1;
            *(short *)(puVar4 + 1) = sVar1;
            iVar24 = iVar17;
            local_44 = iVar12;
          } while (iVar13 < iVar16);
        }
        if (iVar14 < iVar18) {
          puVar4 = (undefined4 *)(iVar12 + *(int *)(iVar2 + 0x140));
          *puVar4 = CONCAT22(sVar1,(short)iVar14);
          *(short *)(puVar4 + 1) = sVar1 + 1;
          local_22 = CONCAT22(sVar1 + 1,(short)iVar14);
          *(undefined4 *)((int)puVar4 + 6) = local_22;
          *(short *)((int)puVar4 + 10) = sVar1 + 2;
          local_5c = local_5c + 2;
          iVar12 = local_44 + 0xc;
          local_44 = iVar12;
        }
        iVar5 = iVar5 + 2;
        local_3c = iVar12;
      } while (iVar11 + iVar5 < iVar18);
    }
  }
  iVar5 = (iVar18 + -1) * (iVar18 + 1) + 1;
  if (0 < iVar18) {
    iVar11 = iVar18 * (iVar18 + 1);
    local_5c = (local_5c + iVar23) * 6;
    iVar15 = iVar11 + 2;
    iVar23 = iVar15 - iVar5;
    local_30 = (iVar18 - 1U >> 1) + 1;
    do {
      iVar12 = iVar23 + iVar5;
      iVar13 = 0;
      sVar1 = (short)iVar5;
      if (0 < iVar20) {
        local_38 = local_5c;
        local_5c = local_5c + iVar19 * 0xc;
        iVar14 = (iVar11 - iVar15) + iVar12;
        do {
          if (iVar13 == iVar20 + -1 >> 1) {
            iVar16 = (iVar11 - iVar15) + 1 + iVar12;
          }
          else {
            iVar16 = iVar12;
            if (iVar13 != iVar20 + -1) {
              iVar16 = iVar7 + local_58;
              local_58 = local_58 + 1;
            }
          }
          puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + local_38);
          *puVar4 = CONCAT22((short)iVar16,(short)iVar14);
          *(short *)(puVar4 + 1) = sVar1;
          local_38 = local_38 + 6;
          iVar13 = iVar13 + 1;
          iVar14 = iVar16;
        } while (iVar13 < iVar20);
      }
      if (iVar12 + (2 - iVar15) < iVar18) {
        puVar4 = (undefined4 *)(*(int *)(iVar2 + 0x140) + local_5c);
        *puVar4 = CONCAT22((short)iVar12,sVar1);
        *(short *)(puVar4 + 1) = sVar1 + 1;
        local_22 = CONCAT22((short)iVar12,sVar1 + 1);
        *(undefined4 *)((int)puVar4 + 6) = local_22;
        *(short *)((int)puVar4 + 10) = sVar1 + 2;
        local_5c = local_5c + 0xc;
      }
      iVar5 = iVar5 + 2;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  return;
}

