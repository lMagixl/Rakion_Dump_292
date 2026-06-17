
undefined4 __cdecl FUN_36046b20(int param_1)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = FUN_36047be0(0x362bf40c);
    if ((param_1 < iVar1) && (*(int *)(param_1 * 100 + DAT_362bf410) != 0)) {
      return *(undefined4 *)(param_1 * 100 + DAT_362bf410 + 0x1c);
    }
  }
  return 0;
}

