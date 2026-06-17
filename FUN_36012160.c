
ETouch * __thiscall FUN_36012160(void *this,byte param_1)

{
  ETouch::~ETouch(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

