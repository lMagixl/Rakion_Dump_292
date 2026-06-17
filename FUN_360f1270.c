
CListNode * __thiscall FUN_360f1270(void *this,byte param_1)

{
  FUN_360f11a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

