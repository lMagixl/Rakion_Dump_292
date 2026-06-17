
void __fastcall FUN_3603ba10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_3603c2b0(param_1);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(undefined4 *)(param_1[1] + 0xc + iVar1) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x14;
      iVar2 = FUN_3603c2b0(param_1);
    } while (iVar3 < iVar2);
  }
  iVar3 = 0;
  iVar1 = FUN_3603c310(param_1 + 2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      iVar2 = param_1[3];
      *(undefined4 *)(iVar1 + 0x18 + iVar2) = 0;
      *(undefined4 *)(iVar1 + 0x1c + iVar2) = 0;
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + 0x28;
      iVar2 = FUN_3603c310(param_1 + 2);
    } while (iVar3 < iVar2);
  }
  return;
}

