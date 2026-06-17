
int __cdecl FUN_360b4650(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((param_1 & 1 << ((byte)iVar1 & 0x1f)) != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return 0;
}

