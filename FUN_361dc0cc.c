
undefined4 * __thiscall FUN_361dc0cc(void *this,byte param_1)

{
  FUN_361dbe62(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

