
/* public: long __thiscall CEntity::GetWorldPolygonIndex(class CBrushPolygon *) */

long __thiscall CEntity::GetWorldPolygonIndex(CEntity *this,CBrushPolygon *param_1)

{
                    /* 0x125be0  2216  ?GetWorldPolygonIndex@CEntity@@QAEJPAVCBrushPolygon@@@Z */
  if (param_1 == (CBrushPolygon *)0x0) {
    return -1;
  }
  return *(long *)(param_1 + 0x1c8);
}

