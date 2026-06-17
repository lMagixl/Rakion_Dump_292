
/* public: void __thiscall CWorldRenderPrefs::SetTextureLayerOn(int,long) */

void __thiscall
CWorldRenderPrefs::SetTextureLayerOn(CWorldRenderPrefs *this,int param_1,long param_2)

{
                    /* 0xd3750  3612  ?SetTextureLayerOn@CWorldRenderPrefs@@QAEXHJ@Z */
  *(int *)(this + param_2 * 4 + 0x50) = param_1;
  return;
}

