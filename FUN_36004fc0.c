
EVoid * __thiscall FUN_36004fc0(void *this,byte param_1)

{
  EVoid::~EVoid(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

