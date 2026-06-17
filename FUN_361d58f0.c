
void FUN_361d58f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *this;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int unaff_EBP;
  uint uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  
  FUN_3620d000();
  uVar7 = *(int *)(unaff_EBP + 8) + *(int *)((int)this + 0x1034);
  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x1040);
  iVar5 = *(int *)((int)this + 0x10c0);
  *(uint *)(unaff_EBP + 8) = uVar7;
  if (iVar5 == 0) {
    puVar2 = (undefined4 *)
             FUN_361bf99c(*(int *)((int)this + 0x10a8) * *(int *)((int)this + 0x10ac) * 8);
    *(undefined4 **)((int)this + 0x10c0) = puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_361d5cd9;
    for (uVar4 = (uint)(*(int *)((int)this + 0x10a8) * *(int *)((int)this + 0x10ac) * 8) >> 2;
        uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  puVar9 = (uint *)(*(int *)((int)this + 0x10c0) +
                   ((*(int *)(unaff_EBP + 0xc) - *(int *)((int)this + 0x109c)) *
                    *(int *)((int)this + 0x10a8) + (uVar7 - *(int *)((int)this + 0x1090) >> 2)) * 8)
  ;
  uVar4 = puVar9[1];
  *(uint **)(unaff_EBP + -0x10) = puVar9;
  if (uVar4 == 0) {
    iVar5 = *(int *)((int)this + 0x10a4);
    *(int *)(unaff_EBP + -0x18) = iVar5 << 4;
    iVar5 = FUN_361bf99c(iVar5 << 8);
    *(int *)(unaff_EBP + -0x14) = iVar5;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar5 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_36006680(iVar5,0x10,*(int *)(unaff_EBP + -0x18),&LAB_361c12a5);
      uVar4 = *(uint *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    puVar9[1] = uVar4;
    if (uVar4 == 0) goto LAB_361d5cd9;
    *puVar9 = 0;
    *(int *)((int)this + 0x10bc) = *(int *)((int)this + 0x10bc) + 1;
  }
  if (*puVar9 == 0) {
    uVar4 = 4;
    if (3 < *(uint *)((int)this + 0x103c)) {
      uVar4 = *(uint *)((int)this + 0x103c);
    }
    if (((uVar7 & 3) < *(uint *)((int)this + 0x1034)) || (uVar4 < (uVar7 & 3) + 4)) {
      uVar4 = *(uint *)((int)this + 0x108c);
      iVar5 = (uVar7 >> 2) * *(int *)((int)this + 0x1050) +
              (uVar4 >> 2) * *(int *)((int)this + 0x1080) +
              *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x18);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4);
      *(uint *)(unaff_EBP + -0x18) = uVar4;
      while (uVar4 < *(uint *)((int)this + 0x1094)) {
        (**(code **)((int)this + 0x1084))(*(undefined4 *)(unaff_EBP + -0x14),iVar5);
        iVar5 = iVar5 + *(int *)((int)this + 0x1080);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x100;
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
        uVar4 = *(uint *)(unaff_EBP + -0x18);
      }
      puVar9 = *(uint **)(unaff_EBP + -0x10);
    }
    else {
      uVar4 = *(uint *)((int)this + 0x1038);
      *(undefined4 *)(unaff_EBP + -0x18) = 4;
      if (3 < uVar4) {
        *(uint *)(unaff_EBP + -0x18) = uVar4;
      }
      if (*(uint *)((int)this + 0x108c) < *(uint *)((int)this + 0x1030)) {
        (**(code **)((int)this + 0x1084))
                  (puVar9[1],
                   (*(uint *)((int)this + 0x108c) >> 2) * *(int *)((int)this + 0x1080) +
                   (uVar7 >> 2) * *(int *)((int)this + 0x1050) +
                   *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) +
                   *(int *)((int)this + 0x18));
      }
      if (*(uint *)(unaff_EBP + -0x18) < *(uint *)((int)this + 0x1094)) {
        (**(code **)((int)this + 0x1084))
                  (puVar9[1],
                   (*(uint *)((int)this + 0x1094) - 4 >> 2) * *(int *)((int)this + 0x1080) +
                   (uVar7 >> 2) * *(int *)((int)this + 0x1050) +
                   *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) +
                   *(int *)((int)this + 0x18));
      }
    }
  }
  if (*(int *)((int)this + 0x1048) != 0) {
    uVar3 = FUN_361d5497(this,*(int *)(unaff_EBP + 0x10));
    *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
  }
  uVar4 = *(int *)((int)this + 0x1030) - *(int *)((int)this + 0x108c);
  iVar5 = *(int *)((int)this + 0x1090);
  uVar6 = *(int *)((int)this + 0x1058) + uVar4;
  if (uVar4 < uVar6) {
    do {
      puVar8 = (undefined4 *)
               (((uVar4 & 0xfffffffc | uVar7 - iVar5 & 3) << 2 | uVar4 & 3) * 0x10 +
               *(int *)(*(int *)(unaff_EBP + -0x10) + 4));
      puVar2 = *(undefined4 **)(unaff_EBP + 0x10);
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x10;
      *puVar8 = *puVar2;
      puVar8[1] = puVar2[1];
      puVar8[2] = puVar2[2];
      uVar4 = uVar4 + 1;
      puVar8[3] = puVar2[3];
    } while (uVar4 < uVar6);
    uVar7 = *(uint *)(unaff_EBP + 8);
    puVar9 = *(uint **)(unaff_EBP + -0x10);
  }
  uVar4 = uVar7 - *(int *)((int)this + 0x1090) & 3;
  if (*(int *)((int)this + 0x1074) == 0) {
    *puVar9 = *puVar9 | 1 << (sbyte)uVar4;
  }
  else {
    *(undefined4 *)(unaff_EBP + 0x10) = 0;
    do {
      if ((*(uint *)((int)this + 0x107c) & *(uint *)(unaff_EBP + 0x10)) == uVar4) {
        *puVar9 = *puVar9 | 1 << ((byte)*(undefined4 *)(unaff_EBP + 0x10) & 0x1f);
      }
      *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    } while (*(uint *)(unaff_EBP + 0x10) < 4);
  }
  if (*puVar9 == 0xf) {
    uVar4 = *(uint *)((int)this + 0x108c);
    iVar5 = (uVar7 >> 2) * *(int *)((int)this + 0x1050) +
            (uVar4 >> 2) * *(int *)((int)this + 0x1080) +
            *(int *)((int)this + 0x1054) * *(int *)(unaff_EBP + 0xc) + *(int *)((int)this + 0x18);
    *(uint *)(unaff_EBP + 0xc) = puVar9[1];
    *(uint *)(unaff_EBP + -0x18) = uVar4;
    while (uVar7 = *(uint *)((int)this + 0x1094), *(int *)(unaff_EBP + -0x14) = iVar5, uVar4 < uVar7
          ) {
      uVar7 = 0;
      if (*(int *)((int)this + 0x1074) != 0) {
        uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
        do {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          iVar5 = uVar7 << 2;
          *(undefined4 *)(unaff_EBP + 8) = uVar3;
          do {
            iVar1 = (*(uint *)(unaff_EBP + 0x10) & *(uint *)((int)this + 0x1078)) +
                    (*(uint *)((int)this + 0x107c) & uVar7) * 4;
            if (iVar5 != iVar1) {
              puVar2 = *(undefined4 **)(unaff_EBP + 8);
              puVar8 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EBP + 0xc));
              *puVar2 = *puVar8;
              puVar2[1] = puVar8[1];
              puVar2[2] = puVar8[2];
              puVar2[3] = puVar8[3];
              puVar9 = *(uint **)(unaff_EBP + -0x10);
            }
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 0x10;
            iVar5 = iVar5 + 1;
          } while (*(uint *)(unaff_EBP + 0x10) < 4);
          uVar3 = *(undefined4 *)(unaff_EBP + 8);
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
      }
      iVar5 = *(int *)(unaff_EBP + -0x14);
      (**(code **)((int)this + 0x1088))(iVar5,*(undefined4 *)(unaff_EBP + 0xc));
      iVar5 = iVar5 + *(int *)((int)this + 0x1080);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x100;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
      uVar4 = *(uint *)(unaff_EBP + -0x18);
    }
    if (((puVar9 + 2 <
          (uint *)(*(int *)((int)this + 0x10c0) +
                  *(int *)((int)this + 0x10ac) * *(int *)((int)this + 0x10a8) * 8)) &&
        (puVar9[2] == 0)) && (puVar9[3] == 0)) {
      puVar9[3] = puVar9[1];
      puVar9[1] = 0;
    }
    else {
      operator_delete((void *)puVar9[1]);
      *(int *)((int)this + 0x10bc) = *(int *)((int)this + 0x10bc) + -1;
    }
    puVar9[1] = 0;
  }
LAB_361d5cd9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

