
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_361d32e9(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int *extraout_ECX;
  float *pfVar12;
  uint uVar13;
  int unaff_EBP;
  int iVar14;
  
  FUN_3620d000();
  if ((char)extraout_ECX[2] != '\x05') {
    uVar8 = 0x80004005;
    goto LAB_361d36df;
  }
  iVar14 = *extraout_ECX;
  uVar13 = *(uint *)(iVar14 + 0x1058);
  iVar9 = extraout_ECX[1];
  if ((((*(uint *)(iVar9 + 0x1058) != uVar13 >> 1) &&
       ((*(uint *)(iVar9 + 0x1058) != 1 || (uVar13 != 1)))) ||
      ((*(uint *)(iVar9 + 0x105c) != *(uint *)(iVar14 + 0x105c) >> 1 &&
       ((*(uint *)(iVar9 + 0x105c) != 1 || (*(int *)(iVar14 + 0x105c) != 1)))))) ||
     ((*(int *)(iVar9 + 0x1060) != 1 || (*(int *)(iVar14 + 0x1060) != 1)))) {
    uVar8 = 0x80004005;
    goto LAB_361d36df;
  }
  if ((1 < uVar13) && ((uVar13 & 1) != 0)) {
    *(uint *)(iVar14 + 0x1058) = uVar13 & 0xfffffffe;
    piVar1 = (int *)(*extraout_ECX + 0x1064);
    *piVar1 = *piVar1 - *(int *)(*extraout_ECX + 0x1068);
  }
  uVar13 = *(uint *)(*extraout_ECX + 0x105c);
  if (1 < uVar13) {
    *(uint *)(*extraout_ECX + 0x105c) = uVar13 & 0xfffffffe;
  }
  if ((*(byte *)((int)extraout_ECX + 10) & 8) == 0) {
    iVar14 = *extraout_ECX;
    iVar9 = *(int *)(iVar14 + 4);
    if (((iVar9 == *(int *)(extraout_ECX[1] + 4)) && (1 < *(uint *)(iVar14 + 0x1058))) &&
       (1 < *(uint *)(iVar14 + 0x105c))) {
      if (iVar9 < 0x1d) {
        if (iVar9 == 0x1c) {
LAB_361d3464:
          iVar14 = FUN_361d26d9(extraout_ECX);
        }
        else {
          switch(iVar9) {
          default:
            goto switchD_361d33f1_caseD_14;
          case 0x15:
            iVar14 = FUN_361d1d65(extraout_ECX);
            break;
          case 0x16:
            iVar14 = FUN_361d2053(extraout_ECX);
            break;
          case 0x17:
            iVar14 = FUN_361d2084(extraout_ECX);
            break;
          case 0x18:
            iVar14 = FUN_361d21d4(extraout_ECX);
            break;
          case 0x19:
            iVar14 = FUN_361d22f8(extraout_ECX);
            break;
          case 0x1a:
            iVar14 = FUN_361d2447(extraout_ECX);
            break;
          case 0x1b:
            iVar14 = FUN_361d259a(extraout_ECX);
          }
        }
      }
      else if (iVar9 == 0x1d) {
        iVar14 = FUN_361d2774(extraout_ECX);
      }
      else if (iVar9 == 0x1e) {
        iVar14 = FUN_361d28c0(extraout_ECX);
      }
      else {
        if ((iVar9 == 0x28) || (iVar9 == 0x29)) goto switchD_361d33f1_caseD_14;
        if (iVar9 == 0x32) goto LAB_361d3464;
        if (iVar9 == 0x33) {
          iVar14 = FUN_361d29ed(extraout_ECX);
        }
        else {
          if (iVar9 != 0x34) goto switchD_361d33f1_caseD_14;
          iVar14 = FUN_361d2b39(extraout_ECX);
        }
      }
      if (-1 < iVar14) {
        uVar8 = 0;
        goto LAB_361d36df;
      }
    }
  }
switchD_361d33f1_caseD_14:
  iVar14 = *(int *)(extraout_ECX[1] + 0x1058);
  iVar9 = FUN_361bf99c(iVar14 << 4);
  *(int *)(unaff_EBP + -0x2c) = iVar9;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar9 == 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  else {
    FUN_36006680(iVar9,0x10,iVar14,&LAB_361c12a5);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + -0x2c);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    uVar8 = 0x8007000e;
  }
  else {
    iVar14 = *(int *)(*extraout_ECX + 0x1058);
    if (*(int *)(*extraout_ECX + 0x105c) == 1) {
      iVar9 = FUN_361bf99c(iVar14 << 4);
      *(int *)(unaff_EBP + -0x2c) = iVar9;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar9 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_36006680(iVar9,0x10,iVar14,&LAB_361c12a5);
        iVar14 = *(int *)(unaff_EBP + -0x2c);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x24) = iVar14;
      *(int *)(unaff_EBP + -0x14) = iVar14;
    }
    else {
      iVar9 = FUN_361bf99c(iVar14 << 5);
      *(int *)(unaff_EBP + -0x2c) = iVar9;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar9 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_36006680(iVar9,0x10,iVar14 << 1,&LAB_361c12a5);
        iVar14 = *(int *)(unaff_EBP + -0x2c);
      }
      iVar9 = *(int *)(*extraout_ECX + 0x1058);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x24) = iVar14;
      *(int *)(unaff_EBP + -0x14) = iVar14;
      iVar14 = iVar9 * 0x10 + iVar14;
    }
    *(int *)(unaff_EBP + -0x10) = iVar14;
    if (*(int *)(unaff_EBP + -0x24) == 0) {
      uVar8 = 0x8007000e;
    }
    else {
      if (*(int *)(*extraout_ECX + 0x1058) == 1) {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14);
        iVar14 = *(int *)(unaff_EBP + -0x10);
      }
      else {
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x14) + 0x10;
        iVar14 = *(int *)(unaff_EBP + -0x10) + 0x10;
      }
      *(int *)(unaff_EBP + -0x2c) = iVar14;
      iVar14 = *(int *)(extraout_ECX[1] + 0x105c);
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      if (iVar14 != 0) {
        do {
          iVar14 = *(int *)(unaff_EBP + -0x14);
          iVar9 = *(int *)(unaff_EBP + -0x18) * 2;
          (**(code **)(*(int *)*extraout_ECX + 4))(iVar9,0,iVar14);
          if (*(int *)(unaff_EBP + -0x10) != iVar14) {
            (**(code **)(*(int *)*extraout_ECX + 4))(iVar9 + 1,0,*(undefined4 *)(unaff_EBP + -0x10))
            ;
          }
          fVar7 = _DAT_362253ec;
          uVar13 = 0;
          if (*(int *)(extraout_ECX[1] + 0x1058) != 0) {
            *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x1c);
            do {
              iVar14 = uVar13 * 0x20;
              pfVar10 = (float *)(*(int *)(unaff_EBP + -0x28) + iVar14);
              fVar2 = *pfVar10;
              pfVar12 = (float *)(*(int *)(unaff_EBP + -0x14) + iVar14);
              fVar3 = *pfVar12;
              puVar6 = *(undefined4 **)(unaff_EBP + -0x20);
              fVar4 = pfVar10[1];
              *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 0x10;
              fVar5 = pfVar12[1];
              *(float *)(unaff_EBP + -0x44) = pfVar10[2] + pfVar12[2];
              pfVar11 = (float *)(*(int *)(unaff_EBP + -0x10) + iVar14);
              *(float *)(unaff_EBP + -0x40) = pfVar10[3] + pfVar12[3];
              *(float *)(unaff_EBP + -0x5c) = fVar2 + fVar3 + *pfVar11;
              fVar2 = pfVar11[1];
              fVar3 = pfVar11[2];
              pfVar10 = (float *)(*(int *)(unaff_EBP + -0x2c) + iVar14);
              *(float *)(unaff_EBP + -0x50) = *(float *)(unaff_EBP + -0x40) + pfVar11[3];
              uVar13 = uVar13 + 1;
              *(float *)(unaff_EBP + -0x6c) = *(float *)(unaff_EBP + -0x5c) + *pfVar10;
              *(float *)(unaff_EBP + -0x68) = fVar4 + fVar5 + fVar2 + pfVar10[1];
              fVar2 = pfVar10[2];
              fVar4 = pfVar10[3];
              *(float *)(unaff_EBP + -0x3c) = *(float *)(unaff_EBP + -0x6c) * fVar7;
              *(float *)(unaff_EBP + -0x38) = *(float *)(unaff_EBP + -0x68) * fVar7;
              *(float *)(unaff_EBP + -0x34) =
                   (*(float *)(unaff_EBP + -0x44) + fVar3 + fVar2) * fVar7;
              *(float *)(unaff_EBP + -0x30) = (*(float *)(unaff_EBP + -0x50) + fVar4) * fVar7;
              *puVar6 = *(undefined4 *)(unaff_EBP + -0x3c);
              puVar6[1] = *(undefined4 *)(unaff_EBP + -0x38);
              puVar6[2] = *(undefined4 *)(unaff_EBP + -0x34);
              puVar6[3] = *(undefined4 *)(unaff_EBP + -0x30);
            } while (uVar13 < *(uint *)(extraout_ECX[1] + 0x1058));
          }
          (**(code **)(*(int *)extraout_ECX[1] + 8))
                    (*(undefined4 *)(unaff_EBP + -0x18),0,*(undefined4 *)(unaff_EBP + -0x1c));
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        } while (*(uint *)(unaff_EBP + -0x18) < *(uint *)(extraout_ECX[1] + 0x105c));
      }
      operator_delete(*(void **)(unaff_EBP + -0x24));
      uVar8 = 0;
    }
    operator_delete(*(void **)(unaff_EBP + -0x1c));
  }
LAB_361d36df:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}

