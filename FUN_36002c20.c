
CTMemoryStream * __thiscall FUN_36002c20(void *this,byte param_1)

{
  CTMemoryStream::~CTMemoryStream(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

