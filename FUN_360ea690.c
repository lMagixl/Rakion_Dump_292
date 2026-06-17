
void __thiscall FUN_360ea690(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 8) = iVar2;
  iVar1 = FUN_36036000(this);
  if (iVar1 < iVar2) {
    iVar1 = FUN_36036000(this);
    FUN_360ea4e0(this,iVar1 + *(int *)((int)this + 0xc));
  }
  *(undefined4 *)(*(int *)((int)this + 4) + -4 + *(int *)((int)this + 8) * 4) = param_1;
  return;
}

