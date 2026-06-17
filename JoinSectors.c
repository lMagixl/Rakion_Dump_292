
/* public: void __thiscall CWorld::JoinSectors(class CSelection<class CBrushSector,1> &) */

void __thiscall CWorld::JoinSectors(CWorld *this,CSelection<class_CBrushSector,1> *param_1)

{
  void *this_00;
  int iVar1;
  CBrushSector *pCVar2;
  CBrushSector *pCVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xd5650  2522
                       ?JoinSectors@CWorld@@QAEXAAV?$CSelection@VCBrushSector@@$00@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214d38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = FUN_360cb0d0(param_1,0);
  this_00 = *(void **)(iVar1 + 0x38);
  pCVar2 = (CBrushSector *)FUN_36043bf0(this_00,1);
  *(void **)(pCVar2 + 0x38) = this_00;
  *(int *)(pCVar2 + 0x3c) = *(int *)(iVar1 + 0x3c);
  iVar4 = 0;
  *(int *)(pCVar2 + 0x40) = *(int *)(iVar1 + 0x40);
  local_4 = 0;
  iVar1 = FUN_360cb790((int)param_1);
  if (0 < iVar1) {
    do {
      pCVar3 = (CBrushSector *)FUN_360cb0d0(param_1,iVar4);
      pCVar2 = JoinTwoSectors(this,pCVar2,pCVar3);
      if (pCVar2 == (CBrushSector *)0x0) break;
      iVar4 = iVar4 + 1;
      iVar1 = FUN_360cb790((int)param_1);
    } while (iVar4 < iVar1);
  }
  local_4 = 0xffffffff;
  CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)((int)this_00 + 0x14));
  FindShadowLayers(this,(AABBox<float,3> *)((int)this_00 + 0x24),0,1);
  FUN_360ccb10((undefined4 *)param_1);
  ExceptionList = local_c;
  return;
}

