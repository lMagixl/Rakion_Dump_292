
undefined4 __cdecl FUN_36008190(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (3 < (int)(param_2 - 0x10000U)) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      uVar1 = param_2 - 0x10000U >> 2;
      do {
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
    return 1;
  }
  return 0;
}

