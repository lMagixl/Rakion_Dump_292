
void __thiscall FUN_360f1d80(void *this,int param_1)

{
  FUN_360f1ce0(this);
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 0x10) = 1;
  *(int *)((int)this + 0xf8) = param_1;
  if (param_1 != 0) {
    *(void **)(param_1 + 0xf8) = this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  return;
}

