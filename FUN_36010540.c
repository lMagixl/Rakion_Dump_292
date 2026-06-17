
undefined4 * __thiscall FUN_36010540(void *this,byte param_1)

{
  FUN_36010560(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

