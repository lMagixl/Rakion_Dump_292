
/* public: void __thiscall CBrushSector::UpdateVertexChanges(void) */

void __thiscall CBrushSector::UpdateVertexChanges(CBrushSector *this)

{
                    /* 0x13e370  3931  ?UpdateVertexChanges@CBrushSector@@QAEXXZ */
  MakePlanesFromVertices(this);
  *(uint *)(this + 0x4c) = *(uint *)(this + 0x4c) | 1;
  UpdateSector(this);
  return;
}

