
void __cdecl
FUN_36046a70(int param_1,CTFileName *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,uint *param_6)

{
  int iVar1;
  
  if (-1 < param_1) {
    iVar1 = FUN_36047be0(0x362bf40c);
    if ((param_1 < iVar1) &&
       (iVar1 = param_1 * 100 + DAT_362bf410, *(int *)(param_1 * 100 + DAT_362bf410) != 0)) {
      CTFileName::operator=(param_2,*(CTFileName **)(iVar1 + 4));
      *param_6 = ~*(uint *)(iVar1 + 0x20) & 1;
      *param_3 = *(undefined4 *)(iVar1 + 0x18);
      *param_4 = *(undefined4 *)(iVar1 + 0x10);
      *param_5 = *(undefined4 *)(iVar1 + 0x14);
    }
  }
  return;
}

