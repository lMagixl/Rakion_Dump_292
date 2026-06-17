
int * __thiscall FUN_36009910(void *this,byte param_1)

{
  FUN_360ea0e0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

