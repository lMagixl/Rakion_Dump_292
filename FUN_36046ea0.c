
void __cdecl FUN_36046ea0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_1) {
    iVar1 = FUN_36047be0(0x362bf40c);
    if ((param_1 < iVar1) && (piVar2 = (int *)(param_1 * 100 + DAT_362bf410), *piVar2 != 0)) {
      FUN_360464e0(piVar2);
      return;
    }
  }
  return;
}

