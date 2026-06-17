
void __fastcall FUN_3603ac70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_3603a830(param_1);
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x14) != 0) {
    operator_delete__(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_3603ae90((undefined4 *)(param_1 + 0x14),iVar2 + iVar1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

