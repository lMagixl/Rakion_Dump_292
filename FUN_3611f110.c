
CShadingInfo * __thiscall FUN_3611f110(void *this,byte param_1)

{
  CShadingInfo::~CShadingInfo(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

