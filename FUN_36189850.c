
undefined4 * __thiscall FUN_36189850(void *this,byte param_1)

{
  FUN_36189420(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

