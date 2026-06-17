
/* public: void __thiscall CBrushSector::SetEnvironmentType(long) */

void __thiscall CBrushSector::SetEnvironmentType(CBrushSector *this,long param_1)

{
                    /* 0x4900  3452  ?SetEnvironmentType@CBrushSector@@QAEXJ@Z */
  this[0x48] = (CBrushSector)0x0;
  *(uint *)(this + 0x48) = *(uint *)(this + 0x48) | param_1 & 0xffU;
  return;
}

