
CFontData * __thiscall FUN_36002490(void *this,byte param_1)

{
  CFontData::~CFontData(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

