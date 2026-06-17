
void * __thiscall FUN_361da472(void *this,byte param_1)

{
  thunk_FUN_361d5850();
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

