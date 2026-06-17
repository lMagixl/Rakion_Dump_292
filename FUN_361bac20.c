
undefined4 * __thiscall FUN_361bac20(void *this,byte param_1)

{
  FUN_361bac40(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

