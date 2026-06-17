
/* public: void __thiscall CShadowMap::Invalidate(int) */

void __thiscall CShadowMap::Invalidate(CShadowMap *this,int param_1)

{
                    /* 0x91d50  2347  ?Invalidate@CShadowMap@@QAEXH@Z */
  if (param_1 != 0) {
    *(uint *)(this + 0x10) = *(uint *)(this + 0x10) | 1;
    return;
  }
  *(undefined4 *)(this + 0x3c) = 0x1f;
  return;
}

