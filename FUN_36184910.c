
void __cdecl FUN_36184910(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_36184540();
  uVar1 = DAT_36301704;
  local_4 = FUN_36184ed0(0x363016f4);
  if (0 < local_4) {
    local_8 = 0;
    do {
      if ((*(byte *)(DAT_363016f8 + local_8) & 2) != 0) {
        DAT_363016e0 = 1;
        FUN_36184250(param_1,uVar1);
      }
      local_8 = local_8 + 0x48;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  iVar2 = FUN_36184eb0(0x363016e4);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      if ((*(byte *)(DAT_363016e8 + iVar3) & 2) != 0) {
        DAT_363016e0 = 1;
        FUN_36183d20(param_1);
      }
      iVar3 = iVar3 + 0x5c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

