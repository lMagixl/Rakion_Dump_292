
void * __thiscall FUN_36185f70(void *this,byte param_1)

{
  FUN_36185c20((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

