
CEntityClass * __thiscall FUN_360077f0(void *this,byte param_1)

{
  CEntityClass::~CEntityClass(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

