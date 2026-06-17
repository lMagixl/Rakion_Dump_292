
void __fastcall FUN_360cce70(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_360caf20((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(param_1,iVar2);
      *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) & 0xfffffffe;
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)param_1);
    } while (iVar2 < iVar1);
  }
  FUN_360ccbb0(param_1);
  return;
}

