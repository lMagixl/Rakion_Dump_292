
EDamage * __thiscall FUN_36012750(void *this,byte param_1)

{
  EDamage::~EDamage(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

