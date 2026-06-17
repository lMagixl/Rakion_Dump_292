
void * __thiscall FUN_36179de0(void *this,byte param_1)

{
  FUN_36179f20();
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

