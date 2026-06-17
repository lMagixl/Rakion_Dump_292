
CTStream * __thiscall FUN_36002aa0(void *this,byte param_1)

{
  CTStream::~CTStream(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

