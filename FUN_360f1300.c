
void __thiscall FUN_360f1300(void *this,int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x14) == 0) {
    pvVar2 = AllocMemory(param_1);
    *(int *)((int)this + 0x10) = param_1;
    *(int *)((int)this + 0x14) = param_1;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(void **)((int)this + 0x18) = pvVar2;
    return;
  }
  iVar3 = param_1 - *(int *)((int)this + 0x14);
  GrowMemory((void **)((int)this + 0x18),param_1);
  iVar1 = *(int *)((int)this + 0xc);
  if ((*(int *)((int)this + 8) < iVar1) || (*(int *)((int)this + 0x10) == 0)) {
    pvVar2 = (void *)((int)*(void **)((int)this + 0x18) + iVar1);
    memmove((void *)((int)pvVar2 + iVar3),pvVar2,*(int *)((int)this + 0x14) - iVar1);
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar3;
  }
  iVar1 = *(int *)((int)this + 0x14);
  *(int *)((int)this + 0x14) = param_1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + (param_1 - iVar1);
  return;
}

