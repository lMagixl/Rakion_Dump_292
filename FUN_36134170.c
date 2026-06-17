
void * __thiscall FUN_36134170(void *this,byte param_1)

{
  FUN_36133fb0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

