
EBlock * __thiscall FUN_36012530(void *this,byte param_1)

{
  EBlock::~EBlock(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

