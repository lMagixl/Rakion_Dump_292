
int * __thiscall FUN_360098d0(void *this,byte param_1)

{
  FUN_360f08e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

