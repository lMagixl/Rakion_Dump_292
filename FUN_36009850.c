
int * __thiscall FUN_36009850(void *this,byte param_1)

{
  FUN_360ec2b0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

