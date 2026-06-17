
undefined4 * __thiscall FUN_360109d0(void *this,byte param_1)

{
  FUN_360109f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

