
CAOTimeInfo * __thiscall FUN_3619ee80(void *this,byte param_1)

{
  CAOTimeInfo::~CAOTimeInfo(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

