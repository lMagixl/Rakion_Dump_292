
CEditModel * __thiscall FUN_360b2b80(void *this,byte param_1)

{
  CEditModel::~CEditModel(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

