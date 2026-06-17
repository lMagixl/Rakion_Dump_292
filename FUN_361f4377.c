
void __cdecl FUN_361f4377(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  puVar1 = (undefined4 *)(**(code **)param_1[1])(param_1,1,0x18);
  param_1[0x68] = (int)puVar1;
  *puVar1 = &DAT_361f3db2;
  iVar2 = param_1[9];
  if (iVar2 == 1) {
    bVar4 = param_1[8] == 1;
LAB_361f43c6:
    if (!bVar4) {
LAB_361f43c8:
      *(undefined4 *)(*param_1 + 0x14) = 8;
      (**(code **)*param_1)(param_1);
    }
  }
  else {
    if (1 < iVar2) {
      if (iVar2 < 4) {
        bVar4 = param_1[8] == 3;
      }
      else {
        if (5 < iVar2) goto LAB_361f43bc;
        bVar4 = param_1[8] == 4;
      }
      goto LAB_361f43c6;
    }
LAB_361f43bc:
    if (param_1[8] < 1) goto LAB_361f43c8;
  }
  iVar2 = param_1[10];
  if (iVar2 == 1) {
    iVar2 = 1;
    param_1[0x19] = 1;
    if ((param_1[9] == 1) || (param_1[9] == 3)) {
      puVar1[1] = FUN_361f3c5d;
      if (1 < param_1[8]) {
        iVar3 = 0x54;
        do {
          *(undefined1 *)(param_1[0x31] + 0x30 + iVar3) = 0;
          iVar2 = iVar2 + 1;
          iVar3 = iVar3 + 0x54;
        } while (iVar2 < param_1[8]);
      }
      goto LAB_361f447f;
    }
  }
  else if (iVar2 == 2) {
    param_1[0x19] = 3;
    if (param_1[9] == 3) {
      puVar1[1] = FUN_361f4159;
      goto LAB_361f4432;
    }
    bVar4 = param_1[9] == 2;
LAB_361f443e:
    if (bVar4) goto LAB_361f4440;
  }
  else {
    if (iVar2 == 4) {
      param_1[0x19] = 4;
      if (param_1[9] != 5) {
        bVar4 = param_1[9] == 4;
        goto LAB_361f443e;
      }
      puVar1[1] = FUN_361f3c80;
LAB_361f4432:
      FUN_361f3b42();
      goto LAB_361f447f;
    }
    if (iVar2 == param_1[9]) {
      param_1[0x19] = param_1[8];
LAB_361f4440:
      puVar1[1] = FUN_361f3bf2;
      goto LAB_361f447f;
    }
  }
  *(undefined4 *)(*param_1 + 0x14) = 0x19;
  (**(code **)*param_1)(param_1);
LAB_361f447f:
  if (*(char *)((int)param_1 + 0x4a) == '\0') {
    param_1[0x1a] = param_1[0x19];
  }
  else {
    param_1[0x1a] = 1;
  }
  return;
}

