
undefined4 * __thiscall FUN_361c06c2(void *this,byte param_1)

{
  FUN_361c918e(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

