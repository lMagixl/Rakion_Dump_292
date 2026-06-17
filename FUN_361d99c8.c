
undefined4 * __thiscall FUN_361d99c8(void *this,byte param_1)

{
  thunk_FUN_361d547e(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

