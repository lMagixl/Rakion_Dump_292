
/* public: void __thiscall CWorld::ReadState_old_t(class CTStream *) */

void __thiscall CWorld::ReadState_old_t(CWorld *this,CTStream *param_1)

{
  CEntity *pCVar1;
  CTStream *pCVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  CEntity *pCVar6;
  int local_54;
  undefined1 local_50;
  int local_4c;
  undefined1 local_48;
  int local_44;
  CTStream *local_40;
  CAnimObject local_3c [24];
  CPlacement3D local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar2 = param_1;
                    /* 0xda080  2991  ?ReadState_old_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362151d0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ::operator>>(param_1,(CTString *)(this + 300));
  *(undefined4 *)(this + 0x98) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_48 = DAT_36232524;
  local_4c = DAT_36232520;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_4c);
  local_4c = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  local_54 = DAT_36232528;
  local_50 = DAT_3623252c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
  ::operator>>(param_1,(CTString *)(this + 0xa0));
  ::operator>>(param_1,(CTString *)(this + 0xa4));
  ::operator>>(param_1,(CTString *)(this + 0xa8));
  *(undefined4 *)(this + 0xb0) = **(undefined4 **)(param_1 + 0x14);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(iVar4 + 4);
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar4 + 4);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(iVar4 + 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_50 = DAT_36232534;
  local_54 = DAT_36232530;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
  ::operator>>(param_1,(CTString *)(this + 0xac));
  local_54 = DAT_36232538;
  local_50 = DAT_3623253c;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
  ::operator>>(param_1,(CPlacement3D *)(this + 0xe0));
  *(undefined4 *)(this + 0xf8) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar4 = DAT_36232540;
  local_50 = DAT_36232544;
  piVar3 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar3 == iVar4) {
    local_50 = DAT_3623254c;
    local_54 = DAT_36232548;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
    ::operator>>(param_1,(CPlacement3D *)(this + 0xfc));
    *(undefined4 *)(this + 0x114) = **(undefined4 **)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  }
  local_50 = DAT_36232554;
  local_54 = DAT_36232550;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
  iVar4 = 0x100;
  do {
    CAnimObject::CAnimObject(local_3c);
    local_4 = 0;
    FUN_360203c0(local_3c,param_1);
    local_4 = 0xffffffff;
    CAnimObject::~CAnimObject(local_3c);
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_50 = DAT_3623255c;
  local_54 = DAT_36232558;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_54);
  iVar4 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  local_44 = 0;
  local_40 = (CTStream *)0x0;
  local_4 = 1;
  FUN_360d8770(&local_44,iVar4);
  if (0 < iVar4) {
    param_1 = local_40;
    do {
      ::operator>>(pCVar2,(CTFileName *)param_1);
      param_1 = param_1 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_54 = DAT_36232560;
  local_50 = DAT_36232564;
  CTStream::ExpectID_t(pCVar2,(CChunkID *)&local_54);
  iVar4 = **(int **)(pCVar2 + 0x14);
  *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
  iVar5 = iVar4;
  if (0 < iVar4) {
    do {
      local_54 = iVar5;
      iVar5 = **(int **)(pCVar2 + 0x14);
      *(int **)(pCVar2 + 0x14) = *(int **)(pCVar2 + 0x14) + 1;
      ::operator>>(pCVar2,local_24);
      CreateEntity_t(this,local_24,(CTFileName *)(local_40 + iVar5 * 8),0xffffffff,1);
      iVar5 = local_54 + -1;
    } while (local_54 + -1 != 0);
    local_54 = 0;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      piVar3 = (int *)FUN_360cafb0(this + 0x3c,iVar5);
      (**(code **)(*piVar3 + 0x1c))(pCVar2,0);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  if (local_4c == -1) {
    pCVar6 = (CEntity *)0x0;
  }
  else {
    pCVar6 = (CEntity *)FUN_360cafb0(this + 0x3c,local_4c);
  }
  SetBackgroundViewer(this,pCVar6);
  iVar5 = 0;
  if (0 < iVar4) {
    do {
      pCVar6 = (CEntity *)FUN_360cafb0(this + 0x3c,iVar5);
      if (((byte)pCVar6[0x10] & 4) != 0) {
        pCVar1 = pCVar6 + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          CEntity::DeleteSelf(pCVar6);
        }
        FUN_360cc660(this + 0x15c,(int)pCVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar4);
  }
  CBrushArchive::CalculateBoundingBoxes(*(CBrushArchive **)(this + 0x34));
  if (DAT_362fd6d4 == 0) {
    CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
  }
  *(undefined4 *)(this + 0x158) = 1;
  DAT_362fd6d4 = 0;
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

