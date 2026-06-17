
CPlayerEntity * __thiscall FUN_360a2be0(void *this,byte param_1)

{
  CPlayerEntity::~CPlayerEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

