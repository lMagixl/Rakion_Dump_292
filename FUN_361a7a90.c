
void * __thiscall FUN_361a7a90(void *this,byte param_1)

{
  FUN_361a79c0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

