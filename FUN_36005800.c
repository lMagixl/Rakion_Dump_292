
ETakingBreath * __thiscall FUN_36005800(void *this,byte param_1)

{
  ETakingBreath::~ETakingBreath(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

