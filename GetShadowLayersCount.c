
/* public: long __thiscall CBrushShadowMap::GetShadowLayersCount(void) */

long __thiscall CBrushShadowMap::GetShadowLayersCount(CBrushShadowMap *this)

{
  long lVar1;
  
                    /* 0x4520  2097  ?GetShadowLayersCount@CBrushShadowMap@@QAEJXZ */
  lVar1 = CListHead::Count((CListHead *)(this + 0x90));
  return lVar1;
}

