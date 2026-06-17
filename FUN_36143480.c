
void __fastcall FUN_36143480(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_36143e10((void *)(param_1 + 0xec),3);
  *puVar1 = **(undefined4 **)(param_1 + 0xe4);
  puVar1[1] = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 4);
  puVar1[2] = *(undefined4 *)(param_1 + 0xe8);
  return;
}

