
void * __thiscall FUN_36134100(void *this,byte param_1)

{
  FUN_36133fc0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

