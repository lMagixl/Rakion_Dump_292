
void __fastcall FUN_36105d80(int param_1)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x40c) = 1;
  DVar1 = timeGetTime();
  *(DWORD *)(param_1 + 0x410) = DVar1 + 1000;
  return;
}

