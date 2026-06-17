
int * __thiscall FUN_360fb360(void *this,byte param_1)

{
  FUN_360cd470(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

