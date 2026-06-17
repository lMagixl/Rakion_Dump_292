
/* public: void __thiscall CEntity::FindCollisionInfo(void) */

void __thiscall CEntity::FindCollisionInfo(CEntity *this)

{
  int iVar1;
  CModelData *pCVar2;
  undefined4 *puVar3;
  long lVar4;
  CCollisionInfo *pCVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x12bfa0  1630  ?FindCollisionInfo@CEntity@@QAEXXZ */
  DiscardCollisionInfo(this);
  if ((*(uint *)(this + 0xc) & 0xffc00) != 0) {
    if ((*(int *)(this + 4) == 3) || (*(int *)(this + 4) == 5)) {
      pCVar2 = CModelObject::GetData(*(CModelObject **)(this + 0x7c));
      if (pCVar2 != (CModelData *)0x0) {
        puVar3 = (undefined4 *)FUN_361bf99c(0x34);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[6] = 0x7f61b1e6;
          puVar3[9] = 0xff61b1e6;
          puVar3[7] = 0x7f61b1e6;
          puVar3[10] = 0xff61b1e6;
          puVar3[8] = 0x7f61b1e6;
          puVar3[0xb] = 0xff61b1e6;
        }
        *(undefined4 **)(this + 0x84) = puVar3;
        lVar4 = (**(code **)(*(int *)this + 0xf4))();
        CCollisionInfo::FromModel(*(CCollisionInfo **)(this + 0x84),this,lVar4);
        goto LAB_3612c0bf;
      }
    }
    iVar1 = *(int *)(this + 4);
    if (((iVar1 == 9) || (iVar1 == 10)) && (*(int *)(this + 0x7c) != 0)) {
      pCVar5 = (CCollisionInfo *)FUN_361bf99c(0x34);
      if (pCVar5 == (CCollisionInfo *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = CCollisionInfo::CCollisionInfo(pCVar5);
      }
      *(undefined4 *)(this + 0x84) = uVar6;
      lVar4 = (**(code **)(*(int *)this + 0xf4))();
      CCollisionInfo::FromModel(*(CCollisionInfo **)(this + 0x84),this,lVar4);
LAB_3612c0bf:
      local_18 = 0x7f61b1e6;
      local_c = 0xff61b1e6;
      local_14 = 0x7f61b1e6;
      local_8 = 0xff61b1e6;
      local_10 = 0x7f61b1e6;
      local_4 = 0xff61b1e6;
      CCollisionInfo::MakeBoxAtPlacement
                (*(CCollisionInfo **)(this + 0x84),(Vector<float,3> *)(this + 0x3c),
                 (Matrix<float,3,3> *)(this + 0x54),(AABBox<float,3> *)&local_18);
      if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 8)) {
        CWorld::AddEntityToCollisionGrid
                  (*(CWorld **)(this + 0xa8),this,(AABBox<float,3> *)&local_18);
      }
      iVar1 = *(int *)(this + 0x84);
      *(undefined4 *)(iVar1 + 0x18) = local_18;
      *(undefined4 *)(iVar1 + 0x1c) = local_14;
      *(undefined4 *)(iVar1 + 0x20) = local_10;
      *(undefined4 *)(iVar1 + 0x24) = local_c;
      *(undefined4 *)(iVar1 + 0x28) = local_8;
      *(undefined4 *)(iVar1 + 0x2c) = local_4;
      return;
    }
    if (iVar1 == 4) {
      if ((((byte)this[0x10] & 2) == 0) || ((*(uint *)(this + 8) & 0x200) != 0)) {
        pCVar5 = (CCollisionInfo *)FUN_361bf99c(0x34);
        if (pCVar5 == (CCollisionInfo *)0x0) {
          pCVar5 = (CCollisionInfo *)0x0;
        }
        else {
          pCVar5 = (CCollisionInfo *)CCollisionInfo::CCollisionInfo(pCVar5);
        }
        *(CCollisionInfo **)(this + 0x84) = pCVar5;
        CCollisionInfo::FromBrush(pCVar5,*(CBrush3D **)(this + 0x7c));
        goto LAB_3612c0bf;
      }
    }
    else if (iVar1 == 8) {
      pCVar5 = (CCollisionInfo *)FUN_361bf99c(0x34);
      if (pCVar5 == (CCollisionInfo *)0x0) {
        pCVar5 = (CCollisionInfo *)0x0;
      }
      else {
        pCVar5 = (CCollisionInfo *)CCollisionInfo::CCollisionInfo(pCVar5);
      }
      *(CCollisionInfo **)(this + 0x84) = pCVar5;
      CCollisionInfo::FromBrush(pCVar5,*(CBrush3D **)(this + 0x7c));
    }
  }
  return;
}

