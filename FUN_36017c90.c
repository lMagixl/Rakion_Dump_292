
undefined4 * __thiscall FUN_36017c90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 1);
  *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)param_1 + 6);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  FUN_360148a0((void *)((int)this + 0x14),param_1 + 5);
  FUN_36014910((void *)((int)this + 0x1c),param_1 + 7);
  FUN_36010be0((void *)((int)this + 0x24),param_1 + 9);
  return this;
}

