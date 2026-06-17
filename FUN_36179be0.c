
void __cdecl FUN_36179be0(byte *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_2 * 0x94 + *(int *)(*(int *)(param_1 + 0x2c) + 0x10c);
  FUN_36179f30(param_1,param_2,(undefined4 *)*param_3);
  pcVar3 = StringDuplicate((char *)param_3[2]);
  StringFree(*(char **)(iVar5 + 8));
  *(char **)(iVar5 + 8) = pcVar3;
  *(undefined4 *)(iVar5 + 0xc) = param_3[3];
  *(undefined4 *)(iVar5 + 0x10) = param_3[4];
  *(undefined4 *)(iVar5 + 0x14) = param_3[5];
  *(undefined4 *)(iVar5 + 0x18) = param_3[6];
  *(undefined4 *)(iVar5 + 0x1c) = param_3[7];
  *(undefined4 *)(iVar5 + 0x20) = param_3[8];
  *(undefined4 *)(iVar5 + 0x24) = param_3[9];
  *(undefined4 *)(iVar5 + 0x28) = param_3[10];
  *(undefined4 *)(iVar5 + 0x2c) = param_3[0xb];
  *(undefined4 *)(iVar5 + 0x30) = param_3[0xc];
  *(undefined4 *)(iVar5 + 0x34) = param_3[0xd];
  *(undefined4 *)(iVar5 + 0x38) = param_3[0xe];
  *(undefined4 *)(iVar5 + 0x3c) = param_3[0xf];
  *(undefined4 *)(iVar5 + 0x40) = param_3[0x10];
  *(undefined4 *)(iVar5 + 0x44) = param_3[0x11];
  *(undefined4 *)(iVar5 + 0x48) = param_3[0x12];
  *(undefined4 *)(iVar5 + 0x4c) = param_3[0x13];
  *(undefined4 *)(iVar5 + 0x50) = param_3[0x14];
  *(undefined4 *)(iVar5 + 0x54) = param_3[0x15];
  *(undefined4 *)(iVar5 + 0x58) = param_3[0x16];
  *(undefined4 *)(iVar5 + 0x5c) = param_3[0x17];
  *(undefined4 *)(iVar5 + 0x60) = param_3[0x18];
  *(undefined4 *)(iVar5 + 100) = param_3[0x19];
  *(undefined4 *)(iVar5 + 0x68) = param_3[0x1a];
  *(undefined4 *)(iVar5 + 0x6c) = param_3[0x1b];
  *(undefined4 *)(iVar5 + 0x70) = param_3[0x1c];
  *(undefined4 *)(iVar5 + 0x74) = param_3[0x1d];
  *(undefined4 *)(iVar5 + 0x78) = param_3[0x1e];
  *(undefined4 *)(iVar5 + 0x7c) = param_3[0x1f];
  *(undefined4 *)(iVar5 + 0x80) = param_3[0x20];
  *(undefined4 *)(iVar5 + 0x84) = param_3[0x21];
  *(undefined4 *)(iVar5 + 0x88) = param_3[0x22];
  *(undefined4 *)(iVar5 + 0x8c) = param_3[0x23];
  *(undefined4 *)(iVar5 + 0x90) = param_3[0x24];
  piVar1 = *(int **)(iVar5 + 4);
  if (DAT_36300a94 == 0) {
    if (piVar1 != (int *)0x0) {
      FUN_36175520(piVar1);
      *(undefined4 *)(iVar5 + 4) = 0;
    }
    iVar2 = param_3[1];
    if (iVar2 != 0) {
      *(int *)(iVar5 + 4) = iVar2;
      FUN_36175510(iVar2);
      return;
    }
  }
  else if (piVar1 != (int *)0x0) {
    FUN_36175520(piVar1);
    *(undefined4 *)(iVar5 + 4) = 0;
  }
  uVar4 = FUN_36176bb0();
  *(undefined4 *)(iVar5 + 4) = uVar4;
  return;
}

