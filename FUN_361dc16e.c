
undefined4 * __thiscall FUN_361dc16e(void *this,byte param_1)

{
  thunk_FUN_361dbe62(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

