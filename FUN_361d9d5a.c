
void * __thiscall FUN_361d9d5a(void *this,byte param_1)

{
  FUN_361d5850();
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

