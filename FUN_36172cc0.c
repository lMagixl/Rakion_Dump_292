
void * __thiscall FUN_36172cc0(void *this,byte param_1)

{
  FUN_36173ac0((int)this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

