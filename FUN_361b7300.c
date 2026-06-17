
void __cdecl FUN_361b7300(int param_1)

{
  bool bVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 4) = 0;
  *(undefined1 *)(*(int *)(param_1 + 4) + 1) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  bVar1 = param_1 == DAT_36382d10;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  if (bVar1) {
    FUN_361b72d0();
    return;
  }
  return;
}

