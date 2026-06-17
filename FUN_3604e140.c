
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3604e140(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int *piVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  char *pcVar20;
  int *piVar21;
  float *pfVar22;
  float *pfVar23;
  undefined4 *puVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int local_6c;
  uint local_68;
  char *local_64;
  int *piStack_60;
  float local_5c;
  char *pcStack_58;
  int *local_54;
  float local_50;
  float local_4c;
  int *piStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_3c [24];
  int *piStack_24;
  float fStack_20;
  float fStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621197f;
  local_c = ExceptionList;
  if (*(int *)((int)DAT_362bf534 + 0x13f) != 0) {
    local_64 = s_Error__Not_all_polygons_are_tria_36228040;
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_64,(ThrowInfo *)&DAT_3624f688);
  }
  local_68 = (uint)((param_1[4] * param_1[8] - param_1[5] * param_1[7]) * *param_1 +
                    (param_1[7] * param_1[3] - param_1[4] * param_1[6]) * param_1[2] +
                    (param_1[5] * param_1[6] - param_1[8] * param_1[3]) * param_1[1] < _DAT_3622376c
                   );
  local_64 = (char *)(float)local_68;
  iVar26 = *(int *)((int)DAT_362bf534 + 0x133);
  ExceptionList = &local_c;
  FUN_3604f220(&DAT_362bf63c,iVar26);
  iVar18 = 0;
  if (3 < iVar26) {
    iVar25 = (iVar26 - 4U >> 2) + 1;
    iVar18 = iVar25 * 4;
    iVar17 = 0;
    do {
      pfVar22 = (float *)(*(int *)((int)DAT_362bf534 + 0x143) + iVar17);
      fVar3 = *pfVar22;
      fVar4 = param_1[3];
      fVar5 = param_1[5];
      fVar6 = pfVar22[2];
      fVar7 = param_1[4];
      fVar8 = pfVar22[1];
      fVar9 = *pfVar22;
      fVar10 = param_1[6];
      fVar11 = pfVar22[1];
      fVar12 = param_1[7];
      fVar13 = pfVar22[2];
      fVar14 = param_1[8];
      pfVar23 = (float *)(iVar17 + DAT_362bf640);
      *pfVar23 = pfVar22[2] * param_1[2] +
                 *pfVar22 * *param_1 +
                 *(float *)(*(int *)((int)DAT_362bf534 + 0x143) + 4 + iVar17) * param_1[1];
      pfVar23[1] = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      pfVar23[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10;
      *(float *)(iVar17 + DAT_362bf640) = -*(float *)(iVar17 + DAT_362bf640);
      *(float *)(iVar17 + 8 + DAT_362bf640) = -*(float *)(iVar17 + 8 + DAT_362bf640);
      pfVar23 = (float *)(*(int *)((int)DAT_362bf534 + 0x143) + 0xc + iVar17);
      fVar3 = *pfVar23;
      fVar4 = param_1[3];
      fVar5 = param_1[5];
      fVar6 = pfVar23[2];
      fVar7 = param_1[4];
      fVar8 = pfVar23[1];
      fVar9 = *pfVar23;
      fVar10 = param_1[6];
      fVar11 = pfVar23[1];
      fVar12 = param_1[7];
      fVar13 = pfVar23[2];
      pfVar22 = (float *)(iVar17 + 0xc + DAT_362bf640);
      fVar14 = param_1[8];
      *pfVar22 = pfVar23[2] * param_1[2] +
                 *pfVar23 * *param_1 +
                 *(float *)(*(int *)((int)DAT_362bf534 + 0x143) + 0x10 + iVar17) * param_1[1];
      pfVar22[1] = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      pfVar22[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10;
      iVar1 = iVar17 + 0x24;
      iVar2 = iVar17 + 0x18;
      *(float *)(iVar17 + 0xc + DAT_362bf640) = -*(float *)(iVar17 + 0xc + DAT_362bf640);
      *(float *)(iVar17 + 0x14 + DAT_362bf640) = -*(float *)(iVar17 + 0x14 + DAT_362bf640);
      pfVar23 = (float *)(*(int *)((int)DAT_362bf534 + 0x143) + iVar2);
      fVar3 = *pfVar23;
      fVar4 = param_1[3];
      fVar5 = param_1[5];
      fVar6 = pfVar23[2];
      fVar7 = param_1[4];
      fVar8 = pfVar23[1];
      fVar9 = *pfVar23;
      fVar10 = param_1[6];
      fVar11 = pfVar23[1];
      fVar12 = param_1[7];
      fVar13 = pfVar23[2];
      fVar14 = param_1[8];
      pfVar22 = (float *)(DAT_362bf640 + iVar2);
      *pfVar22 = pfVar23[2] * param_1[2] +
                 *pfVar23 * *param_1 +
                 *(float *)(*(int *)((int)DAT_362bf534 + 0x143) + 4 + iVar2) * param_1[1];
      pfVar22[1] = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      pfVar22[2] = fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10;
      *(float *)(iVar2 + DAT_362bf640) = -*(float *)(iVar2 + DAT_362bf640);
      *(float *)(iVar17 + 0x20 + DAT_362bf640) = -*(float *)(iVar17 + 0x20 + DAT_362bf640);
      pfVar23 = (float *)(*(int *)((int)DAT_362bf534 + 0x143) + iVar1);
      local_54 = (int *)(pfVar23[2] * param_1[2] +
                        *pfVar23 * *param_1 +
                        *(float *)(*(int *)((int)DAT_362bf534 + 0x143) + 4 + iVar1) * param_1[1]);
      local_50 = param_1[4] * pfVar23[1] + param_1[5] * pfVar23[2] + *pfVar23 * param_1[3];
      fVar3 = *pfVar23;
      fVar4 = param_1[6];
      fVar5 = pfVar23[1];
      fVar6 = param_1[7];
      fVar7 = pfVar23[2];
      fVar8 = param_1[8];
      puVar24 = (undefined4 *)(DAT_362bf640 + iVar1);
      iVar25 = iVar25 + -1;
      *puVar24 = local_54;
      local_4c = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      puVar24[1] = local_50;
      puVar24[2] = local_4c;
      *(float *)(iVar1 + DAT_362bf640) = -*(float *)(iVar1 + DAT_362bf640);
      *(float *)(iVar17 + 0x2c + DAT_362bf640) = -*(float *)(iVar17 + 0x2c + DAT_362bf640);
      iVar17 = iVar17 + 0x30;
    } while (iVar25 != 0);
  }
  if (iVar18 < iVar26) {
    iVar26 = iVar26 - iVar18;
    iVar18 = iVar18 * 0xc;
    do {
      pfVar23 = (float *)(*(int *)((int)DAT_362bf534 + 0x143) + iVar18);
      local_54 = (int *)(pfVar23[2] * param_1[2] +
                        *pfVar23 * *param_1 +
                        *(float *)(*(int *)((int)DAT_362bf534 + 0x143) + 4 + iVar18) * param_1[1]);
      local_50 = param_1[4] * pfVar23[1] + param_1[5] * pfVar23[2] + *pfVar23 * param_1[3];
      fVar3 = *pfVar23;
      fVar4 = param_1[6];
      fVar5 = pfVar23[1];
      fVar6 = param_1[7];
      fVar7 = pfVar23[2];
      fVar8 = param_1[8];
      puVar24 = (undefined4 *)(iVar18 + DAT_362bf640);
      *puVar24 = local_54;
      local_4c = fVar7 * fVar8 + fVar5 * fVar6 + fVar3 * fVar4;
      puVar24[1] = local_50;
      iVar26 = iVar26 + -1;
      puVar24[2] = local_4c;
      *(float *)(iVar18 + DAT_362bf640) = -*(float *)(iVar18 + DAT_362bf640);
      *(float *)(iVar18 + 8 + DAT_362bf640) = -*(float *)(iVar18 + 8 + DAT_362bf640);
      iVar18 = iVar18 + 0xc;
    } while (iVar26 != 0);
  }
  iVar18 = *(int *)((int)DAT_362bf534 + 0x137);
  FUN_3600c0f0(&DAT_362bf654,iVar18);
  iVar26 = 0;
  if (0 < iVar18) {
    do {
      iVar17 = *(int *)((int)DAT_362bf534 + 0x147);
      *(undefined4 *)(DAT_362bf658 + iVar26 * 8) = *(undefined4 *)(iVar17 + iVar26 * 8);
      *(undefined4 *)(DAT_362bf658 + 4 + iVar26 * 8) = *(undefined4 *)(iVar17 + 4 + iVar26 * 8);
      iVar26 = iVar26 + 1;
    } while (iVar26 < iVar18);
  }
  fVar3 = *(float *)((int)DAT_362bf534 + 0x13b);
  local_5c = fVar3;
  if (fVar3 != 0.0) {
    DAT_362bf634 = fVar3;
    DAT_362bf638 = thunk_FUN_361bf99c(((int)fVar3 + 1) * 0x1c);
  }
  local_6c = 0;
  if (0 < (int)fVar3) {
    local_68 = 0;
    do {
      puVar24 = (undefined4 *)(local_68 + DAT_362bf638);
      iVar18 = (**(code **)(*DAT_362bf534 + 0x54))(DAT_362bf534,local_6c);
      if ((float)local_64 == _DAT_3622376c) {
        *puVar24 = *(undefined4 *)(iVar18 + 6);
        puVar24[1] = *(undefined4 *)(iVar18 + 10);
        puVar24[2] = *(undefined4 *)(iVar18 + 0xe);
      }
      else {
        *puVar24 = *(undefined4 *)(iVar18 + 0xe);
        puVar24[1] = *(undefined4 *)(iVar18 + 10);
        puVar24[2] = *(undefined4 *)(iVar18 + 6);
      }
      if ((float)local_64 == _DAT_3622376c) {
        puVar24[3] = *(undefined4 *)(iVar18 + 0x12);
        puVar24[4] = *(undefined4 *)(iVar18 + 0x16);
        puVar24[5] = *(undefined4 *)(iVar18 + 0x1a);
      }
      else {
        puVar24[3] = *(undefined4 *)(iVar18 + 0x1a);
        puVar24[4] = *(undefined4 *)(iVar18 + 0x16);
        puVar24[5] = *(undefined4 *)(iVar18 + 0x12);
      }
      piVar15 = *(int **)(iVar18 + 2);
      bVar16 = true;
      iVar26 = 0;
      iVar18 = FUN_3604f170(0x362bf624);
      if (iVar18 < 1) {
LAB_3604e6e1:
        piVar19 = (int *)FUN_361bf99c(0x1c);
        uStack_4 = 0;
        piStack_60 = piVar19;
        if (piVar19 == (int *)0x0) {
          piVar19 = (int *)0x0;
        }
        else {
          pcVar20 = StringDuplicate(&DAT_36222fa0);
          piVar19[1] = (int)pcVar20;
          FUN_3604ff90(piVar19 + 3);
        }
        uStack_4 = 0xffffffff;
        FUN_36050010(&DAT_362bf624,piVar19);
        iVar18 = FUN_3604f170(0x362bf624);
        iVar18 = iVar18 + -1;
        puVar24[6] = iVar18;
        piVar21 = (int *)FUN_361bf99c(4);
        if (piVar21 == (int *)0x0) {
          piVar21 = (int *)0x0;
        }
        else {
          *piVar21 = 1;
        }
        *piVar21 = local_6c;
        iVar26 = FUN_3604f180(&DAT_362bf624,iVar18);
        FUN_3604ffb0((void *)(iVar26 + 0xc),piVar21);
        *piVar19 = (int)piVar15;
        if ((piVar15 == (int *)0x0) || ((char *)piVar15[1] == (char *)0x0)) {
          iVar26 = FUN_3604f180(&DAT_362bf624,iVar18);
          pcVar20 = StringDuplicate(s_Default_36228068);
          StringFree(*(char **)(iVar26 + 4));
          *(char **)(iVar26 + 4) = pcVar20;
          iVar18 = FUN_3604f180(&DAT_362bf624,iVar18);
          *(undefined4 *)(iVar18 + 8) = 0x7f7f7f00;
        }
        else {
          pcVar20 = StringDuplicate((char *)piVar15[1]);
          uStack_4 = 1;
          pcStack_58 = pcVar20;
          iVar26 = FUN_3604f180(&DAT_362bf624,iVar18);
          piStack_60 = (int *)StringDuplicate(pcVar20);
          StringFree(*(char **)(iVar26 + 4));
          *(int **)(iVar26 + 4) = piStack_60;
          uStack_4 = 0xffffffff;
          StringFree(pcVar20);
          (**(code **)(*piVar15 + 0x18))(piVar15,0xc9,auStack_3c);
          fStack_20 = fStack_44;
          piStack_24 = piStack_48;
          fStack_1c = fStack_40;
          (**(code **)(*piVar15 + 0x18))(piVar15,0xc9,auStack_3c);
          local_5c = fStack_44;
          piStack_60 = piStack_48;
          pcStack_58 = (char *)fStack_40;
          (**(code **)(*piVar15 + 0x18))(piVar15,0xc9,auStack_3c);
          local_54 = piStack_24;
          local_50 = fStack_20;
          local_4c = fStack_1c;
          uVar27 = FUN_361bfd6c();
          FUN_361bfd6c();
          uVar28 = FUN_361bfd6c();
          uVar29 = FUN_361bfd6c();
          FUN_361bfd6c();
          FUN_361bfd6c();
          iVar18 = FUN_3604f180(&DAT_362bf624,iVar18);
          *(uint *)(iVar18 + 8) =
               ((uint)(byte)uVar27 << 8 | ((uint)uVar28 & 0xff) << 0x10 | (uint)uVar29 & 0xff) << 8;
        }
      }
      else {
        do {
          piVar19 = (int *)FUN_3604f180(&DAT_362bf624,iVar26);
          if ((int *)*piVar19 == piVar15) {
            puVar24[6] = iVar26;
            piVar19 = (int *)FUN_361bf99c(4);
            if (piVar19 == (int *)0x0) {
              piVar19 = (int *)0x0;
            }
            else {
              *piVar19 = 1;
            }
            *piVar19 = local_6c;
            iVar18 = FUN_3604f180(&DAT_362bf624,iVar26);
            FUN_3604ffb0((void *)(iVar18 + 0xc),piVar19);
            bVar16 = false;
          }
          iVar26 = iVar26 + 1;
          iVar18 = FUN_3604f170(0x362bf624);
        } while (iVar26 < iVar18);
        if (bVar16) goto LAB_3604e6e1;
      }
      local_6c = local_6c + 1;
      local_68 = local_68 + 0x1c;
    } while (local_6c < (int)local_5c);
  }
  ExceptionList = local_c;
  return;
}

