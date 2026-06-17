
undefined4 * __thiscall FUN_36185c50(void *this,byte param_1)

{
  FUN_36185c70(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

