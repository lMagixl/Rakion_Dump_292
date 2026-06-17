
CMovableBrushEntity * __thiscall FUN_360a2b10(void *this,byte param_1)

{
  CMovableBrushEntity::~CMovableBrushEntity(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

