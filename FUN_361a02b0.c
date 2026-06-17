
undefined4 * __thiscall FUN_361a02b0(void *this,byte param_1)

{
  FUN_361a02d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

