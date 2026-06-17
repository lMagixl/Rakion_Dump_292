
void * __thiscall FUN_36097cc0(void *this,byte param_1)

{
  FUN_36097cb0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

