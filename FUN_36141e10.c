
CBrushShadowLayer * __thiscall FUN_36141e10(void *this,byte param_1)

{
  CBrushShadowLayer::~CBrushShadowLayer(this);
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}

