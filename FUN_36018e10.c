
void * __thiscall FUN_36018e10(void *this,byte param_1)

{
  FUN_36017850((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

