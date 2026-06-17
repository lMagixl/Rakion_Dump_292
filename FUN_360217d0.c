
void * __thiscall FUN_360217d0(void *this,byte param_1)

{
  FUN_3601f4d0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

