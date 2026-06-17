
/* public: void __thiscall CBrushSector::TriangularizePolygon(class CBrushPolygon *) */

void __thiscall CBrushSector::TriangularizePolygon(CBrushSector *this,CBrushPolygon *param_1)

{
                    /* 0x13e390  3853  ?TriangularizePolygon@CBrushSector@@QAEXPAVCBrushPolygon@@@Z
                        */
  CWorld::ClearMarkedForUseFlag
            (*(CWorld **)(*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x668) + 0xa8));
  *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) | 0x80000000;
  TriangularizeMarkedPolygons(this);
  UpdateVertexChanges(this);
  return;
}

