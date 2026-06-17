
undefined4 FUN_361d3c9e(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int *extraout_ECX;
  float *pfVar18;
  int iVar19;
  int unaff_EBP;
  int *piVar20;
  
  FUN_3620d000();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  uVar9 = extraout_ECX[2];
  *(int **)(unaff_EBP + -0x40) = extraout_ECX;
  if ((char)uVar9 != '\x03') {
    uVar13 = 0x80004005;
    goto LAB_361d4077;
  }
  *(uint *)(unaff_EBP + -0x10) = ~(uVar9 >> 0x11) & 1;
  puVar14 = FUN_361d3b9e(~(uVar9 >> 0x10) & 1);
  *(uint **)(unaff_EBP + -0x30) = puVar14;
  puVar14 = FUN_361d3b9e(*(int *)(unaff_EBP + -0x10));
  *(uint **)(unaff_EBP + -0x10) = puVar14;
  if ((*(int *)(unaff_EBP + -0x30) == 0) || (puVar14 == (uint *)0x0)) {
LAB_361d404b:
    uVar13 = 0x8007000e;
  }
  else {
    iVar16 = *(int *)(extraout_ECX[1] + 0x1058);
    iVar15 = FUN_361bf99c(iVar16 << 4);
    *(int *)(unaff_EBP + -0x14) = iVar15;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar15 == 0) {
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      iVar16 = *(int *)(unaff_EBP + -0x20);
    }
    else {
      FUN_36006680(iVar15,0x10,iVar16,&LAB_361c12a5);
      iVar16 = *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + -0x20) = iVar16;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x14) = iVar16;
    if (iVar16 == 0) goto LAB_361d404b;
    iVar16 = *(int *)(*extraout_ECX + 0x1058);
    iVar15 = FUN_361bf99c(iVar16 << 5);
    *(int *)(unaff_EBP + -0x1c) = iVar15;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (iVar15 == 0) {
      iVar16 = 0;
    }
    else {
      FUN_36006680(iVar15,0x10,iVar16 << 1,&LAB_361c12a5);
      iVar16 = *(int *)(unaff_EBP + -0x1c);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x1c) = iVar16;
    if (iVar16 == 0) goto LAB_361d404b;
    iVar15 = *(int *)(*extraout_ECX + 0x1058);
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
    *(int *)(unaff_EBP + -0x2c) = iVar16;
    if (*(int *)(extraout_ECX[1] + 0x105c) != 0) {
      piVar20 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
      *(int **)(unaff_EBP + -0x38) = piVar20;
      iVar16 = iVar15 * 0x10 + iVar16;
      piVar17 = extraout_ECX;
      do {
        iVar15 = piVar20[-2];
        *(undefined4 *)(unaff_EBP + -0x34) = 0;
        iVar19 = iVar16;
        if (iVar15 != *(int *)(unaff_EBP + -0x24)) {
          iVar10 = *(int *)(unaff_EBP + -0x18);
          if (iVar15 == iVar10) {
            iVar19 = *(int *)(unaff_EBP + -0x2c);
            *(undefined4 *)(unaff_EBP + -0x18) = 0xffffffff;
            *(int *)(unaff_EBP + -0x2c) = iVar16;
            *(int *)(unaff_EBP + -0x24) = iVar10;
          }
          else {
            piVar11 = (int *)*piVar17;
            *(int *)(unaff_EBP + -0x24) = iVar15;
            (**(code **)(*piVar11 + 4))
                      (*(undefined4 *)(unaff_EBP + -0x24),0,*(undefined4 *)(unaff_EBP + -0x2c));
          }
        }
        iVar16 = *piVar20;
        if (iVar16 != *(int *)(unaff_EBP + -0x18)) {
          iVar15 = *(int *)*piVar17;
          *(int *)(unaff_EBP + -0x18) = iVar16;
          (**(code **)(iVar15 + 4))(iVar16,0,iVar19);
        }
        if (*(int *)(piVar17[1] + 0x1058) != 0) {
          piVar17 = (int *)(*(int *)(unaff_EBP + -0x30) + 8);
          *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(unaff_EBP + -0x20);
          do {
            iVar16 = *piVar17;
            fVar2 = (float)piVar17[1];
            pfVar1 = (float *)(iVar16 * 0x10 + iVar19);
            *(float *)(unaff_EBP + -0x50) = fVar2 * *pfVar1;
            *(float *)(unaff_EBP + -0x4c) = fVar2 * pfVar1[1];
            *(float *)(unaff_EBP + -0x48) = fVar2 * pfVar1[2];
            fVar3 = pfVar1[3];
            iVar15 = piVar17[-2];
            fVar4 = (float)piVar17[-1];
            pfVar1 = (float *)(iVar15 * 0x10 + iVar19);
            fVar5 = *pfVar1;
            *(float *)(unaff_EBP + -0x9c) = fVar4 * pfVar1[1];
            *(float *)(unaff_EBP + -0x98) = fVar4 * pfVar1[2];
            pfVar18 = (float *)(iVar16 * 0x10 + *(int *)(unaff_EBP + -0x2c));
            *(float *)(unaff_EBP + -0x94) = fVar4 * pfVar1[3];
            *(float *)(unaff_EBP + -0x80) = fVar4 * fVar5 + *(float *)(unaff_EBP + -0x50);
            *(float *)(unaff_EBP + -0x7c) =
                 *(float *)(unaff_EBP + -0x9c) + *(float *)(unaff_EBP + -0x4c);
            *(float *)(unaff_EBP + -0x78) =
                 *(float *)(unaff_EBP + -0x98) + *(float *)(unaff_EBP + -0x48);
            fVar4 = (float)piVar20[1];
            *(float *)(unaff_EBP + -0xb0) = *(float *)(unaff_EBP + -0x80) * fVar4;
            *(float *)(unaff_EBP + -0xac) = *(float *)(unaff_EBP + -0x7c) * fVar4;
            *(float *)(unaff_EBP + -0xa8) = *(float *)(unaff_EBP + -0x78) * fVar4;
            fVar5 = (float)piVar17[1];
            *(float *)(unaff_EBP + -0xc0) = fVar5 * *pfVar18;
            *(float *)(unaff_EBP + -0xbc) = fVar5 * pfVar18[1];
            *(float *)(unaff_EBP + -0xb8) = fVar5 * pfVar18[2];
            fVar6 = pfVar18[3];
            pfVar1 = (float *)(iVar15 * 0x10 + *(int *)(unaff_EBP + -0x2c));
            fVar7 = (float)piVar17[-1];
            piVar17 = piVar17 + 4;
            fVar8 = *pfVar1;
            *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 1;
            uVar9 = *(uint *)(unaff_EBP + -0x34);
            *(float *)(unaff_EBP + -0x5c) = fVar7 * pfVar1[1];
            *(float *)(unaff_EBP + -0x58) = fVar7 * pfVar1[2];
            iVar16 = *(int *)(unaff_EBP + -0x40);
            *(float *)(unaff_EBP + -0x54) = fVar7 * pfVar1[3];
            *(float *)(unaff_EBP + -0x70) = fVar7 * fVar8 + *(float *)(unaff_EBP + -0xc0);
            *(float *)(unaff_EBP + -0x6c) =
                 *(float *)(unaff_EBP + -0x5c) + *(float *)(unaff_EBP + -0xbc);
            *(float *)(unaff_EBP + -0x68) =
                 *(float *)(unaff_EBP + -0x58) + *(float *)(unaff_EBP + -0xb8);
            fVar7 = (float)piVar20[-1];
            puVar12 = *(undefined4 **)(unaff_EBP + -0x3c);
            *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + 0x10;
            *(float *)(unaff_EBP + -0x90) = *(float *)(unaff_EBP + -0x70) * fVar7;
            *(float *)(unaff_EBP + -0x8c) = *(float *)(unaff_EBP + -0x6c) * fVar7;
            *(float *)(unaff_EBP + -0x88) = *(float *)(unaff_EBP + -0x68) * fVar7;
            *(float *)(unaff_EBP + -0xd0) =
                 *(float *)(unaff_EBP + -0x90) + *(float *)(unaff_EBP + -0xb0);
            *(float *)(unaff_EBP + -0xcc) =
                 *(float *)(unaff_EBP + -0x8c) + *(float *)(unaff_EBP + -0xac);
            *(float *)(unaff_EBP + -200) =
                 *(float *)(unaff_EBP + -0x88) + *(float *)(unaff_EBP + -0xa8);
            *(float *)(unaff_EBP + -0xc4) =
                 (*(float *)(unaff_EBP + -0x54) + fVar5 * fVar6) * fVar7 +
                 (*(float *)(unaff_EBP + -0x94) + fVar2 * fVar3) * fVar4;
            *puVar12 = *(undefined4 *)(unaff_EBP + -0xd0);
            puVar12[1] = *(undefined4 *)(unaff_EBP + -0xcc);
            puVar12[2] = *(undefined4 *)(unaff_EBP + -200);
            puVar12[3] = *(undefined4 *)(unaff_EBP + -0xc4);
            piVar20 = *(int **)(unaff_EBP + -0x38);
          } while (uVar9 < *(uint *)(*(int *)(iVar16 + 4) + 0x1058));
          piVar17 = *(int **)(unaff_EBP + -0x40);
        }
        (**(code **)(*(int *)piVar17[1] + 8))
                  (*(undefined4 *)(unaff_EBP + -0x28),0,*(undefined4 *)(unaff_EBP + -0x20));
        iVar16 = piVar17[1];
        piVar20 = piVar20 + 4;
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
        uVar9 = *(uint *)(iVar16 + 0x105c);
        *(int **)(unaff_EBP + -0x38) = piVar20;
        iVar16 = iVar19;
      } while (*(uint *)(unaff_EBP + -0x28) < uVar9);
    }
    uVar13 = 0;
  }
  operator_delete(*(void **)(unaff_EBP + -0x30));
  operator_delete(*(void **)(unaff_EBP + -0x10));
  operator_delete(*(void **)(unaff_EBP + -0x14));
  operator_delete(*(void **)(unaff_EBP + -0x1c));
LAB_361d4077:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar13;
}

