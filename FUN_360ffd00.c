
void __cdecl FUN_360ffd00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(DAT_362cf500 + 0x14);
  **(undefined1 **)(DAT_362cf500 + 0x14) = 0;
  *piVar2 = *piVar2 + 1;
  iVar1 = DAT_362cf500;
  **(undefined4 **)(DAT_362cf500 + 0x14) = param_1;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 4;
  piVar2 = (int *)(DAT_362cf500 + 0x14);
  **(undefined4 **)(DAT_362cf500 + 0x14) = param_2;
  *piVar2 = *piVar2 + 4;
  return;
}

