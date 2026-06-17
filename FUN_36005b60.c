
EPlayerInit * __thiscall FUN_36005b60(void *this,byte param_1)

{
  EPlayerInit::~EPlayerInit(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

