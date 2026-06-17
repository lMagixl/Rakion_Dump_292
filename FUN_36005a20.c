
EBouncedWall * __thiscall FUN_36005a20(void *this,byte param_1)

{
  EBouncedWall::~EBouncedWall(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

