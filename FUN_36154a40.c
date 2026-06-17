
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __fastcall FUN_36154a40(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int extraout_EDX;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int *local_20;
  int *local_18;
  int local_10;
  
  iVar3 = DAT_362fdd24;
  iVar9 = DAT_362fde08 + param_1 * 0x18;
  iVar7 = in_EAX * 3;
  iVar1 = DAT_362fde08 + in_EAX * 0x18;
  iVar4 = *(int *)(iVar9 + 4) - *(int *)(iVar1 + 4);
  if (iVar4 != 0) {
LAB_36154ea3:
    return CONCAT44(iVar7,iVar4);
  }
  iVar7 = param_1 * 0xc;
  iVar4 = in_EAX * 0xc;
  if (_DAT_3622376c ==
      *(float *)(*(int *)(DAT_362fdd24 + 4) + 4 + iVar7) -
      *(float *)(iVar4 + 4 + *(int *)(DAT_362fdd24 + 4))) {
    if (_DAT_3622376c !=
        *(float *)(*(int *)(DAT_362fdd24 + 4) + iVar7) -
        *(float *)(*(int *)(DAT_362fdd24 + 4) + iVar4)) {
      fVar2 = *(float *)(*(int *)(DAT_362fdd24 + 4) + iVar7) -
              *(float *)(*(int *)(DAT_362fdd24 + 4) + iVar4);
      goto LAB_36154aa7;
    }
    if (_DAT_3622376c !=
        *(float *)(*(int *)(DAT_362fdd24 + 4) + 8 + iVar7) -
        *(float *)(*(int *)(DAT_362fdd24 + 4) + 8 + iVar4)) {
      fVar2 = *(float *)(*(int *)(DAT_362fdd24 + 4) + 8 + iVar7) -
              *(float *)(*(int *)(DAT_362fdd24 + 4) + 8 + iVar4);
      goto LAB_36154aa7;
    }
    if (_DAT_3622376c ==
        *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 4 + iVar7) -
        *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 4 + iVar4)) {
      if (_DAT_3622376c ==
          *(float *)(*(int *)(DAT_362fdd24 + 0xc) + iVar7) -
          *(float *)(*(int *)(DAT_362fdd24 + 0xc) + iVar4)) {
        if (_DAT_3622376c ==
            *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 8 + iVar7) -
            *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 8 + iVar4)) {
          iVar7 = FUN_3615a240((undefined4 *)(DAT_362fdd24 + 0x10));
          iVar4 = 0;
          if (0 < iVar7) {
            iVar8 = *(int *)(iVar3 + 0x14);
            do {
              if (_DAT_3622376c !=
                  *(float *)(*(int *)(iVar8 + 0xc) + param_1 * 8) -
                  *(float *)(*(int *)(iVar8 + 0xc) + in_EAX * 8)) {
                fVar2 = *(float *)(*(int *)(iVar8 + 0xc) + param_1 * 8) -
                        *(float *)(*(int *)(iVar8 + 0xc) + in_EAX * 8);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(*(int *)(iVar8 + 0xc) + 4 + param_1 * 8) -
                  *(float *)(*(int *)(iVar8 + 0xc) + 4 + in_EAX * 8)) {
                fVar2 = *(float *)(*(int *)(iVar8 + 0xc) + 4 + param_1 * 8) -
                        *(float *)(*(int *)(iVar8 + 0xc) + 4 + in_EAX * 8);
                goto LAB_36154aa7;
              }
              iVar4 = iVar4 + 1;
              iVar8 = iVar8 + 0x10;
            } while (iVar4 < iVar7);
          }
          iVar4 = FUN_3615a560((undefined4 *)(iVar9 + 8));
          iVar7 = FUN_3615a560((undefined4 *)(iVar1 + 8));
          iVar8 = FUN_3615a560((undefined4 *)(iVar9 + 0x10));
          iVar5 = FUN_3615a560((undefined4 *)(iVar1 + 0x10));
          iVar7 = iVar4 - iVar7;
          if ((iVar7 != 0) || (iVar7 = iVar8 - iVar5, iVar7 != 0)) {
            return CONCAT44(extraout_EDX,iVar7);
          }
          local_18 = (int *)0x0;
          iVar7 = extraout_EDX;
          if (0 < iVar4) {
            piVar6 = *(int **)(iVar1 + 0xc);
            local_20 = (int *)(*(int *)(iVar9 + 0xc) + 4);
            iVar5 = *(int *)(iVar9 + 0xc) - (int)piVar6;
            do {
              iVar7 = *(int *)(iVar5 + (int)piVar6);
              if (_DAT_3622376c !=
                  *(float *)(*(int *)(*(int *)(iVar3 + 0x24) + 8 + iVar7 * 0xc) + 4 + *local_20 * 8)
                  - *(float *)(*(int *)(*(int *)(iVar3 + 0x24) + 8 + *piVar6 * 0xc) + 4 +
                              piVar6[1] * 8)) {
                fVar2 = *(float *)(*(int *)(*(int *)(iVar3 + 0x24) + 8 + iVar7 * 0xc) + 4 +
                                  *local_20 * 8) -
                        *(float *)(*(int *)(*(int *)(iVar3 + 0x24) + 8 + *piVar6 * 0xc) + 4 +
                                  piVar6[1] * 8);
                goto LAB_36154aa7;
              }
              local_18 = (int *)((int)local_18 + 1);
              local_20 = local_20 + 2;
              piVar6 = piVar6 + 2;
              iVar7 = iVar4;
            } while ((int)local_18 < iVar4);
          }
          local_10 = 0;
          if (0 < iVar8) {
            piVar6 = *(int **)(iVar1 + 0x14);
            local_18 = (int *)(*(int *)(iVar9 + 0x14) + 4);
            iVar9 = *(int *)(iVar9 + 0x14) - (int)piVar6;
            do {
              iVar1 = *(int *)((int)piVar6 + iVar9);
              iVar7 = *piVar6;
              iVar4 = *local_18;
              iVar5 = piVar6[1];
              iVar11 = iVar4 * 0x1c;
              iVar13 = iVar5 * 0x1c;
              iVar10 = iVar1 * 0x10;
              iVar12 = iVar7 * 0x10;
              if (_DAT_3622376c !=
                  *(float *)(*(int *)(iVar10 + 0xc + *(int *)(iVar3 + 0x2c)) + 4 + iVar11) -
                  *(float *)(iVar13 + 4 + *(int *)(iVar12 + 0xc + *(int *)(iVar3 + 0x2c)))) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) + 4
                                  + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) + 4
                                  + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(iVar11 + 8 + *(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar10)) -
                  *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar12) + 8 + iVar13)) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) + 8
                                  + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) + 8
                                  + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(iVar11 + 0xc + *(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar10))
                  - *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar12) + 0xc + iVar13
                              )) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0xc + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0xc + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(iVar11 + 0x10 + *(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar10))
                  - *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar12) + 0x10 +
                              iVar13)) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x10 + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x10 + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(iVar11 + 0x14 + *(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar10))
                  - *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar12) + 0x14 +
                              iVar13)) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x14 + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x14 + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              if (_DAT_3622376c !=
                  *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar10) + 0x18 + iVar11)
                  - *(float *)(*(int *)(*(int *)(DAT_362fdd24 + 0x2c) + 0xc + iVar12) + 0x18 +
                              iVar13)) {
                fVar2 = *(float *)(*(int *)(iVar1 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x18 + iVar4 * 0x1c) -
                        *(float *)(*(int *)(iVar7 * 0x10 + 0xc + *(int *)(DAT_362fdd24 + 0x2c)) +
                                   0x18 + iVar5 * 0x1c);
                goto LAB_36154aa7;
              }
              local_10 = local_10 + 1;
              local_18 = local_18 + 2;
              piVar6 = piVar6 + 2;
              iVar7 = iVar8;
            } while (local_10 < iVar8);
          }
          iVar4 = 0;
          goto LAB_36154ea3;
        }
        fVar2 = *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 8 + iVar7) -
                *(float *)(*(int *)(DAT_362fdd24 + 0xc) + 8 + iVar4);
      }
      else {
        fVar2 = *(float *)(*(int *)(DAT_362fdd24 + 0xc) + iVar7) -
                *(float *)(*(int *)(DAT_362fdd24 + 0xc) + iVar4);
      }
      goto LAB_36154aa7;
    }
    iVar9 = *(int *)(DAT_362fdd24 + 0xc);
  }
  else {
    iVar9 = *(int *)(DAT_362fdd24 + 4);
  }
  fVar2 = *(float *)(iVar9 + 4 + iVar7) - *(float *)(iVar9 + 4 + iVar4);
LAB_36154aa7:
  if (_DAT_3622376c < fVar2) {
    uVar14 = FUN_361bfd6c();
    return uVar14;
  }
  if (_DAT_3622376c <= fVar2) {
    uVar14 = FUN_361bfd6c();
    return uVar14;
  }
  uVar14 = FUN_361bfd6c();
  return uVar14;
}

