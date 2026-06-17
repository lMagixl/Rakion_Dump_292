
CAnimSet * __thiscall FUN_36007ab0(void *this,byte param_1)

{
  CAnimSet::~CAnimSet(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

