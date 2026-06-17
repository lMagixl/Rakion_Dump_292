
exception * __thiscall FUN_36001830(void *this,byte param_1)

{
  FUN_36001850(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

