
CSerial * __thiscall FUN_36002120(void *this,byte param_1)

{
  CSerial::~CSerial(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

