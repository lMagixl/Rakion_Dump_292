
void * __thiscall FUN_36186000(void *this,byte param_1)

{
  FUN_36185d10((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

