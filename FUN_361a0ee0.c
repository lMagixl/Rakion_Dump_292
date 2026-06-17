
void __thiscall FUN_361a0ee0(void *this,int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = *(uint *)((int)this + 0x20);
  uVar4 = FUN_361856a0((int)(param_2 + 2));
  uVar4 = uVar4 & uVar2;
  if (*(uint *)((int)this + 0x24) <= uVar4) {
    uVar4 = uVar4 + (-1 - (uVar2 >> 1));
  }
  iVar3 = *(int *)((int)this + 0x14);
  iVar5 = uVar4 * 4;
  piVar1 = *(int **)(iVar5 + iVar3);
  while ((param_2 == piVar1 &&
         (*(undefined4 *)(iVar5 + iVar3) = **(undefined4 **)(iVar5 + iVar3), uVar4 != 0))) {
    iVar3 = *(int *)((int)this + 0x14);
    uVar4 = uVar4 - 1;
    iVar5 = uVar4 * 4;
    piVar1 = *(int **)(iVar5 + iVar3);
  }
  iVar5 = *param_2;
  if (param_2 != *(int **)((int)this + 8)) {
    *(int *)param_2[1] = iVar5;
    *(int *)(*param_2 + 4) = param_2[1];
    FUN_361a0230((int)param_2);
    operator_delete(param_2);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + -1;
  }
  *param_1 = iVar5;
  return;
}

