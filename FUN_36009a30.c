
CTCriticalSection * __thiscall FUN_36009a30(void *this,byte param_1)

{
  FUN_36021d30(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

