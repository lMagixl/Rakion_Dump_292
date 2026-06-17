
/* public: void __thiscall CWorld::CopyEntities(class CWorld &,class CDynamicContainer<class
   CEntity> &,class CSelection<class CEntity,1> &,class CPlacement3D const &) */

void __thiscall
CWorld::CopyEntities
          (CWorld *this,CWorld *param_1,CDynamicContainer<class_CEntity> *param_2,
          CSelection<class_CEntity,1> *param_3,CPlacement3D *param_4)

{
  int *piVar1;
  CEntity *this_00;
  CDynamicContainer<class_CEntity> *this_01;
  int iVar2;
  int iVar3;
  CBrushMip *pCVar4;
  CLightSource *this_02;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  CDynamicContainer<class_CEntity> *local_2c;
  CEntity *local_24;
  int local_20;
  CWorld *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x1321e0  1384
                       ?CopyEntities@CWorld@@QAEXAAV1@AAV?$CDynamicContainer@VCEntity@@@@AAV?$CSelection@VCEntity@@$00@@ABVCPlacement3D@@@Z
                        */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36218ed7;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  ExceptionList = &local_10;
  local_1c = this;
  iVar2 = FUN_360caf20((int)param_2);
  iVar5 = 0;
  if (0 < iVar2) {
    local_18 = 1;
    if (DAT_362a6488 != 0) {
      local_18 = 3;
    }
    if (DAT_362fd43c != 0) {
      operator_delete__(DAT_362fd440);
      DAT_362fd440 = (void *)0x0;
    }
    DAT_362fd43c = iVar2;
    DAT_362fd440 = (void *)thunk_FUN_361bf99c(iVar2 * 8 + 8);
    local_2c = param_2;
    local_30 = 0;
    while( true ) {
      this_01 = local_2c;
      iVar2 = local_30;
      local_8 = 0;
      iVar3 = FUN_360caf20((int)local_2c);
      if (iVar3 <= iVar2) break;
      iVar2 = FUN_360cafb0(this_01,iVar2);
      local_48 = *(undefined4 *)(iVar2 + 0x3c);
      local_44 = *(undefined4 *)(iVar2 + 0x40);
      local_40 = *(undefined4 *)(iVar2 + 0x44);
      local_3c = *(undefined4 *)(iVar2 + 0x48);
      local_38 = *(undefined4 *)(iVar2 + 0x4c);
      local_34 = *(undefined4 *)(iVar2 + 0x50);
      local_20 = iVar2;
      CPlacement3D::RelativeToAbsolute((CPlacement3D *)&local_48,param_4);
      if (DAT_362fd364 != 0) {
        FUN_361318c0();
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      local_24 = CreateEntity_t(local_1c,(CPlacement3D *)&local_48,
                                (CTFileName *)(*(int *)(iVar2 + 0x78) + 0xc),0xffffffff,1);
      *(int *)((int)DAT_362fd440 + iVar5 * 8) = iVar2;
      *(CEntity **)((int)DAT_362fd440 + iVar5 * 8 + 4) = local_24;
      iVar5 = iVar5 + 1;
      local_30 = local_30 + 1;
    }
    local_2c = (CDynamicContainer<class_CEntity> *)&DAT_362fd43c;
    local_30 = 0;
    local_8 = 3;
    if (0 < DAT_362fd43c) {
      do {
        iVar5 = local_30;
        iVar2 = *(int *)((int)DAT_362fd440 + local_30 * 8);
        piVar1 = *(int **)((int)DAT_362fd440 + local_30 * 8 + 4);
        (**(code **)(*piVar1 + 0x14))(iVar2,local_18);
        iVar2 = *(int *)(iVar2 + 4);
        if ((iVar2 == 4) || (iVar2 == 8)) {
          CBrush3D::CalculateBoundingBoxes((CBrush3D *)piVar1[0x1f]);
        }
        if (DAT_362fd364 != 0) {
          (**(code **)(*piVar1 + 0x100))(DAT_362a648c,DAT_362fd368 != 0);
        }
        local_30 = iVar5 + 1;
      } while (local_30 < DAT_362fd43c);
    }
    local_2c = (CDynamicContainer<class_CEntity> *)&DAT_362fd43c;
    local_30 = 0;
    local_8 = 4;
    if (0 < DAT_362fd43c) {
      do {
        iVar2 = local_30;
        this_00 = *(CEntity **)((int)DAT_362fd440 + local_30 * 8 + 4);
        if (DAT_362a6488 == 0) {
          CEntity::UpdateSpatialRange(this_00);
          CEntity::FindCollisionInfo(this_00);
          CEntity::FindSectorsAroundEntity(this_00);
        }
        else {
          CEntity::End(this_00);
          CEntity::Initialize(this_00,_eeVoid,1);
        }
        local_30 = iVar2 + 1;
      } while (local_30 < DAT_362fd43c);
    }
    local_2c = (CDynamicContainer<class_CEntity> *)&DAT_362fd43c;
    local_30 = 0;
    local_8 = 5;
    if (0 < DAT_362fd43c) {
      do {
        iVar2 = local_30;
        piVar1 = *(int **)((int)DAT_362fd440 + local_30 * 8 + 4);
        if ((piVar1[1] == 4) || (piVar1[1] == 8)) {
          iVar3 = 1;
          iVar5 = 0;
          pCVar4 = CBrush3D::GetFirstMip((CBrush3D *)piVar1[0x1f]);
          FindShadowLayers(local_1c,(AABBox<float,3> *)(pCVar4 + 0x24),iVar5,iVar3);
        }
        this_02 = (CLightSource *)(**(code **)(*piVar1 + 0xa4))();
        if (this_02 != (CLightSource *)0x0) {
          CLightSource::FindShadowLayers(this_02,0);
          CLightSource::UpdateTerrains(this_02);
        }
        FUN_360cceb0(param_3,(int)piVar1);
        local_30 = iVar2 + 1;
      } while (local_30 < DAT_362fd43c);
    }
    if (DAT_362fd43c != 0) {
      operator_delete__(DAT_362fd440);
      DAT_362fd43c = 0;
      DAT_362fd440 = (void *)0x0;
    }
  }
  ExceptionList = local_10;
  return;
}

