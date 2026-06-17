
/* public: long __thiscall CBrushSector::GetHazeType(void) */

long __thiscall CBrushSector::GetHazeType(CBrushSector *this)

{
                    /* 0x48c0  1906  ?GetHazeType@CBrushSector@@QAEJXZ */
  return *(uint *)(this + 0x44) >> 8 & 0xf;
}

