
CShell * __thiscall FUN_36009a10(void *this,byte param_1)

{
  CShell::~CShell(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

