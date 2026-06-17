
undefined4 * __thiscall
FUN_3608d670(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined ***)this = &PTR_FUN_362253d8;
  CDrawPort::CDrawPort((CDrawPort *)((int)this + 8));
  *(void **)((int)this + 8) = this;
  *(undefined4 *)((int)this + 100) = param_1;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_1;
  *(undefined4 *)((int)this + 0x70) = param_3;
  *(undefined4 *)((int)this + 0x68) = param_2;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x2c) = param_2;
  return this;
}

