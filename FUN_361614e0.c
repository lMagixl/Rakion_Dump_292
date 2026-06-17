
CModelInstance * __thiscall FUN_361614e0(void *this,byte param_1)

{
  CModelInstance::~CModelInstance(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

