
undefined4 * __thiscall FUN_361c06fa(void *this,byte param_1)

{
  FUN_361ca907(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

