
/* public: void __thiscall CBrushSector::SetContentType(long) */

void __thiscall CBrushSector::SetContentType(CBrushSector *this,long param_1)

{
                    /* 0x4840  3419  ?SetContentType@CBrushSector@@QAEXJ@Z */
  this[0x47] = (CBrushSector)0x0;
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | param_1 << 0x18;
  return;
}

