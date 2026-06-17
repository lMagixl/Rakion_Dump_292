
int * __thiscall FUN_36009870(void *this,byte param_1)

{
  FUN_360eb1a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

