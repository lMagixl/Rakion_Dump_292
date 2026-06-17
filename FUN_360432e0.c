
void * __thiscall FUN_360432e0(void *this,byte param_1)

{
  FUN_360e4610((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

