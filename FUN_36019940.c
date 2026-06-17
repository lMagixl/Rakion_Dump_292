
xFile * __thiscall FUN_36019940(void *this,byte param_1)

{
  Xenesis::xFile::~xFile(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

