
int * __thiscall FUN_36140110(void *this,byte param_1)

{
  FUN_360e1540(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

