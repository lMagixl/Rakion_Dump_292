
undefined4 FUN_361c3070(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  uint uVar7;
  uint uVar8;
  int unaff_EBP;
  undefined4 uVar9;
  uint *puVar10;
  
  FUN_3620d000();
  FUN_361cece9((undefined4 *)(unaff_EBP + -0x98));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(unaff_EBP + 8) == 0) || (extraout_ECX == (int *)0x0)) {
    uVar9 = 0x8876086c;
    goto LAB_361c33dc;
  }
  iVar3 = (**(code **)(*extraout_ECX + 0x28))(extraout_ECX);
  *(int *)(unaff_EBP + -0x40) = iVar3;
  if (((iVar3 != 3) && (iVar3 != 4)) && (iVar3 != 5)) {
    uVar9 = 0x8876086c;
    goto LAB_361c33dc;
  }
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) == 4) {
    *(uint *)(unaff_EBP + -0x30) = ((iVar3 != 5) - 1 & 5) + 1;
    iVar4 = (**(code **)(*extraout_ECX + 0x34))(extraout_ECX);
  }
  else {
    iVar4 = 1;
    *(undefined4 *)(unaff_EBP + -0x30) = 1;
  }
  uVar8 = iVar4 * *(int *)(unaff_EBP + -0x30);
  puVar10 = (uint *)0x0;
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  if (iVar3 == 3) {
LAB_361c3115:
    puVar5 = (uint *)FUN_361bf99c(uVar8 * 0x10 + 4);
    *(uint **)(unaff_EBP + -0x2c) = puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (puVar5 != (uint *)0x0) {
      puVar10 = puVar5 + 1;
      *puVar5 = uVar8;
      _eh_vector_constructor_iterator_(puVar10,0x10,uVar8,FUN_361d4c71,thunk_FUN_361d4c81);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(uint **)(unaff_EBP + -0x2c) = puVar10;
    if (puVar10 != (uint *)0x0) {
      puVar6 = (undefined4 *)FUN_361bf99c(uVar8 * 4);
      *(undefined4 **)(unaff_EBP + -0x14) = puVar6;
joined_r0x361c3213:
      if (puVar6 != (undefined4 *)0x0) {
        for (uVar7 = uVar8 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        goto LAB_361c3181;
      }
    }
LAB_361c3424:
    *(undefined4 *)(unaff_EBP + -0x10) = 0x8007000e;
  }
  else {
    if (iVar3 == 4) {
      puVar10 = (uint *)FUN_361bf99c(uVar8 * 4 + 4);
      *(uint **)(unaff_EBP + -0x34) = puVar10;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (puVar10 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
      }
      else {
        puVar5 = puVar10 + 1;
        *puVar10 = uVar8;
        _eh_vector_constructor_iterator_(puVar5,4,uVar8,FUN_361d4cea,thunk_FUN_361d4cf0);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(uint **)(unaff_EBP + -0x34) = puVar5;
      if (puVar5 != (uint *)0x0) {
        puVar6 = (undefined4 *)FUN_361bf99c(uVar8 * 4);
        *(undefined4 **)(unaff_EBP + -0x18) = puVar6;
        goto joined_r0x361c3213;
      }
      goto LAB_361c3424;
    }
    if (iVar3 == 5) goto LAB_361c3115;
LAB_361c3181:
    *(int *)(unaff_EBP + -0x38) = unaff_EBP + -0x98;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    if (*(int *)(unaff_EBP + -0x30) != 0) {
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      do {
        uVar7 = 0;
        if (*(int *)(unaff_EBP + -0x1c) != 0) {
          puVar6 = (undefined4 *)FUN_361bf99c(0x54);
          *(undefined4 **)(unaff_EBP + -0x28) = puVar6;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (puVar6 == (undefined4 *)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_361cece9(puVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (iVar3 == 0) goto LAB_361c3424;
          *(int *)(*(int *)(unaff_EBP + -0x38) + 0x50) = iVar3;
          *(int *)(unaff_EBP + -0x38) = iVar3;
        }
        *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x38);
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          do {
            if (uVar7 != 0) {
              puVar6 = (undefined4 *)FUN_361bf99c(0x54);
              *(undefined4 **)(unaff_EBP + -0x44) = puVar6;
              *(undefined1 *)(unaff_EBP + -4) = 4;
              if (puVar6 == (undefined4 *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = FUN_361cece9(puVar6);
              }
              *(undefined1 *)(unaff_EBP + -4) = 0;
              if (iVar3 == 0) goto LAB_361c3424;
              *(int *)(*(int *)(unaff_EBP + -0x28) + 0x4c) = iVar3;
              *(int *)(unaff_EBP + -0x28) = iVar3;
            }
            iVar3 = *(int *)(unaff_EBP + -0x3c) + uVar7;
            iVar4 = *(int *)(unaff_EBP + -0x40);
            if (iVar4 == 3) {
              iVar4 = *(int *)(unaff_EBP + -0x14);
LAB_361c32b2:
              uVar9 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x3c))
                                (*(int **)(unaff_EBP + -0x24),uVar7,iVar4 + iVar3 * 4);
LAB_361c32c0:
              *(undefined4 *)(unaff_EBP + -0x10) = uVar9;
            }
            else {
              if (iVar4 == 4) {
                iVar4 = *(int *)(unaff_EBP + -0x18);
                goto LAB_361c32b2;
              }
              if (iVar4 == 5) {
                uVar9 = (**(code **)(**(int **)(unaff_EBP + -0x24) + 0x3c))
                                  (*(int **)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x1c),
                                   uVar7,*(int *)(unaff_EBP + -0x14) + iVar3 * 4);
                goto LAB_361c32c0;
              }
            }
            if (*(int *)(unaff_EBP + -0x10) < 0) goto LAB_361c335f;
            iVar4 = *(int *)(unaff_EBP + -0x40);
            if (iVar4 == 3) {
LAB_361c32df:
              iVar3 = FUN_361d4d0b((void *)(iVar3 * 0x10 + *(int *)(unaff_EBP + -0x2c)),
                                   (undefined4 *)(unaff_EBP + -0xe4),
                                   *(int **)(*(int *)(unaff_EBP + -0x14) + iVar3 * 4),
                                   *(undefined4 *)(unaff_EBP + 0x10),(uint *)0x0,0,1);
LAB_361c3302:
              *(int *)(unaff_EBP + -0x10) = iVar3;
            }
            else {
              if (iVar4 == 4) {
                iVar3 = FUN_361d5123((void *)(*(int *)(unaff_EBP + -0x34) + iVar3 * 4),
                                     (undefined4 *)(unaff_EBP + -0xe4),
                                     *(int **)(iVar3 * 4 + *(int *)(unaff_EBP + -0x18)),
                                     *(undefined4 *)(unaff_EBP + 0x10),(uint *)0x0,0,1);
                goto LAB_361c3302;
              }
              if (iVar4 == 5) goto LAB_361c32df;
            }
            if (*(int *)(unaff_EBP + -0x10) < 0) goto LAB_361c335f;
            iVar3 = FUN_361ced77(*(void **)(unaff_EBP + -0x28),(int *)(unaff_EBP + -0xe4));
            *(int *)(unaff_EBP + -0x10) = iVar3;
            if (iVar3 < 0) goto LAB_361c335f;
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(unaff_EBP + -0x20));
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x3c) + *(int *)(unaff_EBP + -0x20);
      } while (*(uint *)(unaff_EBP + -0x1c) < *(uint *)(unaff_EBP + -0x30));
    }
    iVar3 = FUN_361d0e02();
    *(int *)(unaff_EBP + -0x10) = iVar3;
    if (-1 < iVar3) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
  }
LAB_361c335f:
  uVar7 = 0;
  if (*(CODBCFieldInfo **)(unaff_EBP + -0x2c) != (CODBCFieldInfo *)0x0) {
    CODBCFieldInfo::_vector_deleting_destructor_(*(CODBCFieldInfo **)(unaff_EBP + -0x2c),3);
  }
  if (*(void **)(unaff_EBP + -0x34) != (void *)0x0) {
    FID_conflict__vector_deleting_destructor_(*(void **)(unaff_EBP + -0x34),3);
  }
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    if (uVar8 != 0) {
      do {
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x14) + uVar7 * 4);
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar1 = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    operator_delete(*(void **)(unaff_EBP + -0x14));
  }
  uVar7 = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    if (uVar8 != 0) {
      do {
        piVar1 = (int *)(*(int *)(unaff_EBP + -0x18) + uVar7 * 4);
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
          *piVar1 = 0;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    operator_delete(*(void **)(unaff_EBP + -0x18));
  }
  uVar9 = *(undefined4 *)(unaff_EBP + -0x10);
LAB_361c33dc:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361ced02(unaff_EBP + -0x98);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar9;
}

