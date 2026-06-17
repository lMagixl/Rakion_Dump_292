
int * FUN_362037d0(void)

{
  int *piVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  
  piVar1 = malloc(0xc);
  if (piVar1 == (int *)0x0) {
    FUN_36203850(s_Not_enough_memory_362afe28,&DAT_36383d94,&DAT_36383d94);
  }
  *piVar1 = in_stack_00000010;
  piVar1[1] = in_stack_00000014;
  pvVar2 = malloc(in_stack_00000010 * in_stack_00000014 * 4);
  piVar1[2] = (int)pvVar2;
  if (pvVar2 == (void *)0x0) {
    FUN_36203850(s_Not_enough_memory_362afe28,&DAT_36383d94,&DAT_36383d94);
  }
  puVar5 = (undefined4 *)piVar1[2];
  for (uVar3 = in_stack_00000010 * in_stack_00000014 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar5 = 0;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  return piVar1;
}

