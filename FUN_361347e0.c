
LoadModelMng * __thiscall FUN_361347e0(void *this,byte param_1)

{
  LoadModelMng::~LoadModelMng(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

