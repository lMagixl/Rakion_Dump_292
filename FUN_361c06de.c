
undefined4 * __thiscall FUN_361c06de(void *this,byte param_1)

{
  FUN_361ca07e(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

