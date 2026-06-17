
undefined4 * __thiscall FUN_36044650(void *this,byte param_1)

{
  FUN_36044600(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

