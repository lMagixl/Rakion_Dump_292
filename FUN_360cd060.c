
CBrushArchive * __thiscall FUN_360cd060(void *this,byte param_1)

{
  CBrushArchive::~CBrushArchive(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

