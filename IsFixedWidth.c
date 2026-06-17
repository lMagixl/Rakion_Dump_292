
/* public: int __thiscall CFontData::IsFixedWidth(void)const  */

int __thiscall CFontData::IsFixedWidth(CFontData *this)

{
                    /* 0x2210  2392  ?IsFixedWidth@CFontData@@QBEHXZ */
  return *(uint *)(this + 0x30) & 1;
}

