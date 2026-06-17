
void __fastcall FUN_361345b0(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_36133fc0(*(int *)(*(int *)(param_1 + 4) + (*(uint *)(param_1 + 0xc) >> 1) * 4) +
                 (*(uint *)(param_1 + 0xc) & 1) * 8);
    uVar2 = *(int *)(param_1 + 0xc) + 1;
    *(uint *)(param_1 + 0xc) = uVar2;
    uVar3 = *(int *)(param_1 + 8) * 2;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
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

