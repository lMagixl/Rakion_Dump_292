
CMovableEntity * __thiscall FUN_360a29b0(void *this,byte param_1)

{
  CMovableEntity::~CMovableEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

