
/* public: void __thiscall CLightSource::FindShadowLayers(int) */

void __thiscall CLightSource::FindShadowLayers(CLightSource *this,int param_1)

{
                    /* 0x149330  1643  ?FindShadowLayers@CLightSource@@QAEXH@Z */
  if ((*(uint *)(this + 0x1c) & 0x40) != 0) {
    return;
  }
  if ((*(uint *)(this + 0x1c) & 1) != 0) {
    FindShadowLayersDirectional(this,param_1);
    return;
  }
  FindShadowLayersPoint(this,param_1);
  return;
}

