
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall CBrushPolygon::CalculateArea(void) */

double __thiscall CBrushPolygon::CalculateArea(CBrushPolygon *this)

{
  CBrushPolygonEdge *this_00;
  int iVar1;
  double local_80;
  double local_78;
  double local_70;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
                    /* 0x13a850  1121  ?CalculateArea@CBrushPolygon@@QAENXZ */
  local_80 = _DAT_36227d98;
  local_78 = _DAT_36227d98;
  iVar1 = *(int *)(this + 4);
  local_70 = _DAT_36227d98;
  if (0 < iVar1) {
    this_00 = *(CBrushPolygonEdge **)(this + 8);
    do {
      CBrushPolygonEdge::GetVertexCoordinatesPreciseRelative
                (this_00,(Vector<double,3> *)&local_20,(Vector<double,3> *)&local_38);
      this_00 = this_00 + 8;
      iVar1 = iVar1 + -1;
      local_80 = (local_28 * local_18 - local_30 * local_10) + local_80;
      local_78 = (local_38 * local_10 - local_20 * local_28) + local_78;
      local_70 = (local_20 * local_30 - local_38 * local_18) + local_70;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)this;
  return (local_80 * *(double *)(iVar1 + 0x28) +
         local_78 * *(double *)(iVar1 + 0x30) + local_70 * *(double *)(iVar1 + 0x38)) *
         _DAT_36227cd8;
}

