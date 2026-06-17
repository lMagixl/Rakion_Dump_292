
int * __thiscall FUN_36009970(void *this,byte param_1)

{
  FUN_360ed470(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

