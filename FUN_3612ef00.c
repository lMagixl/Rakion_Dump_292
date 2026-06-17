
CCollisionInfo * __thiscall FUN_3612ef00(void *this,byte param_1)

{
  CCollisionInfo::~CCollisionInfo(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

