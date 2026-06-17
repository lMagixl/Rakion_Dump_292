
void __thiscall FUN_361a9000(void *this,int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 4) - param_1;
  }
  iVar3 = *(int *)((int)this + 0x18);
  if (((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0)) || ((uint)(*(int *)(iVar3 + 4) - iVar3) <= uVar1)
     ) {
    uVar1 = 0;
    piVar2 = (int *)((int)this + 0xc);
    do {
      if (*piVar2 == param_1) break;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < 4);
    if (uVar1 < 3) {
      puVar4 = (undefined4 *)((int)this + uVar1 * 4 + 0x10);
      puVar5 = (undefined4 *)((int)this + uVar1 * 4 + 0xc);
      for (iVar3 = 3 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return;
}

