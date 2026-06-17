
/* public: void __thiscall CModelRenderPrefs::SetShadingType(unsigned long) */

void __thiscall CModelRenderPrefs::SetShadingType(CModelRenderPrefs *this,ulong param_1)

{
                    /* 0xb46c0  3585  ?SetShadingType@CModelRenderPrefs@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffff8ff | param_1;
  return;
}

