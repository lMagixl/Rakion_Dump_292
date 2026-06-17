
/* public: void __thiscall CLightSource::SetLayerParameters(class CBrushShadowLayer &,class
   CBrushPolygon &,class CLightRectangle &) */

void __thiscall
CLightSource::SetLayerParameters
          (CLightSource *this,CBrushShadowLayer *param_1,CBrushPolygon *param_2,
          CLightRectangle *param_3)

{
                    /* 0x1481e0  3494
                       ?SetLayerParameters@CLightSource@@QAEXAAVCBrushShadowLayer@@AAVCBrushPolygon@@AAVCLightRectangle@@@Z
                        */
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)param_3;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0xc);
  *(uint *)param_1 = *(uint *)param_1 | 2;
  CShadowMap::Invalidate((CShadowMap *)(param_2 + 0xd0),*(uint *)(this + 0x1c) & 0x80);
  if (((byte)this[0x1c] & 2) != 0) {
    CBrushShadowMap::QueueForCalculation((CBrushShadowMap *)(param_2 + 0xd0));
  }
  return;
}

