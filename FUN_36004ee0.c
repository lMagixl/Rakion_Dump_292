
EInternal * __thiscall FUN_36004ee0(void *this,byte param_1)

{
  EInternal::~EInternal(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

