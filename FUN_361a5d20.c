
undefined4 * __thiscall FUN_361a5d20(void *this,undefined4 *param_1)

{
  FUN_361a89d0(this);
  *(undefined ***)this = &PTR_FUN_36243738;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  *(undefined4 *)((int)this + 0x1c) = param_1[1];
  *(undefined4 *)((int)this + 0x20) = param_1[2];
  *(undefined4 *)((int)this + 0x24) = param_1[3];
  *(undefined4 *)((int)this + 0x28) = param_1[4];
  *(undefined4 *)((int)this + 0x2c) = param_1[5];
  return this;
}

