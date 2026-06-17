
CEntity * __thiscall FUN_36006210(void *this,byte param_1)

{
  CEntity::~CEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

