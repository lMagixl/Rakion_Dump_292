
void * __thiscall FUN_361ced5b(void *this,byte param_1)

{
  FUN_361ced02((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

