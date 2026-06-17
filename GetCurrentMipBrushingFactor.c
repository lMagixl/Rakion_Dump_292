
/* public: float __thiscall CWorldRenderPrefs::GetCurrentMipBrushingFactor(float) */

float __thiscall
CWorldRenderPrefs::GetCurrentMipBrushingFactor(CWorldRenderPrefs *this,float param_1)

{
                    /* 0x114050  1817  ?GetCurrentMipBrushingFactor@CWorldRenderPrefs@@QAEMM@Z */
  if (*(int *)(this + 0x20) != 0) {
    return param_1;
  }
  return *(float *)(this + 0x24);
}

