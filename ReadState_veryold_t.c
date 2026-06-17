
/* public: void __thiscall CWorld::ReadState_veryold_t(class CTStream *) */

void __thiscall CWorld::ReadState_veryold_t(CWorld *this,CTStream *param_1)

{
  CEntity *pCVar1;
  CTStream *pCVar2;
  int *piVar3;
  CTStream *pCVar4;
  int iVar5;
  CTFileName *pCVar6;
  CTFileName *pCVar7;
  CTFileName *pCVar8;
  CTFileName *pCVar9;
  CTFileName *pCVar10;
  CEntity *pCVar11;
  CTStream *local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48;
  int local_44;
  CTStream *local_40;
  CAnimObject local_3c [24];
  CPlacement3D local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  pCVar2 = param_1;
                    /* 0xd9b20  2994  ?ReadState_veryold_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362151b6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ::operator>>(param_1,(CTString *)(this + 300));
  *(undefined4 *)(this + 0x98) = **(undefined4 **)(pCVar2 + 0x14);
  *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
  iVar5 = DAT_362324c8;
  local_4c = -1;
  local_50 = CONCAT31(local_50._1_3_,DAT_362324cc);
  piVar3 = (int *)CTStream::PeekID_t(pCVar2);
  if (*piVar3 == iVar5) {
    local_4c = DAT_362324d0;
    local_48 = DAT_362324d4;
    CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_4c);
    local_4c = **(int **)(pCVar2 + 0x14);
    *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
  }
  else {
    *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
    param_1 = (CTStream *)StringDuplicate(&DAT_36222fa0);
    local_4 = 0;
    ::operator>>(pCVar2,(CTString *)&param_1);
    local_54 = (CTStream *)StringDuplicate(&DAT_36222fa0);
    local_50 = 0;
    pCVar6 = (CTFileName *)&local_54;
    local_4._0_1_ = 1;
    pCVar7 = pCVar6;
    pCVar8 = pCVar6;
    pCVar9 = pCVar6;
    pCVar10 = pCVar6;
    pCVar4 = ::operator>>(pCVar2,pCVar6);
    pCVar4 = ::operator>>(pCVar4,pCVar6);
    pCVar4 = ::operator>>(pCVar4,pCVar7);
    pCVar4 = ::operator>>(pCVar4,pCVar8);
    pCVar4 = ::operator>>(pCVar4,pCVar9);
    ::operator>>(pCVar4,pCVar10);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree((char *)local_54);
    local_4 = 0xffffffff;
    StringFree((char *)param_1);
  }
  iVar5 = DAT_362324d8;
  local_50._0_1_ = DAT_362324dc;
  piVar3 = (int *)CTStream::PeekID_t(pCVar2);
  if (*piVar3 == iVar5) {
    local_54 = (CTStream *)DAT_362324e0;
    local_50._0_1_ = DAT_362324e4;
    CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
    ::operator>>(pCVar2,(CTString *)(this + 0xa0));
    ::operator>>(pCVar2,(CTString *)(this + 0xa4));
    ::operator>>(pCVar2,(CTString *)(this + 0xa8));
    *(undefined4 *)(this + 0xb0) = **(undefined4 **)(pCVar2 + 0x14);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xc4) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 200) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xd0) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xd4) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xd8) = *(undefined4 *)(iVar5 + 4);
    iVar5 = *(int *)(pCVar2 + 0x14);
    *(undefined4 **)(pCVar2 + 0x14) = (undefined4 *)(iVar5 + 4);
    *(undefined4 *)(this + 0xdc) = *(undefined4 *)(iVar5 + 4);
    *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
  }
  iVar5 = DAT_362324e8;
  local_50._0_1_ = DAT_362324ec;
  piVar3 = (int *)CTStream::PeekID_t(pCVar2);
  if (*piVar3 == iVar5) {
    local_54 = (CTStream *)DAT_362324f0;
    local_50._0_1_ = DAT_362324f4;
    CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
    ::operator>>(pCVar2,(CTString *)(this + 0xac));
  }
  iVar5 = DAT_362324f8;
  local_50._0_1_ = DAT_362324fc;
  piVar3 = (int *)CTStream::PeekID_t(pCVar2);
  if (*piVar3 == iVar5) {
    local_54 = (CTStream *)DAT_36232500;
    local_50._0_1_ = DAT_36232504;
    CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
    ::operator>>(pCVar2,(CPlacement3D *)(this + 0xe0));
    *(undefined4 *)(this + 0xf8) = **(undefined4 **)(pCVar2 + 0x14);
    *(int *)(pCVar2 + 0x14) = *(int *)(pCVar2 + 0x14) + 4;
  }
  local_54 = (CTStream *)DAT_36232508;
  local_50 = CONCAT31(local_50._1_3_,DAT_3623250c);
  CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
  iVar5 = 0x100;
  do {
    CAnimObject::CAnimObject(local_3c);
    local_4 = 2;
    FUN_360203c0(local_3c,pCVar2);
    local_4 = 0xffffffff;
    CAnimObject::~CAnimObject(local_3c);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_54 = (CTStream *)DAT_36232510;
  local_50 = CONCAT31(local_50._1_3_,DAT_36232514);
  CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
  iVar5 = **(int **)(pCVar2 + 0x14);
  *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
  local_44 = 0;
  local_40 = (CTStream *)0x0;
  local_4 = 3;
  FUN_360d8770(&local_44,iVar5);
  if (0 < iVar5) {
    param_1 = local_40;
    do {
      ::operator>>(pCVar2,(CTFileName *)param_1);
      param_1 = param_1 + 8;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_54 = (CTStream *)DAT_36232518;
  local_50 = CONCAT31(local_50._1_3_,DAT_3623251c);
  CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
  param_1 = (CTStream *)**(int **)(pCVar2 + 0x14);
  *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
  pCVar4 = param_1;
  if (0 < (int)param_1) {
    do {
      local_54 = pCVar4;
      iVar5 = **(int **)(pCVar2 + 0x14);
      *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
      ::operator>>(pCVar2,local_24);
      CreateEntity_t(this,local_24,(CTFileName *)(local_40 + iVar5 * 8),0xffffffff,1);
      pCVar4 = local_54 + -1;
    } while (local_54 + -1 != (CTStream *)0x0);
    local_54 = (CTStream *)0x0;
  }
  iVar5 = 0;
  if (0 < (int)param_1) {
    do {
      piVar3 = (int *)FUN_360cafb0(this + 0x3c,iVar5);
      (**(code **)(*piVar3 + 0x1c))(pCVar2,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1);
  }
  if (local_4c == -1) {
    pCVar11 = (CEntity *)0x0;
  }
  else {
    pCVar11 = (CEntity *)FUN_360cafb0(this + 0x3c,local_4c);
  }
  SetBackgroundViewer(this,pCVar11);
  iVar5 = 0;
  if (0 < (int)param_1) {
    do {
      pCVar11 = (CEntity *)FUN_360cafb0(this + 0x3c,iVar5);
      if (((byte)pCVar11[0x10] & 4) != 0) {
        pCVar1 = pCVar11 + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          CEntity::DeleteSelf(pCVar11);
        }
        FUN_360cc660(this + 0x15c,(int)pCVar11);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)param_1);
  }
  CBrushArchive::CalculateBoundingBoxes(*(CBrushArchive **)(this + 0x34));
  CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
  *(undefined4 *)(this + 0x158) = 1;
  LinkEntitiesToSectors(this);
  local_4 = 0xffffffff;
  if ((local_44 != 0) && (local_40 != (CTStream *)0x0)) {
    pCVar2 = local_40 + -4;
    _eh_vector_destructor_iterator_(local_40,8,*(int *)(local_40 + -4),CTFileName::~CTFileName);
    operator_delete__(pCVar2);
  }
  ExceptionList = pvStack_c;
  return;
}

