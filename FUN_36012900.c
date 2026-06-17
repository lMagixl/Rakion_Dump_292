
EDeath * __thiscall FUN_36012900(void *this,byte param_1)

{
  EDeath::~EDeath(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

