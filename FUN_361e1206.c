
void __cdecl FUN_361e1206(int param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x10c) & 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x5d) & 8) != 0) {
      return;
    }
  }
  else if ((*(uint *)(param_1 + 0x5c) & 0x300) == 0x300) {
    return;
  }
  uVar1 = FUN_361e6a06(*(uint *)(param_1 + 0x100),param_2,param_3);
  *(uint *)(param_1 + 0x100) = uVar1;
  return;
}

