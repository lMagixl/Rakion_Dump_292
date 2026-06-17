
CSessionState * __thiscall FUN_360fab40(void *this,byte param_1)

{
  CSessionState::~CSessionState(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

