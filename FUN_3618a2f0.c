
void __fastcall FUN_3618a2f0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_36189420(*(undefined4 **)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4));
    uVar2 = *(int *)(param_1 + 0xc) + 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    if (*(uint *)(param_1 + 8) <= uVar2) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

