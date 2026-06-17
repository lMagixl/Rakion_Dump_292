
int * __thiscall FUN_3609d350(void *this,byte param_1)

{
  thunk_FUN_3609d800(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

