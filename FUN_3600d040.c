
void * __thiscall FUN_3600d040(void *this,int param_1)

{
  int iVar1;
  void *this_00;
  
  iVar1 = 4;
  this_00 = this;
  do {
    FUN_36001f80(this_00,(param_1 - (int)this) + (int)this_00);
    this_00 = (void *)((int)this_00 + 0x144);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)((int)this + 0x510) = *(undefined4 *)(param_1 + 0x510);
  *(undefined4 *)((int)this + 0x514) = *(undefined4 *)(param_1 + 0x514);
  return this;
}

