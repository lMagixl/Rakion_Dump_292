
void __cdecl FUN_36178120(int *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  short sVar7;
  int iVar8;
  int extraout_ECX;
  undefined4 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short sVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  int local_6c;
  undefined2 *local_40;
  undefined4 local_38;
  int local_30;
  int local_28;
  undefined4 local_1c;
  undefined4 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar13 = param_2 * 0x160 + param_1[0x41];
  FUN_36175960((int)param_1);
  uVar21 = 0;
  puVar1 = (uint *)(iVar13 + 0x118);
  FUN_36175870((int)param_1);
  FUN_36178040(uVar21);
  puVar2 = (uint *)(iVar13 + 0x130);
  FUN_361780b0(0);
  uVar3 = *(undefined4 *)(iVar13 + 0xc);
  iVar19 = param_1[0x15];
  bVar6 = (byte)uVar3;
  iVar11 = 1 << (bVar6 & 0x1f);
  iVar4 = *param_1;
  iVar15 = param_1[6];
  iVar18 = iVar19 + 1;
  *puVar1 = *puVar1 | 0x18;
  iVar8 = 0;
  iVar14 = 0;
  local_6c = 0;
  if (0 < iVar18) {
    puVar10 = (undefined2 *)
              (iVar4 + (iVar15 * *(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x38)) * 2);
    local_c = local_c & 0xff000000;
    do {
      iVar4 = 0;
      local_c = (uint)CONCAT21(local_c._2_2_,(char)local_6c) << 8;
      local_40 = puVar10;
      do {
        iVar8 = *(int *)(iVar13 + 0x128);
        local_8 = CONCAT22(*local_40,*local_40);
        local_c = CONCAT31(local_c._1_3_,(char)iVar4);
        *(uint *)(iVar8 + iVar14 * 8) = local_c;
        *(undefined4 *)(iVar8 + 4 + iVar14 * 8) = local_8;
        iVar4 = iVar4 + iVar11;
        local_40 = local_40 + iVar11;
        iVar14 = iVar14 + 1;
      } while (iVar4 < iVar18);
      iVar8 = local_6c + iVar11;
      puVar10 = puVar10 + iVar15 * iVar11;
      local_6c = iVar8;
    } while (iVar8 < iVar18);
  }
  FUN_36175a80(iVar8,param_2,param_1);
  iVar15 = 0;
  local_6c = 0;
  iVar4 = extraout_ECX;
  if (0 < iVar18) {
    do {
      local_28 = 0;
      if (iVar18 != 2 && -1 < iVar19 + -1) {
        do {
          uVar20 = FUN_361bfd6c();
          *(short *)(*(int *)(iVar13 + 0x128) + 0xe + iVar15 * 8) = (short)uVar20;
          local_28 = local_28 + iVar11 * 2;
          iVar15 = iVar15 + 2;
        } while (local_28 < iVar19 + -1);
      }
      iVar15 = iVar15 + 1;
      if (local_6c + iVar11 < iVar18) {
        iVar4 = 0;
        if (iVar18 != 2 && -1 < iVar19 + -1) {
          do {
            uVar20 = FUN_361bfd6c();
            *(short *)(*(int *)(iVar13 + 0x128) + 6 + iVar15 * 8) = (short)uVar20;
            uVar20 = FUN_361bfd6c();
            *(short *)(*(int *)(iVar13 + 0x128) + 0xe + iVar15 * 8) = (short)uVar20;
            iVar4 = iVar4 + iVar11 * 2;
            iVar15 = iVar15 + 2;
          } while (iVar4 < iVar19 + -1);
        }
        uVar20 = FUN_361bfd6c();
        *(short *)(*(int *)(iVar13 + 0x128) + 6 + iVar15 * 8) = (short)uVar20;
      }
      iVar4 = local_6c + iVar11 + iVar11;
      iVar15 = iVar15 + 1;
      local_6c = iVar4;
    } while (iVar4 < iVar18);
  }
  FUN_361760f0(iVar4,(int)param_1);
  *puVar1 = *puVar1 & 0xffffffe7;
  *puVar2 = *puVar2 | 0x18;
  iVar4 = param_1[0x15] >> (bVar6 & 0x1f);
  iVar19 = 0;
  local_30 = 1;
  if (1 < iVar4 + -1) {
    do {
      iVar15 = iVar19 * 6;
      local_28 = iVar4 + -2;
      iVar19 = iVar19 + local_28 * 2;
      uVar21 = (iVar4 + 1) * local_30;
      do {
        uVar5 = uVar21 + 1;
        puVar9 = (undefined4 *)(*(int *)(iVar13 + 0x140) + iVar15);
        sVar17 = (short)iVar4;
        sVar7 = (short)uVar5;
        sVar16 = sVar17 + 1 + sVar7;
        if ((uVar5 & 1) == 0) {
          sVar17 = sVar17 + 2 + sVar7;
          local_38 = CONCAT22(sVar17,sVar16);
          *puVar9 = local_38;
          *(short *)(puVar9 + 1) = sVar7;
          local_1c = CONCAT22(sVar17,sVar7);
          sVar7 = (short)uVar21 + 2;
        }
        else {
          local_14 = CONCAT22(sVar16,sVar7);
          sVar12 = (short)uVar21 + 2;
          *puVar9 = local_14;
          *(short *)(puVar9 + 1) = sVar12;
          local_1c = CONCAT22(sVar16,sVar12);
          sVar7 = sVar17 + 2 + sVar7;
        }
        *(undefined4 *)((int)puVar9 + 6) = local_1c;
        *(short *)((int)puVar9 + 10) = sVar7;
        iVar15 = iVar15 + 0xc;
        local_28 = local_28 + -1;
        uVar21 = uVar5;
      } while (local_28 != 0);
      local_30 = local_30 + 1;
    } while (local_30 < iVar4 + -1);
  }
  FUN_36176260((int)param_1);
  *puVar2 = *puVar2 & 0xffffffe7;
  *(undefined4 *)(iVar13 + 8) = uVar3;
  puVar9 = (undefined4 *)(iVar13 + 0x28);
  iVar19 = 4;
  do {
    if ((int)puVar9[-4] < 0) {
      *puVar9 = 0xffffffff;
    }
    else {
      *puVar9 = *(undefined4 *)(puVar9[-4] * 0x160 + 0xc + param_1[0x41]);
    }
    puVar9 = puVar9 + 1;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  return;
}

