
CTimer * __thiscall FUN_360099f0(void *this,byte param_1)

{
  CTimer::~CTimer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

