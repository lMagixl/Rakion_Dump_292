
void __thiscall FUN_361a8f80(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 4) - param_1;
  }
  iVar4 = *(int *)((int)this + 0x18);
  puVar3 = (undefined4 *)((int)this + 0x18);
  if (((iVar4 == 0) || (*(int *)(iVar4 + 4) == 0)) || ((uint)(*(int *)(iVar4 + 4) - iVar4) <= uVar1)
     ) {
    uVar5 = 0;
    piVar6 = (int *)((int)this + 0xc);
    do {
      iVar4 = *piVar6;
      if ((iVar4 == 0) || (*(int *)(iVar4 + 4) == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(int *)(iVar4 + 4) - iVar4;
      }
      if (uVar2 < uVar1) break;
      uVar5 = uVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar5 < 4);
    if (uVar5 < 3) {
      iVar4 = 3 - uVar5;
      do {
        *puVar3 = puVar3[-1];
        puVar3 = puVar3 + -1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(int *)((int)this + uVar5 * 4 + 0xc) = param_1;
  }
  return;
}

