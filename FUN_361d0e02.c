
int FUN_361d0e02(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_EAX;
  int *extraout_ECX;
  int *piVar5;
  undefined4 *puVar6;
  int unaff_EBP;
  undefined4 *puVar7;
  undefined4 *puVar8;
  DWORD DVar9;
  
  FUN_3620d000();
  *(int **)(unaff_EBP + -0x20) = extraout_ECX;
  FUN_361cc028((undefined4 *)(unaff_EBP + -0x3c));
  iVar4 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar4 == 0) {
LAB_361d0e57:
    piVar5 = (int *)&DAT_362ac730;
LAB_361d0e5c:
    piVar1 = FUN_361c0ebe(*extraout_ECX);
    iVar2 = FUN_361c0f57(piVar5,extraout_ECX[2],piVar1);
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    if (iVar2 != 0) {
      piVar5 = extraout_ECX;
      if (iVar2 != *extraout_ECX) {
        FUN_361d12d0((undefined4 *)(unaff_EBP + -0x2c));
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piVar1 = FUN_361c0ebe(iVar2);
        uVar3 = (uint)piVar1[2] >> 3;
        *(uint *)(unaff_EBP + -0x10) = uVar3;
        *(int **)(unaff_EBP + -0x14) = extraout_ECX;
        do {
          puVar6 = *(undefined4 **)(unaff_EBP + -0x14);
          if (puVar6 != (undefined4 *)0x0) {
            do {
              iVar4 = FUN_361bf99c(puVar6[5] * puVar6[3] * uVar3 * puVar6[4]);
              *(int *)(unaff_EBP + -0x18) = iVar4;
              if (iVar4 == 0) {
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_361d12da((int *)(unaff_EBP + -0x2c));
                iVar2 = -0x7ff8fff2;
                goto LAB_361d10ac;
              }
              *(undefined4 *)(unaff_EBP + -0xd4) = puVar6[1];
              *(undefined4 *)(unaff_EBP + -0xd0) = *puVar6;
              *(undefined4 *)(unaff_EBP + -0xcc) = puVar6[0xc];
              *(undefined4 *)(unaff_EBP + -200) = puVar6[0xd];
              puVar7 = puVar6 + 6;
              puVar8 = (undefined4 *)(unaff_EBP + -0xc4);
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar7 = puVar6 + 6;
              puVar8 = (undefined4 *)(unaff_EBP + -0xac);
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              *(undefined4 *)(unaff_EBP + -0x90) = 0;
              *(undefined4 *)(unaff_EBP + -0x94) = 1;
              *(undefined4 *)(unaff_EBP + -0x8c) = puVar6[2];
              *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(unaff_EBP + -0x18);
              *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(unaff_EBP + -0x1c);
              *(int *)(unaff_EBP + -0x80) = puVar6[3] * *(int *)(unaff_EBP + -0x10);
              *(int *)(unaff_EBP + -0x7c) = puVar6[3] * *(int *)(unaff_EBP + -0x10) * puVar6[4];
              *(undefined4 *)(unaff_EBP + -0x78) = 0;
              *(undefined4 *)(unaff_EBP + -0x74) = 0;
              *(undefined4 *)(unaff_EBP + -0x70) = puVar6[3];
              *(undefined4 *)(unaff_EBP + -0x6c) = puVar6[4];
              *(undefined4 *)(unaff_EBP + -0x68) = 0;
              *(undefined4 *)(unaff_EBP + -100) = puVar6[5];
              puVar7 = (undefined4 *)(unaff_EBP + -0x78);
              puVar8 = (undefined4 *)(unaff_EBP + -0x60);
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              *(undefined4 *)(unaff_EBP + -0x44) = 0;
              *(undefined4 *)(unaff_EBP + -0x48) = 1;
              *(undefined4 *)(unaff_EBP + -0x40) = puVar6[2];
              puVar6 = (undefined4 *)
                       FUN_361d4b57((int *)(unaff_EBP + -0x2c),unaff_EBP + -0x88,unaff_EBP + -0xd4,
                                    0x80001);
              if (extraout_EAX < 0) {
                operator_delete(*(void **)(unaff_EBP + -0x18));
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_361d12da((int *)(unaff_EBP + -0x2c));
                iVar2 = extraout_EAX;
                goto LAB_361d10ac;
              }
              if (((void *)puVar6[1] != (void *)0x0) && (puVar6[0xe] != 0)) {
                operator_delete((void *)puVar6[1]);
                puVar6[1] = 0;
              }
              *puVar6 = *(undefined4 *)(unaff_EBP + -0x1c);
              puVar6[1] = *(undefined4 *)(unaff_EBP + -0x18);
              puVar7 = (undefined4 *)(unaff_EBP + -0x60);
              puVar8 = puVar6 + 6;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar8 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar8 = puVar8 + 1;
              }
              puVar6[0xc] = *(undefined4 *)(unaff_EBP + -0x80);
              puVar6[0xd] = *(undefined4 *)(unaff_EBP + -0x7c);
              uVar3 = *(uint *)(unaff_EBP + -0x10);
              puVar6[0xe] = 1;
              puVar6 = (undefined4 *)puVar6[0x13];
            } while (puVar6 != (undefined4 *)0x0);
            iVar4 = *(int *)(unaff_EBP + 0xc);
            piVar5 = *(int **)(unaff_EBP + -0x20);
          }
          iVar2 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x50);
          *(int *)(unaff_EBP + -0x14) = iVar2;
        } while (iVar2 != 0);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_361d12da((int *)(unaff_EBP + -0x2c));
      }
      iVar2 = FUN_361cc14a((void *)(unaff_EBP + -0x3c),*(LPCWSTR *)(unaff_EBP + 8),
                           *(int *)(unaff_EBP + 0x10));
      if (iVar2 < 0) goto LAB_361d10ac;
      if (iVar4 == 0) {
        DVar9 = 1;
LAB_361d109c:
        iVar2 = FUN_361cf550(piVar5,*(HANDLE *)(unaff_EBP + -0x3c),DVar9);
      }
      else {
        if (iVar4 != 4) {
          if (iVar4 != 6) {
            iVar2 = -0x7fffbfff;
            goto LAB_361d10ac;
          }
          DVar9 = 0;
          goto LAB_361d109c;
        }
        iVar2 = FUN_361d0b5a(piVar5,*(HANDLE *)(unaff_EBP + -0x3c));
      }
      if (-1 < iVar2) {
        iVar2 = 0;
      }
      goto LAB_361d10ac;
    }
  }
  else {
    if (iVar4 < 1) {
LAB_361d1042:
      iVar2 = -0x7789f794;
      goto LAB_361d10ac;
    }
    if (3 < iVar4) {
      if (iVar4 == 4) {
        piVar5 = (int *)&DAT_362ac748;
        goto LAB_361d0e5c;
      }
      if (iVar4 != 5) {
        if (iVar4 == 6) goto LAB_361d0e57;
        goto LAB_361d1042;
      }
    }
  }
  iVar2 = -0x7789f4a7;
LAB_361d10ac:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_361cc255((int *)(unaff_EBP + -0x3c));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}

