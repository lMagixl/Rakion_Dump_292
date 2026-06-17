
/* public: void __thiscall CBrushSector::SetFogType(long) */

void __thiscall CBrushSector::SetFogType(CBrushSector *this,long param_1)

{
                    /* 0x48a0  3470  ?SetFogType@CBrushSector@@QAEXJ@Z */
  *(uint *)(this + 0x44) =
       *(uint *)(this + 0x44) ^ (param_1 << 0xc ^ *(uint *)(this + 0x44)) & 0xf000;
  return;
}

