
/* public: int __thiscall CTextureData::IsModified(void) */

int __thiscall CTextureData::IsModified(CTextureData *this)

{
                    /* 0x3c30  2424  ?IsModified@CTextureData@@QAEHXZ */
  return *(uint *)(this + 0x1c) & 0x1700000;
}

