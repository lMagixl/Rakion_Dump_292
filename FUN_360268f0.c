
void __thiscall FUN_360268f0(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x10) - param_1;
  *(int *)((int)this + 0x10) = iVar1;
  if (iVar1 == 0) {
    FreeMemory(*(void **)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
    return;
  }
  ShrinkMemory((void **)((int)this + 0xc),iVar1 * 4);
  return;
}

