
/* public: void __thiscall CEntity::CopyCollisionInfo(class CEntity &) */

void __thiscall CEntity::CopyCollisionInfo(CEntity *this,CEntity *param_1)

{
  int iVar1;
  CCollisionInfo *pCVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x12c190  1382  ?CopyCollisionInfo@CEntity@@QAEXAAV1@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218b1f;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined4 *)(this + 0x84) = 0;
    return;
  }
  ExceptionList = &local_c;
  pCVar2 = (CCollisionInfo *)FUN_361bf99c(0x34);
  local_4 = 0;
  if (pCVar2 == (CCollisionInfo *)0x0) {
    pCVar2 = (CCollisionInfo *)0x0;
  }
  else {
    pCVar2 = (CCollisionInfo *)
             CCollisionInfo::CCollisionInfo(pCVar2,*(CCollisionInfo **)(param_1 + 0x84));
  }
  local_4 = 0xffffffff;
  *(CCollisionInfo **)(this + 0x84) = pCVar2;
  local_24 = 0x7f61b1e6;
  local_18 = 0xff61b1e6;
  local_20 = 0x7f61b1e6;
  local_14 = 0xff61b1e6;
  local_1c = 0x7f61b1e6;
  local_10 = 0xff61b1e6;
  CCollisionInfo::MakeBoxAtPlacement
            (pCVar2,(Vector<float,3> *)(this + 0x3c),(Matrix<float,3,3> *)(this + 0x54),
             (AABBox<float,3> *)&local_24);
  if ((*(int *)(this + 4) != 4) && (*(int *)(this + 4) != 8)) {
    CWorld::AddEntityToCollisionGrid(*(CWorld **)(this + 0xa8),this,(AABBox<float,3> *)&local_24);
  }
  iVar1 = *(int *)(this + 0x84);
  *(undefined4 *)(iVar1 + 0x18) = local_24;
  *(undefined4 *)(iVar1 + 0x1c) = local_20;
  *(undefined4 *)(iVar1 + 0x20) = local_1c;
  *(undefined4 *)(iVar1 + 0x24) = local_18;
  *(undefined4 *)(iVar1 + 0x28) = local_14;
  *(undefined4 *)(iVar1 + 0x2c) = local_10;
  ExceptionList = local_c;
  return;
}

