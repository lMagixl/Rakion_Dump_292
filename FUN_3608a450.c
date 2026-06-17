
CViewPort * __thiscall FUN_3608a450(void *this,byte param_1)

{
  CViewPort::~CViewPort(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

