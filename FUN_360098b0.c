
int * __thiscall FUN_360098b0(void *this,byte param_1)

{
  FUN_360e8f20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

