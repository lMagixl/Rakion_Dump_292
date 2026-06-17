
ELocalEntity * __thiscall FUN_36005c50(void *this,byte param_1)

{
  ELocalEntity::~ELocalEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

