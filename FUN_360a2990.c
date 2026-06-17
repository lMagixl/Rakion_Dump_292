
undefined4 * __thiscall FUN_360a2990(void *this,byte param_1)

{
  FUN_360f17e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

