
/* public: void __thiscall CModelRenderPrefs::SetHiddenLines(int) */

void __thiscall CModelRenderPrefs::SetHiddenLines(CModelRenderPrefs *this,int param_1)

{
                    /* 0xb4700  3488  ?SetHiddenLines@CModelRenderPrefs@@QAEXH@Z */
  if (param_1 != 0) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 2;
    return;
  }
  *(uint *)(this + 0x10) = *(uint *)(this + 0x10) & 0xfffffffd;
  return;
}

