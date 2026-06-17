
void * __thiscall FUN_361a04f0(void *this,byte param_1)

{
  FUN_361a0230((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

