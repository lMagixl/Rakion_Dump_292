
CMD5 * __thiscall FUN_36002750(void *this,byte param_1)

{
  CMD5::~CMD5(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

