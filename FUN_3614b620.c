
undefined4 __cdecl FUN_3614b620(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 0x14) = 0;
    if (*(int *)(iVar1 + 0x18) < 0) {
      *(int *)(iVar1 + 0x18) = -*(int *)(iVar1 + 0x18);
    }
    *(uint *)(iVar1 + 4) = (-(uint)(*(int *)(iVar1 + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(iVar1 + 0x18) == 2) {
      uVar2 = FUN_3614a050(0,(uint *)0x0,0);
    }
    else {
      uVar2 = FUN_36149820(0,(byte *)0x0,0);
    }
    *(uint *)(param_1 + 0x30) = uVar2;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_36151850(iVar1);
    FUN_3614a9d0(extraout_ECX,iVar1);
    return 0;
  }
  return 0xfffffffe;
}

