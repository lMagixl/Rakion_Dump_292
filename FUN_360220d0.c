
void __thiscall FUN_360220d0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (this != (void *)0x0) {
    iVar1 = *(int *)((int)this + 0x18) + 1;
    memmove(*(void **)((int)this + 8),(void *)(iVar1 * param_1 + (int)*(void **)((int)this + 8)),
            (*(int *)((int)this + 0x1c) - param_1) * iVar1);
    memmove(*(void **)((int)this + 0x20),(void *)((int)*(void **)((int)this + 0x20) + param_1 * 4),
            (*(int *)((int)this + 0x1c) - param_1) * 4);
    iVar1 = *(int *)((int)this + 0x1c);
    iVar2 = *(int *)((int)this + 0x24) + 1;
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    iVar3 = iVar1 - param_1;
    *(int *)((int)this + 0x24) = iVar2;
    if (iVar3 < iVar1) {
      do {
        FUN_36021f20(this,iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)((int)this + 0x1c));
    }
  }
  return;
}

