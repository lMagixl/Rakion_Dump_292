
void * __thiscall FUN_360326e0(void *this,byte param_1)

{
  FUN_36032430((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

