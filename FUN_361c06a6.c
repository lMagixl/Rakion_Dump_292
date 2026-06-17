
undefined4 * __thiscall FUN_361c06a6(void *this,byte param_1)

{
  FUN_361c8f86(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

