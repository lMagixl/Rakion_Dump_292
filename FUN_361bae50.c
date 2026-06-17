
void * __thiscall FUN_361bae50(void *this,byte param_1)

{
  FUN_361bab90((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

