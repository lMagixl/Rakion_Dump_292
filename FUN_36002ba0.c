
CTFileStream * __thiscall FUN_36002ba0(void *this,byte param_1)

{
  CTFileStream::~CTFileStream(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

