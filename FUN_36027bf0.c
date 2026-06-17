
undefined4 * __thiscall FUN_36027bf0(void *this,byte param_1)

{
  FUN_3608d6d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

