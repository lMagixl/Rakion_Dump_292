
exception * __thiscall FUN_36001960(void *this,byte param_1)

{
  FUN_360018f0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

