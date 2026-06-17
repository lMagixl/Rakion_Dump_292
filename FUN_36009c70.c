
xFileManager * __thiscall FUN_36009c70(void *this,byte param_1)

{
  Xenesis::xFileManager::~xFileManager(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

