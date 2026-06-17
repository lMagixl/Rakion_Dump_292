
/* public: long __thiscall CFontData::GetCharWidthA(char)const  */

long __thiscall CFontData::GetCharWidthA(CFontData *this,char param_1)

{
                    /* 0xd100  1752  ?GetCharWidthA@CFontData@@QBEJD@Z */
  if (((byte)this[0x30] & 1) != 0) {
    return *(long *)(this + 0x1c);
  }
  return *(int *)(this + (uint)(byte)param_1 * 0x10 + 0x54) -
         *(int *)(this + ((byte)param_1 + 5) * 0x10);
}

