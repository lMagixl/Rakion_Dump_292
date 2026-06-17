
EFirstWorldBase * __thiscall FUN_36005700(void *this,byte param_1)

{
  EFirstWorldBase::~EFirstWorldBase(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

