
undefined4 * __thiscall FUN_361d5f78(void *this,byte param_1)

{
  FUN_361d547e(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

