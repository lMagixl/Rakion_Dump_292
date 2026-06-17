
CModelData * __thiscall FUN_360bc400(void *this,byte param_1)

{
  CModelData::~CModelData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

