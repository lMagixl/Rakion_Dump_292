
void __fastcall FUN_36209c10(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar2 = (undefined4 *)(param_1 + 0xc);
    do {
      FUN_36209ae0((int *)*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

