
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: int __thiscall CMovableEntity::WouldFallInNextPosition(void) */

int __thiscall CMovableEntity::WouldFallInNextPosition(CMovableEntity *this)

{
  CBrushPolygon *pCVar1;
  bool bVar2;
  int iVar3;
  CBrushMip *pCVar4;
  CRelationSrc *pCVar5;
  CRelationDst *pCVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1ad2c0  3950  ?WouldFallInNextPosition@CMovableEntity@@QAEHXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bf58;
  local_c = ExceptionList;
  if ((*(float *)(this + 0x1c0) < _DAT_3622376c) ||
     ((ExceptionList = &local_c, *(CBrushPolygon **)(this + 0x2a8) != (CBrushPolygon *)0x0 &&
      (ExceptionList = &local_c,
      iVar3 = IsPolygonBelowPoint(this,*(CBrushPolygon **)(this + 0x2a8),
                                  (Vector<float,3> *)(this + 700),*(float *)(this + 0x1c0)),
      iVar3 != 0)))) {
    ExceptionList = local_c;
    return 0;
  }
  CListHead::Clear((CListHead *)local_18);
  iVar7 = 0;
  iVar3 = FUN_360cb720((int)(this + 0x2ac));
  if (0 < iVar3) {
    do {
      pCVar1 = *(CBrushPolygon **)(*(int *)(this + 0x2b0) + iVar7 * 4);
      iVar3 = IsPolygonBelowPoint(this,pCVar1,(Vector<float,3> *)(this + 700),
                                  *(float *)(this + 0x1c0));
      if (iVar3 != 0) {
        CListHead::RemAll((CListHead *)local_18);
        ExceptionList = local_c;
        return 0;
      }
      iVar3 = CListNode::IsLinked((CListNode *)(*(int *)(pCVar1 + 0x1ac) + 0x84));
      if (iVar3 == 0) {
        CListHead::AddTail((CListHead *)local_18,(CListNode *)(*(int *)(pCVar1 + 0x1ac) + 0x84));
      }
      iVar7 = iVar7 + 1;
      iVar3 = FUN_360cb720((int)(this + 0x2ac));
    } while (iVar7 < iVar3);
  }
  iVar3 = *(int *)(this + 0x148);
  if ((((iVar3 != 0) && (*(int *)(iVar3 + 4) == 4)) && ((*(byte *)(iVar3 + 0x10) & 2) == 0)) &&
     (*(CBrush3D **)(iVar3 + 0x7c) != (CBrush3D *)0x0)) {
    pCVar4 = CBrush3D::GetFirstMip(*(CBrush3D **)(iVar3 + 0x7c));
    iVar7 = 0;
    local_4 = 0;
    iVar3 = FUN_36043600((int)pCVar4);
    if (0 < iVar3) {
      do {
        iVar3 = FUN_36043710(pCVar4,iVar7);
        iVar3 = CListNode::IsLinked((CListNode *)(iVar3 + 0x84));
        if (iVar3 == 0) {
          iVar3 = FUN_36043710(pCVar4,iVar7);
          CListHead::AddTail((CListHead *)local_18,(CListNode *)(iVar3 + 0x84));
        }
        iVar7 = iVar7 + 1;
        iVar3 = FUN_36043600((int)pCVar4);
      } while (iVar7 < iVar3);
    }
    local_4 = 0xffffffff;
  }
  for (piVar9 = *(int **)(this + 0xac); *piVar9 != 0; piVar9 = (int *)*piVar9) {
    pCVar5 = CRelationLnk::GetSrc((CRelationLnk *)(piVar9 + -4));
    iVar3 = CListNode::IsLinked((CListNode *)(pCVar5 + -0x18));
    if (iVar3 == 0) {
      CListHead::AddTail((CListHead *)local_18,(CListNode *)(pCVar5 + -0x18));
    }
  }
  bVar2 = false;
  piVar9 = local_18[0];
  do {
    if (*piVar9 == 0) {
LAB_361ad513:
      CListHead::RemAll((CListHead *)local_18);
      ExceptionList = local_c;
      return (uint)!bVar2;
    }
    if ((*(byte *)(*(int *)(*(int *)(piVar9[-0x13] + 0x14) + 0x668) + 0x10) & 2) != 0) {
      for (piVar8 = (int *)piVar9[6]; *piVar8 != 0; piVar8 = (int *)*piVar8) {
        pCVar6 = CRelationLnk::GetDst((CRelationLnk *)(piVar8 + -2));
        iVar3 = *(int *)(pCVar6 + -0xa8);
        if (iVar3 == 0xb) {
          iVar3 = TR_IsTerrainBelowPoint
                            (*(CTerrain **)(pCVar6 + -0x30),(Vector<float,3> *)(this + 700),
                             *(float *)(this + 0x1c0),(Vector<float,3> *)(this + 0x180));
          if (iVar3 != 0) goto LAB_361ad50b;
        }
        else {
          if ((iVar3 != 4) && (iVar3 != 8)) break;
          pCVar4 = CBrush3D::GetFirstMip(*(CBrush3D **)(pCVar6 + -0x30));
          iVar7 = 0;
          local_4 = 1;
          iVar3 = FUN_36043600((int)pCVar4);
          if (0 < iVar3) {
            do {
              iVar3 = FUN_36043710(pCVar4,iVar7);
              iVar3 = CListNode::IsLinked((CListNode *)(iVar3 + 0x84));
              if (iVar3 == 0) {
                iVar3 = FUN_36043710(pCVar4,iVar7);
                CListHead::AddTail((CListHead *)local_18,(CListNode *)(iVar3 + 0x84));
              }
              iVar7 = iVar7 + 1;
              iVar3 = FUN_36043600((int)pCVar4);
            } while (iVar7 < iVar3);
          }
          local_4 = 0xffffffff;
        }
      }
    }
    iVar3 = IsSomeSectorPolygonBelowPoint
                      (this,(CBrushSector *)(piVar9 + -0x21),(Vector<float,3> *)(this + 700),
                       *(float *)(this + 0x1c0));
    if (iVar3 != 0) {
LAB_361ad50b:
      bVar2 = true;
      goto LAB_361ad513;
    }
    piVar9 = (int *)*piVar9;
  } while( true );
}

