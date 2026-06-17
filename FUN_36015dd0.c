
void __fastcall FUN_36015dd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_36013910();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0xa9) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

