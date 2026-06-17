
EWouldFall * __thiscall FUN_36005340(void *this,byte param_1)

{
  EWouldFall::~EWouldFall(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

