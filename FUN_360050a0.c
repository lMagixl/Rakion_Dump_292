
EReturn * __thiscall FUN_360050a0(void *this,byte param_1)

{
  EReturn::~EReturn(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

