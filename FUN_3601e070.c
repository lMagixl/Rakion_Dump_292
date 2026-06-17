
void * __thiscall FUN_3601e070(void *this,byte param_1)

{
  FUN_3601cc10((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

