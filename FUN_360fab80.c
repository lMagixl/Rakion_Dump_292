
CWorld * __thiscall FUN_360fab80(void *this,byte param_1)

{
  CWorld::~CWorld(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

