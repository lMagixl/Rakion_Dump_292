
void __thiscall FUN_3620b1c0(void *this,int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (0 < *(int *)(param_1 + 4)) {
    puVar3 = *(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
    puVar4 = *(undefined4 **)(param_1 + 8);
    for (uVar1 = *(uint *)this & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    puVar3 = *(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
    puVar4 = *(undefined4 **)(param_1 + 0xc);
    for (uVar1 = *(uint *)this & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined1 *)puVar4 = *(undefined1 *)puVar3;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    iVar2 = 1;
    if (1 < *(int *)(param_1 + 4)) {
      do {
        FUN_3620b250(this,*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),
                     *(int **)(*(int *)(*(int *)(param_1 + 0x10) + iVar2 * 4) + 8));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
  }
  return;
}

