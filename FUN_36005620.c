
EPostLevelChange * __thiscall FUN_36005620(void *this,byte param_1)

{
  EPostLevelChange::~EPostLevelChange(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

