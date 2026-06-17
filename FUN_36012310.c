
EPass * __thiscall FUN_36012310(void *this,byte param_1)

{
  EPass::~EPass(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

