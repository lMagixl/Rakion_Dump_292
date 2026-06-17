
/* public: void __thiscall CBrushPolygon::CreateBSPPolygon(class BSPPolygon<double,3> &) */

void __thiscall CBrushPolygon::CreateBSPPolygon(CBrushPolygon *this,BSPPolygon<double,3> *param_1)

{
  Vector<double,3> *pVVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  BSPPolygon<double,3> *pBVar5;
  
                    /* 0x13bb80  1411  ?CreateBSPPolygon@CBrushPolygon@@QAEXAAV?$BSPPolygon@N$02@@@Z
                        */
  puVar3 = *(undefined4 **)(*(int *)this + 0x24);
  pBVar5 = param_1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pBVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    pBVar5 = pBVar5 + 4;
  }
  iVar2 = FUN_36137160((void *)(*(int *)(this + 0x1ac) + 0x10),*(int *)this);
  *(int *)(param_1 + 0x34) = iVar2;
  iVar2 = FUN_3600be20((undefined4 *)(this + 4));
  FUN_3604c350(param_1 + 0x20,iVar2);
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      pVVar1 = (Vector<double,3> *)FUN_3604bc20(param_1 + 0x20,iVar4);
      CBrushPolygonEdge::GetVertexCoordinatesPreciseAbsolute
                ((CBrushPolygonEdge *)(*(int *)(this + 8) + iVar4 * 8),pVVar1,pVVar1 + 0x18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}

