
CListNode * __thiscall FUN_36113c60(void *this,byte param_1)

{
  FUN_36113b10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

