
void __thiscall FUN_360df2a0(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x10) == 0) {
    *(int *)((int)this + 0x10) = param_1;
    pvVar1 = AllocMemory(param_1 << 2);
    *(void **)((int)this + 0xc) = pvVar1;
    return;
  }
  iVar2 = *(int *)((int)this + 0x10) + param_1;
  *(int *)((int)this + 0x10) = iVar2;
  GrowMemory((void **)((int)this + 0xc),iVar2 * 4);
  return;
}

