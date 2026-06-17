
CRationalEntity * __thiscall FUN_36012ae0(void *this,byte param_1)

{
  CRationalEntity::~CRationalEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

