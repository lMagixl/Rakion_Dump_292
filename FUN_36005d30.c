
ERemoteEntity * __thiscall FUN_36005d30(void *this,byte param_1)

{
  ERemoteEntity::~ERemoteEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

