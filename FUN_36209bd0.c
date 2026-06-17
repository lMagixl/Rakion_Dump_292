
void __thiscall FUN_36209bd0(void *this,float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 8)) {
    puVar2 = (undefined4 *)((int)this + 0xc);
    do {
      FUN_36209a30((void *)*puVar2,param_1,param_2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 8));
  }
  return;
}

