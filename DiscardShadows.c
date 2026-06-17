
/* public: void __thiscall CBrushPolygon::DiscardShadows(void) */

void __thiscall CBrushPolygon::DiscardShadows(CBrushPolygon *this)

{
                    /* 0x141a20  1512  ?DiscardShadows@CBrushPolygon@@QAEXXZ */
  CBrushShadowMap::DiscardAllLayers((CBrushShadowMap *)(this + 0xd0));
  InitializeShadowMap(this);
  return;
}

