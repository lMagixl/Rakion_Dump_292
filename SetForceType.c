
/* public: void __thiscall CBrushSector::SetForceType(long) */

void __thiscall CBrushSector::SetForceType(CBrushSector *this,long param_1)

{
                    /* 0x4870  3472  ?SetForceType@CBrushSector@@QAEXJ@Z */
  this[0x46] = (CBrushSector)0x0;
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | (param_1 & 0xffU) << 0x10;
  return;
}

