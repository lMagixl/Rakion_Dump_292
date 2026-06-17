
ETeleport * __thiscall FUN_36005420(void *this,byte param_1)

{
  ETeleport::~ETeleport(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

