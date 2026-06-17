
CListNode * __thiscall FUN_36025a00(void *this,byte param_1)

{
  FUN_36025970(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

