
CMovableModelEntity * __thiscall FUN_360a2a60(void *this,byte param_1)

{
  CMovableModelEntity::~CMovableModelEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

