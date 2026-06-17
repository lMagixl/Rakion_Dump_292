
/* public: long __thiscall CBrushSector::GetEnvironmentType(void) */

long __thiscall CBrushSector::GetEnvironmentType(CBrushSector *this)

{
                    /* 0x48f0  1859  ?GetEnvironmentType@CBrushSector@@QAEJXZ */
  return *(uint *)(this + 0x48) & 0xff;
}

