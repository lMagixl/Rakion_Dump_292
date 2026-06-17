
void __thiscall FUN_36209b90(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)((int)this + 8)) {
    puVar2 = (undefined4 *)((int)this + 0xc);
    do {
      FUN_36208ed0((void *)*puVar2,*(int **)((int)puVar2 + (param_1 - (int)this)));
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)((int)this + 8));
  }
  return;
}

