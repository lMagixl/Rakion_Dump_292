
/* public: void __thiscall CLightSource::UpdateLayer(class CBrushShadowLayer &) */

void __thiscall CLightSource::UpdateLayer(CLightSource *this,CBrushShadowLayer *param_1)

{
  CBrushShadowMap *this_00;
  CLightRectangle local_1c [8];
  int local_14;
  int local_10;
  
                    /* 0x148320  3911  ?UpdateLayer@CLightSource@@QAEXAAVCBrushShadowLayer@@@Z */
  this_00 = *(CBrushShadowMap **)(param_1 + 0x14);
  CBrushShadowMap::FindLightRectangle(this_00,this,local_1c);
  if ((local_14 != 0) && (local_10 != 0)) {
    CBrushShadowLayer::DiscardShadows(param_1);
    SetLayerParameters(this,param_1,(CBrushPolygon *)(this_00 + -0xd0),local_1c);
    return;
  }
  CShadowMap::Invalidate(*(CShadowMap **)(param_1 + 0x14),*(uint *)(this + 0x1c) & 0x80);
  *(uint *)(this_00 + -8) = *(uint *)(this_00 + -8) & 0xfdffffff;
  CBrushShadowLayer::~CBrushShadowLayer(param_1);
  operator_delete(param_1);
  return;
}

