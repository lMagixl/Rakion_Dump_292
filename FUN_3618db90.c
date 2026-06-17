
undefined4 * __thiscall FUN_3618db90(void *this,byte param_1)

{
  FUN_361bc1a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

