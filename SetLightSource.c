
/* public: void __thiscall CLightSource::SetLightSource(class CLightSource const &) */

void __thiscall CLightSource::SetLightSource(CLightSource *this,CLightSource *param_1)

{
  bool bVar1;
  CLightSource *this_00;
  
                    /* 0x1496c0  3498  ?SetLightSource@CLightSource@@QAEXABV1@@Z */
  if ((((*(float *)(this + 0x24) == *(float *)(param_1 + 0x24)) && (this[0x35] == param_1[0x35])) &&
      (*(int *)(this + 0x1c) == *(int *)(param_1 + 0x1c))) &&
     ((*(float *)(this + 0x38) == *(float *)(param_1 + 0x38) &&
      (*(float *)(this + 0x3c) == *(float *)(param_1 + 0x3c))))) {
    bVar1 = false;
    if (((*(float *)(this + 0x20) != *(float *)(param_1 + 0x20)) ||
        (*(int *)(this + 0x28) != *(int *)(param_1 + 0x28))) ||
       ((*(int *)(this + 0x2c) != *(int *)(param_1 + 0x2c) ||
        ((*(float *)(this + 0x30) != *(float *)(param_1 + 0x30) || (this[0x34] != param_1[0x34])))))
       ) {
      UncacheShadowMaps(this);
    }
  }
  else {
    bVar1 = true;
    DiscardShadowLayers(this);
  }
  SetLightSourceWithNoDiscarding(this,param_1);
  if (bVar1) {
    FindShadowLayers(this_00,0);
  }
  UpdateTerrains(this);
  return;
}

