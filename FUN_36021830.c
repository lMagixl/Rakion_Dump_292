
CListNode * __thiscall FUN_36021830(void *this,byte param_1)

{
  FUN_36021530(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

