
void * __thiscall FUN_36039cf0(void *this,byte param_1)

{
  if ((param_1 & 2) != 0) {
    _eh_vector_destructor_iterator_(this,0x18,*(int *)((int)this + -4),FUN_36039af0);
    if ((param_1 & 1) != 0) {
      operator_delete__((void *)((int)this + -4));
    }
    return (void *)((int)this + -4);
  }
  FUN_36039af0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

