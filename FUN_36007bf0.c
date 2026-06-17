
CModelInstanceSerial * __thiscall FUN_36007bf0(void *this,byte param_1)

{
  CModelInstanceSerial::~CModelInstanceSerial(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

