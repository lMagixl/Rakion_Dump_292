
void __fastcall FUN_360f21b0(int param_1)

{
  uint *puVar1;
  int iVar2;
  
  CTimer::GetHighPrecisionTimer(_pTimer);
  if (*(int *)(param_1 + 0x2c) != 0) {
    do {
      puVar1 = (uint *)FUN_360febf0(param_1 + 0x18);
      FUN_360ff390((void *)(param_1 + 0x18),0);
      iVar2 = FUN_360fee10((void *)(*(int *)(param_1 + 0xf8) + 0x88),puVar1,0);
      if (iVar2 == 0) {
        FUN_360ff0d0(puVar1);
      }
    } while (*(int *)(param_1 + 0x2c) != 0);
  }
  iVar2 = *(int *)(param_1 + 0xf8);
  if (*(int *)(iVar2 + 0x2c) != 0) {
    do {
      FUN_360febf0(iVar2 + 0x18);
      puVar1 = FUN_360fec00((int *)(*(int *)(param_1 + 0xf8) + 0x18));
      iVar2 = FUN_360fee10((void *)(param_1 + 0x88),puVar1,0);
      if (iVar2 == 0) {
        FUN_360ff0d0(puVar1);
      }
      iVar2 = *(int *)(param_1 + 0xf8);
    } while (*(int *)(iVar2 + 0x2c) != 0);
  }
  return;
}

