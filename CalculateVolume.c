
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: double __thiscall CBrushSector::CalculateVolume(void) */

double __thiscall CBrushSector::CalculateVolume(CBrushSector *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* 0x13c8e0  1138  ?CalculateVolume@CBrushSector@@QAENXZ */
  local_c = 0xffffffff;
  puStack_10 = &LAB_362196bc;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_360d3920();
  local_28 = _DAT_36227d98;
  iVar3 = 0;
  local_c = 0;
  if (0 < *(int *)(this + 0x18)) {
    iVar1 = *(int *)(this + 0x1c);
    do {
      iVar2 = iVar3 * 0x1d0;
      dVar4 = CBrushPolygon::CalculateArea((CBrushPolygon *)(iVar1 + iVar2));
      iVar1 = *(int *)(this + 0x1c);
      iVar3 = iVar3 + 1;
      local_28 = dVar4 * *(double *)(*(int *)(iVar1 + iVar2) + 0x40) * _DAT_36238ab0 + local_28;
    } while (iVar3 < *(int *)(this + 0x18));
  }
  local_c = 0xffffffff;
  if (local_28 < _DAT_36227d98) {
    *(uint *)(this + 0x44) = *(uint *)(this + 0x44) & 0xfffffff7;
  }
  else {
    *(uint *)(this + 0x44) = *(uint *)(this + 0x44) | 8;
    if (*(int *)(*(int *)(*(int *)(this + 0x38) + 0x14) + 0x66c) != 0) {
      CPrintF(s_Warning__Open_sector_in_a_field_b_36238a88);
    }
  }
  Triangulate(this);
  ExceptionList = local_14;
  return local_28;
}

