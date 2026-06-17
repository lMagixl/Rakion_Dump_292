
/* public: void __thiscall CWorld::TriangularizePolygons(class CDynamicContainer<class
   CBrushPolygon> &) */

void __thiscall
CWorld::TriangularizePolygons(CWorld *this,CDynamicContainer<class_CBrushPolygon> *param_1)

{
  int iVar1;
  int iVar2;
  CBrushSector *pCVar3;
  int iVar4;
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc9f80  3854
                       ?TriangularizePolygons@CWorld@@QAEXAAV?$CDynamicContainer@VCBrushPolygon@@@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ClearMarkedForUseFlag(this);
  FUN_360cc7f0(local_1c);
  iVar4 = 0;
  local_4 = 1;
  iVar1 = FUN_360cb720((int)param_1);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0a0(param_1,iVar4);
      *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) | 0x80000000;
      iVar1 = *(int *)(iVar1 + 0x1ac);
      iVar2 = FUN_360cbfa0(local_1c,iVar1);
      if (iVar2 == 0) {
        FUN_360cc810(local_1c,iVar1);
      }
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360cb720((int)param_1);
    } while (iVar4 < iVar1);
  }
  iVar4 = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar1 = FUN_360cb790((int)local_1c);
  if (0 < iVar1) {
    do {
      pCVar3 = (CBrushSector *)FUN_360cb0d0(local_1c,iVar4);
      CBrushSector::TriangularizeMarkedPolygons(pCVar3);
      pCVar3 = (CBrushSector *)FUN_360cb0d0(local_1c,iVar4);
      CBrushSector::UpdateVertexChanges(pCVar3);
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360cb790((int)local_1c);
    } while (iVar4 < iVar1);
  }
  FUN_360cce00(local_1c);
  ExceptionList = local_c;
  return;
}

