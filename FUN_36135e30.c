
CBrushMip * __thiscall FUN_36135e30(void *this,byte param_1)

{
  CBrushMip::~CBrushMip(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

