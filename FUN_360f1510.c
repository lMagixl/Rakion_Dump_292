
void __thiscall FUN_360f1510(void *this,int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(int *)((int)this + 0xc) - param_1) % *(int *)((int)this + 0x14);
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 < 0) {
      *(int *)((int)this + 0xc) = iVar1 + *(int *)((int)this + 0x14);
    }
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_1;
  }
  return;
}

