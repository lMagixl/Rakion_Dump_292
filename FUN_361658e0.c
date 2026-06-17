
void __cdecl FUN_361658e0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  puVar3 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar4 = 0;
  iVar2 = FUN_3615fda0(param_1 + 0xc);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x10) + iVar2;
      *(undefined4 *)(iVar1 + 0x5c) = local_30[1];
      *(undefined4 *)(iVar1 + 0x60) = local_30[2];
      *(undefined4 *)(iVar1 + 100) = local_30[3];
      *(undefined4 *)(iVar1 + 0x68) = local_20;
      *(undefined4 *)(iVar1 + 0x70) = local_18;
      *(undefined4 *)(iVar1 + 0x74) = local_14;
      *(undefined4 *)(iVar1 + 0x78) = local_10;
      *(undefined4 *)(iVar1 + 0x7c) = local_c;
      *(undefined4 *)(iVar1 + 0x84) = local_4;
      *(undefined4 *)(iVar1 + 0x58) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x6c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x80) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x8c) = local_30[1];
      *(undefined4 *)(iVar1 + 0x90) = local_30[2];
      *(undefined4 *)(iVar1 + 0x94) = local_30[3];
      *(undefined4 *)(iVar1 + 0x98) = local_20;
      *(undefined4 *)(iVar1 + 0xa0) = local_18;
      *(undefined4 *)(iVar1 + 0xa4) = local_14;
      *(undefined4 *)(iVar1 + 0xa8) = local_10;
      *(undefined4 *)(iVar1 + 0xac) = local_c;
      *(undefined4 *)(iVar1 + 0x88) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x9c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0xb4) = local_4;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0xe8;
      iVar1 = FUN_3615fda0(param_1 + 0xc);
    } while (iVar4 < iVar1);
  }
  iVar4 = 1;
  iVar2 = FUN_36162460(0x362fe990);
  if (1 < iVar2) {
    iVar2 = 0x8c;
    do {
      iVar1 = DAT_362fe994 + iVar2;
      *(undefined4 *)(iVar1 + 0x10) = local_30[1];
      *(undefined4 *)(iVar1 + 0x14) = local_30[2];
      *(undefined4 *)(iVar1 + 0x18) = local_30[3];
      *(undefined4 *)(iVar1 + 0x1c) = local_20;
      *(undefined4 *)(iVar1 + 0x24) = local_18;
      *(undefined4 *)(iVar1 + 0x28) = local_14;
      *(undefined4 *)(iVar1 + 0x2c) = local_10;
      *(undefined4 *)(iVar1 + 0x30) = local_c;
      *(undefined4 *)(iVar1 + 0x38) = local_4;
      *(undefined4 *)(iVar1 + 0xc) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x20) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x34) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x40) = local_30[1];
      *(undefined4 *)(iVar1 + 0x44) = local_30[2];
      *(undefined4 *)(iVar1 + 0x48) = local_30[3];
      *(undefined4 *)(iVar1 + 0x4c) = local_20;
      *(undefined4 *)(iVar1 + 0x54) = local_18;
      *(undefined4 *)(iVar1 + 0x58) = local_14;
      *(undefined4 *)(iVar1 + 0x5c) = local_10;
      *(undefined4 *)(iVar1 + 0x60) = local_c;
      *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x50) = 0x3f800000;
      *(undefined4 *)(iVar1 + 100) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x68) = local_4;
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x8c;
      iVar1 = FUN_36162460(0x362fe990);
    } while (iVar4 < iVar1);
  }
  return;
}

