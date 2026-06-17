
undefined4 * __thiscall FUN_360f1c70(void *this,byte param_1)

{
  FUN_360f1910(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

