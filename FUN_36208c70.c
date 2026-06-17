
int * __thiscall FUN_36208c70(void *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(int *)((int)this + 4) = param_1;
  uVar1 = FUN_361bf99c(param_1 << 2);
  *(undefined4 *)this = uVar1;
  iVar2 = 0;
  if (0 < *(int *)((int)this + 4)) {
    do {
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*(int *)this + -4 + iVar2 * 4) = 0;
    } while (iVar2 < *(int *)((int)this + 4));
  }
  return this;
}

