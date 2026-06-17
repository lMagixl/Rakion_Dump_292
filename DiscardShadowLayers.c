
/* public: void __thiscall CLightSource::DiscardShadowLayers(void) */

void __thiscall CLightSource::DiscardShadowLayers(CLightSource *this)

{
  int *piVar1;
  int *piVar2;
  CBrushShadowLayer *this_00;
  
                    /* 0x148640  1511  ?DiscardShadowLayers@CLightSource@@QAEXXZ */
  piVar2 = *(int **)this;
  while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    CShadowMap::Invalidate((CShadowMap *)piVar2[2],*(uint *)(this + 0x1c) & 0x80);
    this_00 = (CBrushShadowLayer *)(piVar2 + -3);
    piVar2 = piVar1;
    if (this_00 != (CBrushShadowLayer *)0x0) {
      CBrushShadowLayer::~CBrushShadowLayer(this_00);
      operator_delete(this_00);
    }
  }
  return;
}

