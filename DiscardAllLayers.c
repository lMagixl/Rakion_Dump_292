
/* public: void __thiscall CBrushShadowMap::DiscardAllLayers(void) */

void __thiscall CBrushShadowMap::DiscardAllLayers(CBrushShadowMap *this)

{
  CBrushShadowLayer *this_00;
  int *piVar1;
  int *piVar2;
  
                    /* 0x140c00  1507  ?DiscardAllLayers@CBrushShadowMap@@QAEXXZ */
  piVar2 = *(int **)(this + 0x90);
  while (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    this_00 = (CBrushShadowLayer *)(piVar2 + -1);
    piVar2 = piVar1;
    if (this_00 != (CBrushShadowLayer *)0x0) {
      CBrushShadowLayer::~CBrushShadowLayer(this_00);
      operator_delete(this_00);
    }
  }
  CShadowMap::Uncache((CShadowMap *)this);
  return;
}

