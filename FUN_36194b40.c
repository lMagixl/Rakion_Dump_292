
void __cdecl FUN_36194b40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_361bf99c(0x210);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x208) = 0;
    *(undefined4 *)(iVar1 + 0x20c) = param_1;
    return;
  }
  uRam0000020c = param_1;
  return;
}

