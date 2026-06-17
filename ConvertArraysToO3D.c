
/* public: void __thiscall CObject3D::ConvertArraysToO3D(void) */

void __thiscall CObject3D::ConvertArraysToO3D(CObject3D *this)

{
  float *pfVar1;
  int *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int *piVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  int *piVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  undefined1 local_6c [4];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  int local_c;
  
                    /* 0x4e960  1363  ?ConvertArraysToO3D@CObject3D@@QAEXXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_362119b9;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  this_00 = FUN_3604b080(this,1);
  FUN_3604d800(local_6c,this_00);
  local_c = 0;
  iVar2 = FUN_3604f2b0(&DAT_362bf63c);
  iVar3 = FUN_3604c210(this_00,iVar2);
  iVar14 = 0;
  local_48 = (double)CONCAT44(local_48._4_4_,(undefined4)local_48);
  local_40 = (double)CONCAT44(local_40._4_4_,(undefined4)local_40);
  local_38 = (double)CONCAT44(local_38._4_4_,(undefined4)local_38);
  if (3 < iVar2) {
    puVar17 = (undefined4 *)(iVar3 + 0x50);
    iVar16 = 0;
    iVar4 = (iVar2 - 4U >> 2) + 1;
    iVar14 = iVar4 * 4;
    do {
      local_24 = 0;
      local_48 = (double)*(float *)(iVar16 + DAT_362bf640);
      local_40 = (double)*(float *)(iVar16 + 4 + DAT_362bf640);
      local_38 = (double)*(float *)(iVar16 + 8 + DAT_362bf640);
      puVar18 = &local_48;
      puVar13 = puVar17 + -0x14;
      for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
      local_24 = 0;
      local_48 = (double)*(float *)(iVar16 + 0xc + DAT_362bf640);
      local_40 = (double)*(float *)(iVar16 + 0x10 + DAT_362bf640);
      local_38 = (double)*(float *)(iVar16 + 0x14 + DAT_362bf640);
      puVar18 = &local_48;
      puVar13 = puVar17 + -10;
      for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
      local_24 = 0;
      local_48 = (double)*(float *)(iVar16 + 0x18 + DAT_362bf640);
      local_40 = (double)*(float *)(iVar16 + 0x1c + DAT_362bf640);
      local_38 = (double)*(float *)(iVar16 + 0x20 + DAT_362bf640);
      puVar18 = &local_48;
      puVar13 = puVar17;
      for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
      local_68 = (double)*(float *)(iVar16 + 0x24 + DAT_362bf640);
      local_60 = (double)*(float *)(iVar16 + 0x28 + DAT_362bf640);
      local_58 = (double)*(float *)(iVar16 + 0x2c + DAT_362bf640);
      local_48 = local_68;
      local_40 = local_60;
      local_38 = local_58;
      puVar13 = puVar17 + 10;
      iVar16 = iVar16 + 0x30;
      puVar17 = puVar17 + 0x28;
      iVar4 = iVar4 + -1;
      local_24 = 0;
      puVar18 = &local_48;
      for (iVar15 = 10; iVar15 != 0; iVar15 = iVar15 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
    } while (iVar4 != 0);
  }
  if (iVar14 < iVar2) {
    iVar4 = iVar14 * 0xc;
    iVar2 = iVar2 - iVar14;
    puVar17 = (undefined4 *)(iVar3 + iVar14 * 0x28);
    do {
      iVar14 = iVar4 + 8;
      iVar3 = iVar4 + 4;
      pfVar1 = (float *)(iVar4 + DAT_362bf640);
      iVar4 = iVar4 + 0xc;
      local_68 = (double)*pfVar1;
      local_48 = local_68;
      local_60 = (double)*(float *)(iVar3 + DAT_362bf640);
      local_58 = (double)*(float *)(iVar14 + DAT_362bf640);
      local_40 = local_60;
      local_38 = local_58;
      iVar2 = iVar2 + -1;
      local_24 = 0;
      puVar18 = &local_48;
      puVar13 = puVar17;
      for (iVar14 = 10; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
      puVar17 = puVar17 + 10;
    } while (iVar2 != 0);
  }
  iVar14 = FUN_3604f170(0x362bf624);
  FUN_3604c2b0(this_00 + 10,iVar14);
  iVar2 = 0;
  if (0 < iVar14) {
    do {
      iVar3 = FUN_3604f180(&DAT_362bf624,iVar2);
      pcVar5 = StringDuplicate(*(char **)(iVar3 + 4));
      local_60 = (double)CONCAT44(local_60._4_4_,pcVar5);
      local_c._0_1_ = 1;
      pcVar6 = StringDuplicate(&DAT_36222fa0);
      local_60 = (double)CONCAT44(pcVar6,(undefined4)local_60);
      local_c._0_1_ = 2;
      pcVar7 = StringDuplicate(&DAT_36222fa0);
      local_58 = (double)CONCAT44(local_58._4_4_,pcVar7);
      local_c._0_1_ = 3;
      iVar3 = FUN_3604f3f0(this_00 + 10,iVar2);
      pcVar7 = StringDuplicate(pcVar5);
      StringFree(*(char **)(iVar3 + 8));
      *(char **)(iVar3 + 8) = pcVar7;
      pcVar7 = StringDuplicate(pcVar6);
      StringFree(*(char **)(iVar3 + 0xc));
      *(char **)(iVar3 + 0xc) = pcVar7;
      pcVar7 = StringDuplicate((char *)local_58);
      StringFree(*(char **)(iVar3 + 0x10));
      *(char **)(iVar3 + 0x10) = pcVar7;
      *(undefined4 *)(iVar3 + 0x14) = local_58._4_4_;
      local_c._0_1_ = 5;
      StringFree((char *)local_58);
      local_c._0_1_ = 4;
      StringFree(pcVar6);
      local_c = (uint)local_c._1_3_ << 8;
      StringFree(pcVar5);
      iVar3 = FUN_3604f3f0(this_00 + 10,iVar2);
      iVar4 = FUN_3604f180(&DAT_362bf624,iVar2);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar4 + 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar14);
  }
  local_74 = FUN_3604f200(&DAT_362bf634);
  piVar8 = FUN_3604d100(this_00 + 0x14,local_74);
  local_78 = (undefined4 *)FUN_3604c260(this_00 + 5,local_74);
  iVar14 = FUN_3604c300(this_00 + 0xf,local_74 * 3);
  if (0 < local_74) {
    local_7c = 0;
    piVar8 = piVar8 + 0x13;
    puVar17 = (undefined4 *)(iVar14 + 0x30);
    do {
      pdVar9 = (double *)FUN_3604a710(this_00,*(int *)(local_7c + DAT_362bf638));
      pdVar10 = (double *)FUN_3604a710(this_00,*(int *)(local_7c + 4 + DAT_362bf638));
      pdVar11 = (double *)FUN_3604a710(this_00,*(int *)(local_7c + 8 + DAT_362bf638));
      puVar17[-0xc] = (undefined4)local_68;
      puVar17[-0xb] = local_68._4_4_;
      puVar17[-10] = (undefined4)local_60;
      puVar17[-9] = local_60._4_4_;
      puVar17[-8] = pdVar9;
      puVar17[-7] = pdVar10;
      puVar17[-6] = (undefined4)local_68;
      puVar17[-5] = local_68._4_4_;
      puVar17[-4] = (undefined4)local_60;
      puVar17[-3] = local_60._4_4_;
      puVar17[-2] = pdVar10;
      puVar17[-1] = pdVar11;
      *puVar17 = (undefined4)local_68;
      puVar17[1] = local_68._4_4_;
      puVar17[2] = (undefined4)local_60;
      puVar17[3] = local_60._4_4_;
      puVar17[4] = pdVar11;
      puVar17[5] = pdVar9;
      FUN_3604b1a0(piVar8,3);
      piVar12 = (int *)FUN_3604a700(piVar8,0);
      *piVar12 = (int)(puVar17 + -0xc);
      piVar12 = (int *)FUN_3604a700(piVar8,1);
      *piVar12 = (int)(puVar17 + -6);
      piVar12 = (int *)FUN_3604a700(piVar8,2);
      *piVar12 = (int)puVar17;
      iVar14 = FUN_3604f3f0(this_00 + 10,*(int *)(local_7c + 0x18 + DAT_362bf638));
      piVar8[5] = iVar14;
      piVar8[0x1f] = *(int *)(iVar14 + 0x14);
      puVar13 = FUN_3604fc60(&local_68,pdVar9,pdVar10,pdVar11);
      puVar18 = &local_48;
      for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
        *(undefined4 *)puVar18 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
      }
      puVar18 = &local_48;
      puVar13 = local_78;
      for (iVar14 = 0xc; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar13 = *(undefined4 *)puVar18;
        puVar18 = (undefined8 *)((int)puVar18 + 4);
        puVar13 = puVar13 + 1;
      }
      piVar8[-1] = (int)local_78;
      local_78 = local_78 + 0xc;
      local_7c = local_7c + 0x1c;
      puVar17 = puVar17 + 0x12;
      piVar8 = piVar8 + 0x34;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  local_c = 0xffffffff;
  FUN_3604d820();
  ExceptionList = pvStack_14;
  return;
}

