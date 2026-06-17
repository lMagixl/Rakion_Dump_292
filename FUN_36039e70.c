
void * __thiscall FUN_36039e70(void *this,byte param_1)

{
  FUN_361a8e70((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

