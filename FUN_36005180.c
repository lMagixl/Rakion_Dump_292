
EBegin * __thiscall FUN_36005180(void *this,byte param_1)

{
  EBegin::~EBegin(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

