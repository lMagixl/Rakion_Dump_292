
int * __thiscall FUN_36009830(void *this,byte param_1)

{
  FUN_360e7d60(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

