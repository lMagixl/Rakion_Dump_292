
void * __thiscall FUN_3606b430(void *this,byte param_1)

{
  FUN_3606b340((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

