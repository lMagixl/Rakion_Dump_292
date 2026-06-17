
int * __thiscall FUN_360d3570(void *this,byte param_1)

{
  FUN_360d2dd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

