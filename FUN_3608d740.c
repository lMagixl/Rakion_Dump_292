
void __thiscall FUN_3608d740(void *this,int param_1,int param_2)

{
  if (param_1 < 1) {
    param_1 = 1;
  }
  if (param_2 < 1) {
    param_2 = 1;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(int *)((int)this + 100) = param_1;
  *(int *)((int)this + 0x68) = param_2;
  *(int *)((int)this + 0x18) = param_1;
  *(int *)((int)this + 0x28) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  *(int *)((int)this + 0x2c) = param_2;
  return;
}

