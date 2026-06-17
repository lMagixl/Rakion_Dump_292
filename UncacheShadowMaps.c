
/* public: void __thiscall CLightSource::UncacheShadowMaps(void) */

void __thiscall CLightSource::UncacheShadowMaps(CLightSource *this)

{
  int *piVar1;
  
                    /* 0x148610  3871  ?UncacheShadowMaps@CLightSource@@QAEXXZ */
  for (piVar1 = *(int **)this; *piVar1 != 0; piVar1 = (int *)*piVar1) {
    CShadowMap::Invalidate((CShadowMap *)piVar1[2],*(uint *)(this + 0x1c) & 0x80);
  }
  return;
}

