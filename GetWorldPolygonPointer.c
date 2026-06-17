
/* public: class CBrushPolygon * __thiscall CEntity::GetWorldPolygonPointer(long) */

CBrushPolygon * __thiscall CEntity::GetWorldPolygonPointer(CEntity *this,long param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x126f30  2217  ?GetWorldPolygonPointer@CEntity@@QAEPAVCBrushPolygon@@J@Z */
  if (-1 < param_1) {
    iVar1 = *(int *)(*(int *)(this + 0xa8) + 0x34);
    iVar2 = FUN_360a5b10((undefined4 *)(iVar1 + 0x38));
    if (param_1 < iVar2) {
      return *(CBrushPolygon **)(*(int *)(iVar1 + 0x3c) + param_1 * 4);
    }
  }
  return (CBrushPolygon *)0x0;
}

