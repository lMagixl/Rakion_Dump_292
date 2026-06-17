
void __cdecl FUN_361f1a56(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x184);
  if (*(int *)(iVar1 + 0x10) != 0) {
    if (*(char *)(param_1 + 0x49) != '\0') {
      uVar2 = FUN_361f1456();
      if ((char)uVar2 != '\0') {
        *(undefined1 **)(iVar1 + 0xc) = &LAB_361f1539;
        goto LAB_361f1a87;
      }
    }
    *(code **)(iVar1 + 0xc) = FUN_361f12f0;
  }
LAB_361f1a87:
  *(undefined4 *)(param_1 + 0x88) = 0;
  return;
}

