
CLiveEntity * __thiscall FUN_36006320(void *this,byte param_1)

{
  CLiveEntity::~CLiveEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

