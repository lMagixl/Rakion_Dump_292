
CTextureDataInfo * __thiscall FUN_360a7ff0(void *this,byte param_1)

{
  CTextureDataInfo::~CTextureDataInfo(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

