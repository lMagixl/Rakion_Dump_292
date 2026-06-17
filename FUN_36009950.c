
int * __thiscall FUN_36009950(void *this,byte param_1)

{
  FUN_360e6d10(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

