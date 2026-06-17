
int __thiscall FUN_3620cc80(void *this,byte *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0x7fffffff;
  iVar1 = 0;
  if (0 < *(int *)this) {
    do {
      iVar2 = iVar1 + 1;
      *(undefined1 *)(*(int *)((int)this + 0xc) + -1 + iVar2) = 0xff;
      *(undefined1 *)(iVar1 + *(int *)((int)this + 0x10)) = 0;
      iVar1 = iVar2;
    } while (iVar2 < *(int *)this);
  }
  FUN_3620cac0(this,param_1,param_2);
  return *(int *)((int)this + 8);
}

