
void __fastcall FUN_36134680(int param_1)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x10);
  while (iVar5 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar2 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      uVar4 = uVar2 >> 1;
      if (*(uint *)(param_1 + 8) <= uVar4) {
        uVar4 = uVar4 - *(uint *)(param_1 + 8);
      }
      FUN_36133fc0(*(int *)(*(int *)(param_1 + 4) + uVar4 * 4) + (uVar2 & 1) * 8);
      piVar1 = (int *)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar5 = *(int *)(param_1 + 0x10);
  }
  iVar5 = *(int *)(param_1 + 8);
  while (iVar5 != 0) {
    pvVar3 = *(void **)(*(int *)(param_1 + 4) + -4 + iVar5 * 4);
    iVar5 = iVar5 + -1;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

