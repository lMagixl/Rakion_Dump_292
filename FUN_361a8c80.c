
undefined4 * __thiscall FUN_361a8c80(void *this,byte param_1)

{
  thunk_FUN_361a8a20(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

