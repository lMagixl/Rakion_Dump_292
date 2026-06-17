
EPreLevelChange * __thiscall FUN_36005520(void *this,byte param_1)

{
  EPreLevelChange::~EPreLevelChange(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

