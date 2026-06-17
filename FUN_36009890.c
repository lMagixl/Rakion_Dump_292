
int * __thiscall FUN_36009890(void *this,byte param_1)

{
  FUN_360ef7d0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

