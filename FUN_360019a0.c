
exception * __thiscall FUN_360019a0(void *this,byte param_1)

{
  FUN_360019c0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

