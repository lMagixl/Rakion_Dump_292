
exception * __thiscall FUN_36001b60(void *this,byte param_1)

{
  exception::~exception(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

