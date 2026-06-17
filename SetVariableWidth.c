
/* public: void __thiscall CFontData::SetVariableWidth(void) */

void __thiscall CFontData::SetVariableWidth(CFontData *this)

{
                    /* 0x2250  3619  ?SetVariableWidth@CFontData@@QAEXXZ */
  *(uint *)(this + 0x30) = *(uint *)(this + 0x30) & 0xfffffffe;
  return;
}

