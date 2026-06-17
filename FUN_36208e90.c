
void __fastcall FUN_36208e90(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    puVar3 = (undefined4 *)(param_1 + 0xc);
    do {
      puVar1 = (undefined4 *)*puVar3;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_36208d60(puVar1);
        operator_delete(puVar1);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}

