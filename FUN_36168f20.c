
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_36168f20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int local_14;
  int local_10;
  int local_c;
  
  if ((DAT_362fe1ac == 0) && (local_10 = FUN_3615a280((undefined4 *)(param_3 + 0x18)), 0 < local_10)
     ) {
    local_14 = 0;
    do {
      iVar5 = *(int *)(param_3 + 0x1c) + local_14;
      iVar1 = FUN_360918e0((undefined4 *)(iVar5 + 0x38));
      iVar6 = DAT_362fea38 + 1;
      DAT_362fea38 = iVar6;
      iVar2 = FUN_3616e2e0((undefined4 *)&DAT_362fea30);
      if (iVar2 < iVar6) {
        iVar6 = FUN_3616e2e0((undefined4 *)&DAT_362fea30);
        FUN_3616ee10(&DAT_362fea30,iVar6 + _DAT_362fea3c);
        iVar6 = DAT_362fea38;
      }
      puVar7 = (undefined4 *)(DAT_362fea34 + -0xc + iVar6 * 0xc);
      uVar3 = FUN_3616e170(0x362fea20);
      puVar7[1] = uVar3;
      *puVar7 = *(undefined4 *)(iVar5 + 8);
      puVar7[2] = iVar1;
      if (0 < iVar1) {
        iVar6 = DAT_362fea28 + iVar1 * 2;
        DAT_362fea28 = iVar6;
        iVar2 = FUN_3616e2b0((undefined4 *)&DAT_362fea20);
        if (iVar2 < iVar6) {
          iVar6 = FUN_3616e2b0((undefined4 *)&DAT_362fea20);
          FUN_3616ed50(&DAT_362fea20,iVar6 + ((iVar1 * 2 + -1) / DAT_362fea2c + 1) * DAT_362fea2c);
          iVar6 = DAT_362fea28;
        }
        local_c = (iVar6 + iVar1 * -2) * 0x30 + DAT_362fea24;
      }
      iVar6 = 0;
      if (0 < iVar1) {
        puVar7 = (undefined4 *)(local_c + 8);
        puVar8 = (undefined4 *)(iVar1 * 0x30 + 8 + local_c);
        do {
          iVar2 = *(int *)(DAT_362fe9d4 + 4 +
                          ((uint)*(byte *)(*(int *)(iVar5 + 0x3c) + iVar6) + *(int *)(param_2 + 8))
                          * 8);
          if (iVar2 == -1) {
            iVar2 = *(int *)(param_2 + 4) * 0x8c + DAT_362fe994;
            puVar7[-2] = *(undefined4 *)(iVar2 + 0x3c);
            puVar7[-1] = *(undefined4 *)(iVar2 + 0x40);
            *puVar7 = *(undefined4 *)(iVar2 + 0x44);
            puVar7[1] = *(undefined4 *)(iVar2 + 0x48);
            puVar7[2] = *(undefined4 *)(iVar2 + 0x4c);
            puVar7[3] = *(undefined4 *)(iVar2 + 0x50);
            puVar7[4] = *(undefined4 *)(iVar2 + 0x54);
            puVar7[5] = *(undefined4 *)(iVar2 + 0x58);
            puVar7[6] = *(undefined4 *)(iVar2 + 0x5c);
            puVar7[7] = *(undefined4 *)(iVar2 + 0x60);
            puVar7[8] = *(undefined4 *)(iVar2 + 100);
            puVar7[9] = *(undefined4 *)(iVar2 + 0x68);
            puVar8[-2] = *(undefined4 *)(iVar2 + 0xc);
            puVar8[-1] = *(undefined4 *)(iVar2 + 0x10);
            *puVar8 = *(undefined4 *)(iVar2 + 0x14);
            puVar8[1] = *(undefined4 *)(iVar2 + 0x18);
            puVar8[2] = *(undefined4 *)(iVar2 + 0x1c);
            puVar8[3] = *(undefined4 *)(iVar2 + 0x20);
            puVar8[4] = *(undefined4 *)(iVar2 + 0x24);
            puVar8[5] = *(undefined4 *)(iVar2 + 0x28);
            puVar8[6] = *(undefined4 *)(iVar2 + 0x2c);
            puVar8[7] = *(undefined4 *)(iVar2 + 0x30);
            puVar8[8] = *(undefined4 *)(iVar2 + 0x34);
            uVar3 = *(undefined4 *)(iVar2 + 0x38);
          }
          else {
            iVar4 = FUN_3615fda0(param_1 + 0xc);
            if (iVar2 < iVar4) {
              iVar2 = iVar2 * 0xe8 + *(int *)(param_1 + 0x10);
              puVar7[-2] = *(undefined4 *)(iVar2 + 0x88);
              puVar7[-1] = *(undefined4 *)(iVar2 + 0x8c);
              *puVar7 = *(undefined4 *)(iVar2 + 0x90);
              puVar7[1] = *(undefined4 *)(iVar2 + 0x94);
              puVar7[2] = *(undefined4 *)(iVar2 + 0x98);
              puVar7[3] = *(undefined4 *)(iVar2 + 0x9c);
              puVar7[4] = *(undefined4 *)(iVar2 + 0xa0);
              puVar7[5] = *(undefined4 *)(iVar2 + 0xa4);
              puVar7[6] = *(undefined4 *)(iVar2 + 0xa8);
              puVar7[7] = *(undefined4 *)(iVar2 + 0xac);
              puVar7[8] = *(undefined4 *)(iVar2 + 0xb0);
              puVar7[9] = *(undefined4 *)(iVar2 + 0xb4);
              puVar8[-2] = *(undefined4 *)(iVar2 + 0x58);
              puVar8[-1] = *(undefined4 *)(iVar2 + 0x5c);
              *puVar8 = *(undefined4 *)(iVar2 + 0x60);
              puVar8[1] = *(undefined4 *)(iVar2 + 100);
              puVar8[2] = *(undefined4 *)(iVar2 + 0x68);
              puVar8[3] = *(undefined4 *)(iVar2 + 0x6c);
              puVar8[4] = *(undefined4 *)(iVar2 + 0x70);
              puVar8[5] = *(undefined4 *)(iVar2 + 0x74);
              puVar8[6] = *(undefined4 *)(iVar2 + 0x78);
              puVar8[7] = *(undefined4 *)(iVar2 + 0x7c);
              puVar8[8] = *(undefined4 *)(iVar2 + 0x80);
              uVar3 = *(undefined4 *)(iVar2 + 0x84);
            }
            else {
              iVar2 = *(int *)(param_2 + 4) * 0x8c + DAT_362fe994;
              puVar7[-2] = *(undefined4 *)(iVar2 + 0x3c);
              puVar7[-1] = *(undefined4 *)(iVar2 + 0x40);
              *puVar7 = *(undefined4 *)(iVar2 + 0x44);
              puVar7[1] = *(undefined4 *)(iVar2 + 0x48);
              puVar7[2] = *(undefined4 *)(iVar2 + 0x4c);
              puVar7[3] = *(undefined4 *)(iVar2 + 0x50);
              puVar7[4] = *(undefined4 *)(iVar2 + 0x54);
              puVar7[5] = *(undefined4 *)(iVar2 + 0x58);
              puVar7[6] = *(undefined4 *)(iVar2 + 0x5c);
              puVar7[7] = *(undefined4 *)(iVar2 + 0x60);
              puVar7[8] = *(undefined4 *)(iVar2 + 100);
              puVar7[9] = *(undefined4 *)(iVar2 + 0x68);
              puVar8[-2] = *(undefined4 *)(iVar2 + 0xc);
              puVar8[-1] = *(undefined4 *)(iVar2 + 0x10);
              *puVar8 = *(undefined4 *)(iVar2 + 0x14);
              puVar8[1] = *(undefined4 *)(iVar2 + 0x18);
              puVar8[2] = *(undefined4 *)(iVar2 + 0x1c);
              puVar8[3] = *(undefined4 *)(iVar2 + 0x20);
              puVar8[4] = *(undefined4 *)(iVar2 + 0x24);
              puVar8[5] = *(undefined4 *)(iVar2 + 0x28);
              puVar8[6] = *(undefined4 *)(iVar2 + 0x2c);
              puVar8[7] = *(undefined4 *)(iVar2 + 0x30);
              puVar8[8] = *(undefined4 *)(iVar2 + 0x34);
              uVar3 = *(undefined4 *)(iVar2 + 0x38);
            }
          }
          puVar8[9] = uVar3;
          iVar6 = iVar6 + 1;
          puVar7 = puVar7 + 0xc;
          puVar8 = puVar8 + 0xc;
        } while (iVar6 < iVar1);
      }
      local_14 = local_14 + 0x48;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

