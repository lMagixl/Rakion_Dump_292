
CShader * __thiscall FUN_36012fa0(void *this,byte param_1)

{
  CShader::~CShader(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

