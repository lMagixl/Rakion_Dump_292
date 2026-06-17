
int * __thiscall FUN_36105940(void *this,byte param_1)

{
  thunk_FUN_36105ea0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

