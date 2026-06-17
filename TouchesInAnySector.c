
/* public: int __thiscall CBrushPolygon::TouchesInAnySector(class CBrushPolygon &) */

int __thiscall CBrushPolygon::TouchesInAnySector(CBrushPolygon *this,CBrushPolygon *param_1)

{
  CBrushEdge *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* 0x13b530  3839  ?TouchesInAnySector@CBrushPolygon@@QAEHAAV1@@Z */
  iVar1 = FUN_3600be20((undefined4 *)(this + 4));
  iVar2 = FUN_3600be20((undefined4 *)(param_1 + 4));
  iVar4 = 0;
  if (iVar1 < 1) {
    return 0;
  }
  do {
    this_00 = *(CBrushEdge **)(*(int *)(this + 8) + iVar4 * 8);
    iVar5 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = CBrushEdge::TouchesInAnySector
                          (this_00,*(CBrushEdge **)(*(int *)(param_1 + 8) + iVar5 * 8));
        if (iVar3 != 0) {
          return 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < iVar1);
  return 0;
}

