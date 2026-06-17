
void __thiscall FUN_36209b50(void *this,int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 8)) {
    puVar1 = (undefined4 *)((int)this + 0xc);
    do {
      FUN_362096e0((void *)*puVar1,*(int **)((int)puVar1 + (param_1 - (int)this)),param_2);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < *(int *)((int)this + 8));
  }
  return;
}

