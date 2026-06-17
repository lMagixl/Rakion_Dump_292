
/* public: int __thiscall CModelRenderPrefs::HiddenLines(void) */

int __thiscall CModelRenderPrefs::HiddenLines(CModelRenderPrefs *this)

{
                    /* 0xb47c0  2262  ?HiddenLines@CModelRenderPrefs@@QAEHXZ */
  return *(uint *)(this + 0x10) >> 1 & 1;
}

