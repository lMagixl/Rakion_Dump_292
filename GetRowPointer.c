
/* public: unsigned long * __thiscall CTextureData::GetRowPointer(long) */

ulong * __thiscall CTextureData::GetRowPointer(CTextureData *this,long param_1)

{
                    /* 0x94270  2088  ?GetRowPointer@CTextureData@@QAEPAKJ@Z */
  if ((*(uint *)(this + 0x1c) & 0x300) == 0) {
    CPrintF(s_GetRowPointer____s__was_not_stat_3622ea18,*(undefined4 *)(this + 0xc));
    Force(this,0x300);
  }
  return (ulong *)(*(int *)(this + 0x60) +
                  (*(int *)(this + 0x20) >> ((byte)*(undefined4 *)(this + 0x28) & 0x1f)) * param_1 *
                  4);
}

