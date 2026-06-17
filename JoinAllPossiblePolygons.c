
/* public: void __thiscall CWorld::JoinAllPossiblePolygons(class CSelection<class CBrushPolygon,256>
   &,int,long) */

void __thiscall
CWorld::JoinAllPossiblePolygons
          (CWorld *this,CSelection<class_CBrushPolygon,256> *param_1,int param_2,long param_3)

{
  CBrushPolygon *pCVar1;
  CBrushMip *this_00;
  int iVar2;
  int iVar3;
  CBrushPolygon *this_01;
  CBrushPolygon *pCVar4;
  int iVar5;
  CObject3D local_5c [20];
  int local_48 [4];
  CSelection<class_CBrushSector,4> local_38 [16];
  CWorld *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
                    /* 0xd5ba0  2519
                       ?JoinAllPossiblePolygons@CWorld@@QAEXAAV?$CSelection@VCBrushPolygon@@$0BAA@@@HJ@Z
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36214db9;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff98;
  ExceptionList = &local_10;
  local_28 = this;
  iVar2 = CanJoinAllPossiblePolygons(this,param_1);
  if (iVar2 != 0) {
    iVar2 = FUN_360cb720((int)param_1);
    local_18 = iVar2;
    FUN_360cc7f0(local_48);
    iVar5 = 0;
    local_8 = 0;
    if (0 < iVar2) {
      do {
        iVar3 = FUN_360cb0a0(param_1,iVar5);
        local_20 = *(int *)(iVar3 + 0x1ac);
        iVar3 = FUN_360cbfa0(local_48,local_20);
        if (iVar3 == 0) {
          FUN_360cc810(local_48,local_20);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    do {
      local_20 = 0;
      iVar5 = 0;
      if (iVar2 < 1) break;
      do {
        this_01 = (CBrushPolygon *)FUN_360cb0a0(param_1,iVar5);
        local_24 = iVar5 + 1;
        local_1c = local_24;
        if (local_24 < local_18) {
          do {
            pCVar4 = (CBrushPolygon *)FUN_360cb0a0(param_1,local_1c);
            pCVar1 = pCVar4 + 4;
            iVar2 = FUN_3600be20((undefined4 *)pCVar1);
            if ((((iVar2 != 0) && (*(int *)this_01 == *(int *)pCVar4)) &&
                (((*(uint *)(pCVar4 + 200) ^ *(uint *)(this_01 + 200)) & 0x400001) == 0)) &&
               (((param_2 == 0 ||
                 (*(int *)(this_01 + param_3 * 0x38 + 0x30) ==
                  *(int *)(pCVar4 + param_3 * 0x38 + 0x30))) &&
                (iVar2 = CBrushPolygon::TouchesInSameSector(this_01,pCVar4), iVar2 != 0)))) {
              CBrushPolygon::MovePolygonEdges(this_01,pCVar4);
              if (*(int *)pCVar1 != 0) {
                operator_delete__(*(void **)(pCVar4 + 8));
                *(int *)pCVar1 = 0;
                *(undefined4 *)(pCVar4 + 8) = 0;
              }
              local_20 = 1;
            }
            local_1c = local_1c + 1;
          } while (local_1c < local_18);
        }
        iVar5 = local_24;
      } while (local_24 < local_18);
      iVar2 = local_18;
    } while (local_20 != 0);
    FUN_360ccd60((undefined4 *)param_1);
    iVar2 = FUN_360cb790((int)local_48);
    for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
      iVar3 = FUN_360cb0d0(local_48,iVar5);
      this_00 = *(CBrushMip **)(iVar3 + 0x38);
      FUN_360cc7f0((undefined4 *)local_38);
      local_8._0_1_ = 1;
      FUN_360d7380(local_38,iVar3);
      CObject3D::CObject3D(local_5c);
      local_8._0_1_ = 2;
      CBrushMip::ToObject3D(this_00,local_5c,local_38);
      CBrushMip::DeleteSelectedSectors(this_00,local_38);
      local_8 = CONCAT31(local_8._1_3_,3);
      CBrushMip::AddFromObject3D_t(this_00,local_5c);
      local_8 = 2;
      CBrush3D::CalculateBoundingBoxes(*(CBrush3D **)(this_00 + 0x14));
      FindShadowLayers(local_28,(AABBox<float,3> *)(this_00 + 0x24),0,1);
      local_8._0_1_ = 1;
      CObject3D::~CObject3D(local_5c);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_360d7340((undefined4 *)local_38);
      FUN_360cce00((int *)local_38);
    }
    FUN_360cce00(local_48);
  }
  ExceptionList = local_10;
  return;
}

