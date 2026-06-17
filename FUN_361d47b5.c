
undefined4 FUN_361d47b5(void)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *extraout_ECX;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  int unaff_EBP;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  
  FUN_3620d000();
  iVar6 = extraout_ECX[1];
  iVar4 = *(int *)(iVar6 + 0x1060);
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if ((iVar4 != 1) || (*(int *)(*extraout_ECX + 0x1060) != 1)) {
    uVar11 = 0x80004005;
    goto LAB_361d4b48;
  }
  uVar5 = extraout_ECX[2];
  piVar2 = FUN_361d130e(*(uint *)(*extraout_ECX + 0x1058),*(int *)(iVar6 + 0x1058),
                        ~(uVar5 >> 0x10) & 1);
  *(int **)(unaff_EBP + -0x38) = piVar2;
  if (piVar2 == (int *)0x0) {
LAB_361d4b0a:
    uVar11 = 0x80004005;
  }
  else {
    piVar3 = FUN_361d130e(*(uint *)(*extraout_ECX + 0x105c),*(int *)(extraout_ECX[1] + 0x105c),
                          ~(uVar5 >> 0x11) & 1);
    *(int **)(unaff_EBP + -0x20) = piVar3;
    if (piVar3 == (int *)0x0) goto LAB_361d4b0a;
    *(int *)(unaff_EBP + -0x2c) = *piVar2 + (int)piVar2;
    piVar3 = (int *)(**(int **)(unaff_EBP + -0x20) + (int)*(int **)(unaff_EBP + -0x20));
    iVar6 = *(int *)(extraout_ECX[1] + 0x105c);
    *(int **)(unaff_EBP + -0x44) = piVar3;
    piVar2 = (int *)FUN_361bf99c(iVar6 * 0xc + 4);
    *(int **)(unaff_EBP + -0x40) = piVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (piVar2 == (int *)0x0) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iVar6 = *(int *)(unaff_EBP + -0x14);
    }
    else {
      *piVar2 = iVar6;
      *(int **)(unaff_EBP + -0x34) = piVar2 + 1;
      _eh_vector_constructor_iterator_
                (piVar2 + 1,0xc,iVar6,(_func_void_void_ptr *)&LAB_361d12f8,
                 (_func_void_void_ptr *)&LAB_361d1305);
      iVar6 = *(int *)(unaff_EBP + -0x34);
      *(int *)(unaff_EBP + -0x14) = iVar6;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(int *)(unaff_EBP + -0x34) = iVar6;
    if (iVar6 == 0) {
LAB_361d4b03:
      uVar11 = 0x8007000e;
    }
    else {
      iVar6 = *(int *)(*extraout_ECX + 0x1058);
      iVar4 = FUN_361bf99c(iVar6 << 4);
      *(int *)(unaff_EBP + -0x3c) = iVar4;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        iVar6 = *(int *)(unaff_EBP + -0x24);
      }
      else {
        FUN_36006680(iVar4,0x10,iVar6,&LAB_361c12a5);
        iVar6 = *(int *)(unaff_EBP + -0x3c);
        *(int *)(unaff_EBP + -0x24) = iVar6;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x3c) = iVar6;
      if (iVar6 == 0) goto LAB_361d4b03;
      piVar2 = (int *)(*(int *)(unaff_EBP + -0x20) + 4);
      *(int **)(unaff_EBP + -0x30) = piVar2;
      while (piVar2 < piVar3) {
        piVar8 = (int *)(*piVar2 + (int)piVar2);
        for (piVar7 = piVar2 + 1; piVar2 = piVar8, piVar7 < piVar8; piVar7 = piVar7 + 2) {
          piVar2 = (int *)(*(int *)(unaff_EBP + -0x14) + 8 + *piVar7 * 0xc);
          *piVar2 = *piVar2 + 1;
        }
      }
      piVar2 = *(int **)(unaff_EBP + -0x30);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      if (piVar2 < piVar3) {
        do {
          iVar6 = *piVar2;
          piVar3 = piVar2 + 1;
          *(int **)(unaff_EBP + -0x1c) = (int *)(iVar6 + (int)piVar2);
          *(int **)(unaff_EBP + -0x30) = piVar3;
          piVar2 = (int *)(iVar6 + (int)piVar2);
          while (*(int **)(unaff_EBP + -0x10) = piVar3, piVar3 < piVar2) {
            piVar3 = (int *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
            if (*piVar3 == 0) {
              piVar2 = *(int **)(unaff_EBP + -0x18);
              if (piVar2 == (int *)0x0) {
                iVar6 = *(int *)(extraout_ECX[1] + 0x1058);
                iVar4 = FUN_361bf99c(iVar6 << 4);
                *(int *)(unaff_EBP + -0x40) = iVar4;
                *(undefined4 *)(unaff_EBP + -4) = 2;
                if (iVar4 == 0) {
                  iVar6 = 0;
                }
                else {
                  FUN_36006680(iVar4,0x10,iVar6,&LAB_361c12a5);
                  iVar6 = *(int *)(unaff_EBP + -0x40);
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                *piVar3 = iVar6;
                if (iVar6 == 0) goto LAB_361d4b03;
              }
              else {
                *piVar3 = *piVar2;
                *piVar2 = 0;
                *(int *)(unaff_EBP + -0x18) = piVar2[1];
              }
              piVar2 = *(int **)(unaff_EBP + -0x1c);
              puVar12 = (undefined4 *)*piVar3;
              for (uVar5 = (uint)(*(int *)(extraout_ECX[1] + 0x1058) << 4) >> 2; uVar5 != 0;
                  uVar5 = uVar5 - 1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
              for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
                *(undefined1 *)puVar12 = 0;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
            }
            piVar3 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
          }
          iVar6 = *(int *)(unaff_EBP + -0x24);
          (**(code **)(*(int *)*extraout_ECX + 4))(*(undefined4 *)(unaff_EBP + -0x28),0,iVar6);
          piVar3 = (int *)(*(int *)(unaff_EBP + -0x38) + 4);
          if (piVar3 < *(int **)(unaff_EBP + -0x2c)) {
            pfVar9 = (float *)(iVar6 + 8);
            do {
              piVar7 = *(int **)(unaff_EBP + -0x30);
              piVar8 = (int *)(*piVar3 + (int)piVar3);
              *(int **)(unaff_EBP + -0x10) = piVar7;
              if (piVar7 < piVar2) {
                *(int **)(unaff_EBP + -0x40) = piVar3 + 1;
                while( true ) {
                  iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + *piVar7 * 0xc);
                  piVar3 = *(int **)(unaff_EBP + -0x40);
                  if (piVar3 < piVar8) {
                    do {
                      fVar1 = (float)piVar3[1] * *(float *)(*(int *)(unaff_EBP + -0x10) + 4);
                      pfVar10 = (float *)(*piVar3 * 0x10 + iVar6);
                      *pfVar10 = fVar1 * pfVar9[-2] + *pfVar10;
                      pfVar10 = (float *)(*piVar3 * 0x10 + 4 + iVar6);
                      *pfVar10 = fVar1 * pfVar9[-1] + *pfVar10;
                      pfVar10 = (float *)(*piVar3 * 0x10 + 8 + iVar6);
                      *pfVar10 = fVar1 * *pfVar9 + *pfVar10;
                      pfVar10 = (float *)(*piVar3 * 0x10 + 0xc + iVar6);
                      piVar3 = piVar3 + 2;
                      *pfVar10 = fVar1 * pfVar9[1] + *pfVar10;
                    } while (piVar3 < piVar8);
                    piVar2 = *(int **)(unaff_EBP + -0x1c);
                  }
                  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 8;
                  if (piVar2 <= *(int **)(unaff_EBP + -0x10)) break;
                  piVar7 = *(int **)(unaff_EBP + -0x10);
                }
              }
              pfVar9 = pfVar9 + 4;
              piVar3 = piVar8;
            } while (piVar8 < *(int **)(unaff_EBP + -0x2c));
          }
          piVar3 = *(int **)(unaff_EBP + -0x30);
          if (piVar3 < piVar2) {
            do {
              puVar12 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + *piVar3 * 0xc);
              piVar2 = puVar12 + 2;
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                (**(code **)(*(int *)extraout_ECX[1] + 8))(*piVar3,0,*puVar12);
                puVar12[1] = *(undefined4 *)(unaff_EBP + -0x18);
                *(undefined4 **)(unaff_EBP + -0x18) = puVar12;
              }
              piVar3 = piVar3 + 2;
            } while (piVar3 < *(int **)(unaff_EBP + -0x1c));
            piVar2 = *(int **)(unaff_EBP + -0x1c);
          }
          *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
        } while (piVar2 < *(int **)(unaff_EBP + -0x44));
      }
      uVar11 = 0;
    }
  }
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    FUN_361d15cb(*(void **)(unaff_EBP + -0x34),3);
  }
  operator_delete(*(void **)(unaff_EBP + -0x20));
  operator_delete(*(void **)(unaff_EBP + -0x38));
  operator_delete(*(void **)(unaff_EBP + -0x3c));
  operator_delete((void *)0x0);
LAB_361d4b48:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar11;
}

