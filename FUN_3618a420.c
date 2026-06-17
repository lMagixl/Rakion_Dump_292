
void __fastcall FUN_3618a420(int param_1)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  while (iVar4 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar3 = *(int *)(param_1 + 0x10) + -1 + *(int *)(param_1 + 0xc);
      if (*(uint *)(param_1 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(param_1 + 8);
      }
      FUN_36189420(*(undefined4 **)(*(int *)(param_1 + 4) + uVar3 * 4));
      piVar1 = (int *)(param_1 + 0x10);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(param_1 + 0xc) = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0x10);
  }
  iVar4 = *(int *)(param_1 + 8);
  while (iVar4 != 0) {
    pvVar2 = *(void **)(*(int *)(param_1 + 4) + -4 + iVar4 * 4);
    iVar4 = iVar4 + -1;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

