
exception * __thiscall FUN_360019f0(void *this,byte param_1)

{
  FUN_36001a10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

