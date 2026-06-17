
/* public: void __thiscall CBrushShadowMap::RemoveDummyLayers(void) */

void __thiscall CBrushShadowMap::RemoveDummyLayers(CBrushShadowMap *this)

{
  CBrushShadowLayer *this_00;
  int *piVar1;
  int *piVar2;
  
                    /* 0x140c60  3130  ?RemoveDummyLayers@CBrushShadowMap@@QAEXXZ */
  piVar1 = *(int **)(this + 0x90);
  while (piVar2 = piVar1, piVar1 = (int *)*piVar2, piVar1 != (int *)0x0) {
    if ((piVar2[5] == 0) &&
       (this_00 = (CBrushShadowLayer *)(piVar2 + -1), this_00 != (CBrushShadowLayer *)0x0)) {
      CBrushShadowLayer::~CBrushShadowLayer(this_00);
      operator_delete(this_00);
    }
  }
  return;
}

