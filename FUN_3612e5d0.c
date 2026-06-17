
CModelObject * __thiscall FUN_3612e5d0(void *this,byte param_1)

{
  CModelObject::~CModelObject(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

