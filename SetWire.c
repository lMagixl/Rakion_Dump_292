
/* public: void __thiscall CModelRenderPrefs::SetWire(int) */

void __thiscall CModelRenderPrefs::SetWire(CModelRenderPrefs *this,int param_1)

{
                    /* 0xb46e0  3627  ?SetWire@CModelRenderPrefs@@QAEXH@Z */
  if (param_1 != 0) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
    return;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffe;
  return;
}

