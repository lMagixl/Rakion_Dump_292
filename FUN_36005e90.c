
EDamageType * __thiscall FUN_36005e90(void *this,byte param_1)

{
  EDamageType::~EDamageType(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

