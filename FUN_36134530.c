
void __fastcall FUN_36134530(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
    uVar3 = uVar2 >> 1;
    if (*(uint *)(param_1 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(param_1 + 8);
    }
    FUN_36133fc0(*(int *)(*(int *)(param_1 + 4) + uVar3 * 4) + (uVar2 & 1) * 8);
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

