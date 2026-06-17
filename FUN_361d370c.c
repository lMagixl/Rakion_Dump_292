
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361d370c(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  int *extraout_ECX;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  int unaff_EBP;
  int iVar16;
  int iVar17;
  
  FUN_3620d000();
  if ((char)extraout_ECX[2] == '\x05') {
    iVar16 = *extraout_ECX;
    uVar6 = *(uint *)(iVar16 + 0x1058);
    iVar11 = extraout_ECX[1];
    if ((((*(uint *)(iVar11 + 0x1058) == uVar6 >> 1) ||
         ((*(uint *)(iVar11 + 0x1058) == 1 && (uVar6 == 1)))) &&
        ((*(uint *)(iVar11 + 0x105c) == *(uint *)(iVar16 + 0x105c) >> 1 ||
         ((*(uint *)(iVar11 + 0x105c) == 1 && (*(int *)(iVar16 + 0x105c) == 1)))))) &&
       (*(uint *)(iVar11 + 0x1060) == *(uint *)(iVar16 + 0x1060) >> 1)) {
      if ((1 < uVar6) && ((uVar6 & 1) != 0)) {
        *(uint *)(iVar16 + 0x1058) = uVar6 & 0xfffffffe;
        piVar1 = (int *)(*extraout_ECX + 0x1064);
        *piVar1 = *piVar1 - *(int *)(*extraout_ECX + 0x1068);
      }
      uVar6 = *(uint *)(*extraout_ECX + 0x105c);
      if (1 < uVar6) {
        *(uint *)(*extraout_ECX + 0x105c) = uVar6 & 0xfffffffe;
      }
      uVar6 = *(uint *)(*extraout_ECX + 0x1060);
      if (1 < uVar6) {
        *(uint *)(*extraout_ECX + 0x1060) = uVar6 & 0xfffffffe;
      }
      iVar16 = *(int *)(extraout_ECX[1] + 0x1058);
      iVar11 = FUN_361bf99c(iVar16 << 4);
      *(int *)(unaff_EBP + -0x14) = iVar11;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar11 == 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      else {
        FUN_36006680(iVar11,0x10,iVar16,&LAB_361c12a5);
        *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x20) == 0) {
        uVar10 = 0x8007000e;
      }
      else {
        iVar16 = *(int *)(*extraout_ECX + 0x1058);
        if (*(int *)(*extraout_ECX + 0x105c) == 1) {
          iVar11 = FUN_361bf99c(iVar16 << 5);
          *(int *)(unaff_EBP + -0x14) = iVar11;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          if (iVar11 == 0) {
            iVar12 = 0;
          }
          else {
            FUN_36006680(iVar11,0x10,iVar16 << 1,&LAB_361c12a5);
            iVar12 = *(int *)(unaff_EBP + -0x14);
          }
          iVar11 = *(int *)(*extraout_ECX + 0x1058);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar16 = iVar11 * 0x10 + iVar12;
          *(int *)(unaff_EBP + -0x38) = iVar12;
          *(int *)(unaff_EBP + -0x18) = iVar12;
          *(int *)(unaff_EBP + -0x30) = iVar16;
          *(int *)(unaff_EBP + -0x1c) = iVar12;
          *(int *)(unaff_EBP + -0x28) = iVar16;
          iVar17 = iVar16;
        }
        else {
          iVar11 = FUN_361bf99c(iVar16 << 6);
          *(int *)(unaff_EBP + -0x14) = iVar11;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (iVar11 == 0) {
            iVar16 = 0;
          }
          else {
            FUN_36006680(iVar11,0x10,iVar16 << 2,&LAB_361c12a5);
            iVar16 = *(int *)(unaff_EBP + -0x14);
          }
          iVar11 = *(int *)(*extraout_ECX + 0x1058);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          *(int *)(unaff_EBP + -0x30) = iVar11 * 0x10 + iVar16;
          iVar17 = *(int *)(unaff_EBP + -0x30);
          *(int *)(unaff_EBP + -0x1c) = iVar11 * 0x20 + iVar16;
          *(int *)(unaff_EBP + -0x28) = iVar11 * 0x30 + iVar16;
          iVar12 = *(int *)(unaff_EBP + -0x1c);
          *(int *)(unaff_EBP + -0x38) = iVar16;
          *(int *)(unaff_EBP + -0x18) = iVar16;
          iVar16 = *(int *)(unaff_EBP + -0x28);
        }
        if (*(int *)(unaff_EBP + -0x38) == 0) {
          uVar10 = 0x8007000e;
        }
        else {
          if (iVar11 == 1) {
            *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x18);
            *(int *)(unaff_EBP + -0x40) = iVar17;
          }
          else {
            *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x18) + 0x10;
            iVar12 = iVar12 + 0x10;
            *(int *)(unaff_EBP + -0x40) = iVar17 + 0x10;
            iVar16 = iVar16 + 0x10;
          }
          iVar11 = extraout_ECX[1];
          *(undefined4 *)(unaff_EBP + -0x24) = 0;
          iVar7 = *(int *)(iVar11 + 0x1060);
          *(int *)(unaff_EBP + -0x44) = iVar12;
          *(int *)(unaff_EBP + -0x14) = iVar16;
          if (iVar7 != 0) {
            do {
              *(undefined4 *)(unaff_EBP + -0x10) = 0;
              if (*(int *)(iVar11 + 0x105c) != 0) {
                do {
                  iVar16 = *(int *)(unaff_EBP + -0x24) * 2;
                  (**(code **)(*(int *)*extraout_ECX + 4))
                            (*(int *)(unaff_EBP + -0x10) * 2,iVar16,
                             *(undefined4 *)(unaff_EBP + -0x18));
                  if (iVar17 != *(int *)(unaff_EBP + -0x18)) {
                    (**(code **)(*(int *)*extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2,iVar16 + 1,iVar17);
                  }
                  if (*(int *)(unaff_EBP + -0x1c) != *(int *)(unaff_EBP + -0x18)) {
                    (**(code **)(*(int *)*extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2 + 1,iVar16,
                               *(int *)(unaff_EBP + -0x1c));
                  }
                  iVar11 = *(int *)(unaff_EBP + -0x28);
                  if ((iVar11 != iVar17) && (iVar11 != *(int *)(unaff_EBP + -0x1c))) {
                    (**(code **)(*(int *)*extraout_ECX + 4))
                              (*(int *)(unaff_EBP + -0x10) * 2 + 1,iVar16 + 1,iVar11);
                  }
                  iVar16 = extraout_ECX[1];
                  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                  fVar9 = _DAT_36249378;
                  if (*(int *)(iVar16 + 0x1058) != 0) {
                    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x20);
                    do {
                      iVar16 = *(int *)(unaff_EBP + -0x2c) * 0x20;
                      pfVar13 = (float *)(*(int *)(unaff_EBP + -0x3c) + iVar16);
                      fVar2 = *pfVar13;
                      pfVar15 = (float *)(*(int *)(unaff_EBP + -0x18) + iVar16);
                      fVar3 = *pfVar15;
                      fVar4 = pfVar13[1];
                      fVar5 = pfVar15[1];
                      *(float *)(unaff_EBP + -0x8c) = pfVar13[2] + pfVar15[2];
                      pfVar14 = (float *)(iVar16 + iVar17);
                      *(float *)(unaff_EBP + -0x88) = pfVar13[3] + pfVar15[3];
                      *(float *)(unaff_EBP + -0xb4) = fVar2 + fVar3 + *pfVar14;
                      fVar2 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      pfVar13 = (float *)(*(int *)(unaff_EBP + -0x40) + iVar16);
                      *(float *)(unaff_EBP + -0xa8) = *(float *)(unaff_EBP + -0x88) + pfVar14[3];
                      *(float *)(unaff_EBP + -0x84) = *(float *)(unaff_EBP + -0xb4) + *pfVar13;
                      *(float *)(unaff_EBP + -0x80) = fVar4 + fVar5 + fVar2 + pfVar13[1];
                      fVar2 = pfVar13[2];
                      fVar4 = pfVar13[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x1c) + iVar16);
                      *(float *)(unaff_EBP + -0x54) = *(float *)(unaff_EBP + -0x84) + *pfVar14;
                      *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x80) + pfVar14[1];
                      *(float *)(unaff_EBP + -0x4c) =
                           *(float *)(unaff_EBP + -0x8c) + fVar3 + fVar2 + pfVar14[2];
                      fVar2 = pfVar14[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x44) + iVar16);
                      fVar3 = *pfVar14;
                      *(float *)(unaff_EBP + -0x60) = *(float *)(unaff_EBP + -0x50) + pfVar14[1];
                      *(float *)(unaff_EBP + -0x5c) = *(float *)(unaff_EBP + -0x4c) + pfVar14[2];
                      *(float *)(unaff_EBP + -0x58) =
                           *(float *)(unaff_EBP + -0xa8) + fVar4 + fVar2 + pfVar14[3];
                      pfVar14 = (float *)(*(int *)(unaff_EBP + -0x28) + iVar16);
                      fVar2 = *pfVar14;
                      puVar8 = *(undefined4 **)(unaff_EBP + -0x34);
                      *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x34) + 0x10;
                      fVar4 = pfVar14[1];
                      *(float *)(unaff_EBP + -0x9c) = *(float *)(unaff_EBP + -0x5c) + pfVar14[2];
                      fVar5 = pfVar14[3];
                      pfVar14 = (float *)(iVar16 + *(int *)(unaff_EBP + -0x14));
                      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
                      *(float *)(unaff_EBP + -0x98) = *(float *)(unaff_EBP + -0x58) + fVar5;
                      uVar6 = *(uint *)(unaff_EBP + -0x2c);
                      *(float *)(unaff_EBP + -0xc4) =
                           *(float *)(unaff_EBP + -0x54) + fVar3 + fVar2 + *pfVar14;
                      fVar2 = pfVar14[1];
                      fVar3 = pfVar14[2];
                      *(float *)(unaff_EBP + -0xb8) = *(float *)(unaff_EBP + -0x98) + pfVar14[3];
                      *(float *)(unaff_EBP + -0x74) = *(float *)(unaff_EBP + -0xc4) * fVar9;
                      *(float *)(unaff_EBP + -0x70) =
                           (*(float *)(unaff_EBP + -0x60) + fVar4 + fVar2) * fVar9;
                      *(float *)(unaff_EBP + -0x6c) =
                           (*(float *)(unaff_EBP + -0x9c) + fVar3) * fVar9;
                      *(float *)(unaff_EBP + -0x68) = *(float *)(unaff_EBP + -0xb8) * fVar9;
                      *puVar8 = *(undefined4 *)(unaff_EBP + -0x74);
                      puVar8[1] = *(undefined4 *)(unaff_EBP + -0x70);
                      puVar8[2] = *(undefined4 *)(unaff_EBP + -0x6c);
                      puVar8[3] = *(undefined4 *)(unaff_EBP + -0x68);
                      iVar17 = *(int *)(unaff_EBP + -0x30);
                    } while (uVar6 < *(uint *)(extraout_ECX[1] + 0x1058));
                  }
                  (**(code **)(*(int *)extraout_ECX[1] + 8))
                            (*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x24),
                             *(undefined4 *)(unaff_EBP + -0x20));
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                } while (*(uint *)(unaff_EBP + -0x10) < *(uint *)(extraout_ECX[1] + 0x105c));
              }
              *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
              iVar11 = extraout_ECX[1];
            } while (*(uint *)(unaff_EBP + -0x24) < *(uint *)(iVar11 + 0x1060));
          }
          operator_delete(*(void **)(unaff_EBP + -0x38));
          uVar10 = 0;
        }
        operator_delete(*(void **)(unaff_EBP + -0x20));
      }
    }
    else {
      uVar10 = 0x80004005;
    }
  }
  else {
    uVar10 = 0x80004005;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar10;
}

