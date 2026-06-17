
void __cdecl FUN_361f5821(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = param_1[0x69];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      *(code **)(iVar1 + 4) = FUN_361f5500;
    }
    else {
      *(code **)(iVar1 + 4) = FUN_361f5457;
    }
    *(undefined **)(iVar1 + 8) = &DAT_361f5820;
    iVar5 = param_1[0x1c];
    if (iVar5 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x37;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar5) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      uVar4 = (param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = (**(code **)(param_1[1] + 4))(param_1,1,uVar4);
        *(undefined4 *)(iVar1 + 0x20) = uVar3;
      }
      FUN_361e3969(*(undefined4 **)(iVar1 + 0x20),uVar4);
      if (*(int *)(iVar1 + 0x28) == 0) {
        FUN_361f576e();
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = FUN_361f49e5;
    *(undefined1 **)(iVar1 + 8) = &LAB_361f57fe;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    iVar5 = 0;
    do {
      FUN_361e3969(*(undefined4 **)(iVar2 + iVar5 * 4),0x1000);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

