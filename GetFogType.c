
/* public: long __thiscall CBrushSector::GetFogType(void) */

long __thiscall CBrushSector::GetFogType(CBrushSector *this)

{
                    /* 0x4890  1880  ?GetFogType@CBrushSector@@QAEJXZ */
  return *(uint *)(this + 0x44) >> 0xc & 0xf;
}

