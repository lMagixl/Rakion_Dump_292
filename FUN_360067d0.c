
CMessageDispatcher * __thiscall FUN_360067d0(void *this,byte param_1)

{
  CMessageDispatcher::~CMessageDispatcher(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

