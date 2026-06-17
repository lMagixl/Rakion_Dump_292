
CTextureData * __thiscall FUN_36003c40(void *this,byte param_1)

{
  CTextureData::~CTextureData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

