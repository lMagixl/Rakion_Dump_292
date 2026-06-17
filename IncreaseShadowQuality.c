
/* public: void __thiscall CModelRenderPrefs::IncreaseShadowQuality(void) */

void __thiscall CModelRenderPrefs::IncreaseShadowQuality(CModelRenderPrefs *this)

{
                    /* 0xb4750  2280  ?IncreaseShadowQuality@CModelRenderPrefs@@QAEXXZ */
  if (0 < *(int *)(this + 0x14)) {
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  }
  return;
}

