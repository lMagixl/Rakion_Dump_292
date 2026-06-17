
undefined4 * __thiscall FUN_361bc770(void *this,byte param_1)

{
  FUN_361bc7c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

