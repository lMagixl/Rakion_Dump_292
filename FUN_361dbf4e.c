
undefined4 * __thiscall FUN_361dbf4e(void *this,byte param_1)

{
  FUN_361dbf33(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

