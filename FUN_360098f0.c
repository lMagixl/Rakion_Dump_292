
int * __thiscall FUN_360098f0(void *this,byte param_1)

{
  FUN_360e5970(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

