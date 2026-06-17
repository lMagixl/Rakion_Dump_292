
undefined4 * __thiscall FUN_36185cb0(void *this,byte param_1)

{
  FUN_36185cd0(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

