
void __thiscall FUN_36019850(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) &&
     ((uint)(*(int *)((int)this + 8) - iVar1 >> 7) < (uint)(*(int *)((int)this + 0xc) - iVar1 >> 7))
     ) {
    puVar2 = *(undefined4 **)((int)this + 8);
    FUN_360141c0(puVar2,1,param_1);
    *(undefined4 **)((int)this + 8) = puVar2 + 0x20;
    return;
  }
  FUN_36017240(this,*(undefined4 **)((int)this + 8),1,param_1);
  return;
}

