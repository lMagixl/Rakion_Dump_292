
undefined4 * __thiscall FUN_3619d780(void *this,byte param_1)

{
  FUN_3619d6a0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

