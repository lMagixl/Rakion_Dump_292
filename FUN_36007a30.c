
CSkeleton * __thiscall FUN_36007a30(void *this,byte param_1)

{
  CSkeleton::~CSkeleton(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

