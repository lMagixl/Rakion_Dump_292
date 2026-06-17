
void * __thiscall FUN_36130640(void *this,byte param_1)

{
  FUN_3612f550((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

