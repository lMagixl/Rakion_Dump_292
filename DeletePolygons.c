
/* public: void __thiscall CWorld::DeletePolygons(class CDynamicContainer<class CBrushPolygon> &) */

void __thiscall CWorld::DeletePolygons(CWorld *this,CDynamicContainer<class_CBrushPolygon> *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CBrushMip *pCVar4;
  int iVar5;
  int local_2c [4];
  int local_1c [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5e00  1468
                       ?DeletePolygons@CWorld@@QAEXAAV?$CDynamicContainer@VCBrushPolygon@@@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214deb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_360cc7f0(local_1c);
  iVar5 = 0;
  local_4 = 1;
  iVar1 = FUN_360cb720((int)param_1);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_360cb0a0(param_1,iVar5);
      *(uint *)(iVar2 + 200) = *(uint *)(iVar2 + 200) | 0x80000000;
      iVar1 = *(int *)(iVar2 + 0x1ac);
      iVar3 = FUN_360cbfa0(local_1c,iVar1);
      if (iVar3 == 0) {
        FUN_360cc810(local_1c,iVar1);
      }
      if (*(int *)(iVar2 + 4) != 0) {
        operator_delete__(*(void **)(iVar2 + 8));
        *(undefined4 *)(iVar2 + 4) = 0;
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      if (*(int *)(iVar2 + 0xc) != 0) {
        operator_delete__(*(void **)(iVar2 + 0x10));
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360cb720((int)param_1);
    } while (iVar5 < iVar1);
  }
  FUN_360d75f0(local_2c);
  iVar5 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar1 = FUN_360cb790((int)local_1c);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cb0d0(local_1c,iVar5);
      iVar1 = *(int *)(iVar1 + 0x38);
      iVar2 = FUN_360d6fc0(local_2c,iVar1);
      if (iVar2 == 0) {
        FUN_360d7610(local_2c,iVar1);
      }
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360cb790((int)local_1c);
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  iVar1 = FUN_360d6b70((int)local_2c);
  if (0 < iVar1) {
    do {
      pCVar4 = (CBrushMip *)FUN_360d6a90(local_2c,iVar5);
      CBrushMip::Reoptimize(pCVar4);
      pCVar4 = (CBrushMip *)FUN_360d6a90(local_2c,iVar5);
      CBrushMip::UpdateBoundingBox(pCVar4);
      iVar3 = 1;
      iVar2 = 0;
      iVar1 = FUN_360d6a90(local_2c,iVar5);
      FindShadowLayers(this,(AABBox<float,3> *)(iVar1 + 0x24),iVar2,iVar3);
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360d6b70((int)local_2c);
    } while (iVar5 < iVar1);
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  RebuildLinks(this);
  FUN_360d76b0(local_2c);
  FUN_360cce00(local_1c);
  ExceptionList = local_c;
  return;
}

