
/* public: void __thiscall CBrushSector::SetHazeType(long) */

void __thiscall CBrushSector::SetHazeType(CBrushSector *this,long param_1)

{
                    /* 0x48d0  3486  ?SetHazeType@CBrushSector@@QAEXJ@Z */
  *(uint *)(this + 0x44) = *(uint *)(this + 0x44) ^ (param_1 << 8 ^ *(uint *)(this + 0x44)) & 0xf00;
  return;
}

