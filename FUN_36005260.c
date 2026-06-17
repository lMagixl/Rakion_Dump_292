
ETimer * __thiscall FUN_36005260(void *this,byte param_1)

{
  ETimer::~ETimer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

