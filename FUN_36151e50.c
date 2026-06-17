
void __cdecl FUN_36151e50(int param_1,undefined1 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x7c) < 1) {
    uVar4 = param_3 + 5;
  }
  else {
    if (*(char *)(param_1 + 0x1c) == '\x02') {
      FUN_36151620(param_1);
    }
    FUN_36151940((int *)(param_1 + 0xb10));
    FUN_36151940((int *)(param_1 + 0xb1c));
    iVar2 = FUN_36151b40();
    uVar6 = *(int *)(param_1 + 0x16a0) + 10U >> 3;
    uVar4 = *(int *)(param_1 + 0x16a4) + 10U >> 3;
    if (uVar6 < uVar4) goto LAB_36151eb7;
  }
  uVar6 = uVar4;
LAB_36151eb7:
  if ((uVar6 < param_3 + 4U) || (param_2 == (undefined1 *)0x0)) {
    iVar7 = *(int *)(param_1 + 0x16b4);
    bVar3 = (byte)iVar7;
    if (uVar4 == uVar6) {
      iVar2 = param_4 + 2;
      if (iVar7 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar7 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar2 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        iVar7 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar7;
        *(undefined1 *)(iVar7 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
        iVar7 = *(int *)(param_1 + 0x16b4);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x16b4) = iVar7 + -0xd;
        *(ushort *)(param_1 + 0x16b0) = (ushort)iVar2 >> (0x10U - (char)iVar7 & 0x1f);
      }
      FUN_36151200(0x3623c080,0x3623c500);
      uVar5 = extraout_ECX_00;
    }
    else {
      iVar1 = param_4 + 4;
      if (iVar7 < 0xe) {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(int *)(param_1 + 0x16b4) = iVar7 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x16b0) =
             *(ushort *)(param_1 + 0x16b0) | (ushort)(iVar1 << (bVar3 & 0x1f));
        *(undefined1 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)) =
             *(undefined1 *)(param_1 + 0x16b0);
        iVar7 = *(int *)(param_1 + 0x14) + 1;
        *(int *)(param_1 + 0x14) = iVar7;
        *(undefined1 *)(iVar7 + *(int *)(param_1 + 8)) = *(undefined1 *)(param_1 + 0x16b1);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        *(ushort *)(param_1 + 0x16b0) =
             (ushort)iVar1 >> (0x10U - (char)*(int *)(param_1 + 0x16b4) & 0x1f);
        *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + -0xd;
      }
      FUN_36150ee0(*(int *)(param_1 + 0xb14) + 1,*(int *)(param_1 + 0xb20) + 1,iVar2 + 1);
      FUN_36151200(param_1 + 0x8c,param_1 + 0x980);
      uVar5 = extraout_ECX_01;
    }
  }
  else {
    FUN_36151bb0(param_1,param_2,param_3,param_4);
    uVar5 = extraout_ECX;
  }
  FUN_36150570(uVar5,param_1);
  if (param_4 == 0) {
    return;
  }
  FUN_36151750();
  return;
}

