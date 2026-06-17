
xWindowFile * __thiscall FUN_361a2bf0(void *this,byte param_1)

{
  Xenesis2::Device::File::xWindowFile::~xWindowFile(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

