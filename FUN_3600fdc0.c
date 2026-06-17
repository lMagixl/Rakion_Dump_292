
void * __thiscall FUN_3600fdc0(void *this,byte param_1)

{
  FUN_3600b530((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

