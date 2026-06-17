
CSoundData * __thiscall FUN_36006c70(void *this,byte param_1)

{
  CSoundData::~CSoundData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

