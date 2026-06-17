
/* public: void __thiscall CFontData::SetFixedWidth(void) */

void __thiscall CFontData::SetFixedWidth(CFontData *this)

{
                    /* 0x2240  3464  ?SetFixedWidth@CFontData@@QAEXXZ */
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) | 1;
  return;
}

