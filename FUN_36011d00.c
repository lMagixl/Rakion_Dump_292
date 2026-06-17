
xFile * __thiscall FUN_36011d00(void *this,byte param_1)

{
  Xenesis2::Foundation::File::xFile::~xFile(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

