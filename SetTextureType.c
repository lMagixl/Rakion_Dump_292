
/* public: void __thiscall CModelRenderPrefs::SetTextureType(unsigned long) */

void __thiscall CModelRenderPrefs::SetTextureType(CModelRenderPrefs *this,ulong param_1)

{
                    /* 0xb46a0  3613  ?SetTextureType@CModelRenderPrefs@@QAEXK@Z */
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xffffff03 | param_1;
  return;
}

