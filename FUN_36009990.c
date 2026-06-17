
CInput * __thiscall FUN_36009990(void *this,byte param_1)

{
  CInput::~CInput(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

