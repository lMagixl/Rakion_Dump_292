
undefined4 __fastcall FUN_3604d290(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = FUN_3604c500(*(int *)(param_1 + 4),*(int *)(param_1 + 8),0);
    *(int **)(param_1 + 0x20) = piVar1;
    piVar1[0x31] = piVar1[0x31] & 0xfffffffe;
  }
  return *(undefined4 *)(param_1 + 0x20);
}

