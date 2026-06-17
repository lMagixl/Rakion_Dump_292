
CLastPositions * __thiscall FUN_3612eee0(void *this,byte param_1)

{
  CLastPositions::~CLastPositions(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

