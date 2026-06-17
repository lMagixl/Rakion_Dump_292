
/* public: void __thiscall CWorld::ReadState_new_t(class CTStream *) */

void __thiscall CWorld::ReadState_new_t(CWorld *this,CTStream *param_1)

{
  CEntity *pCVar1;
  int iVar2;
  CTStream *pCVar3;
  int *piVar4;
  char *pcVar5;
  CTStream *pCVar6;
  ulong uVar7;
  CPlacement3D *pCVar8;
  CEntity *pCVar9;
  char *local_40;
  char *local_3c;
  undefined1 local_38;
  ulong local_34;
  undefined1 local_30;
  char *local_2c;
  undefined4 local_28;
  CPlacement3D local_24 [24];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pCVar3 = param_1;
                    /* 0xda5a0  2990  ?ReadState_new_t@CWorld@@QAEXPAVCTStream@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621520c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  ReadInfo_t(this,param_1,1);
  *(undefined4 *)(this + 0x98) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar2 = DAT_36232568;
  local_30 = DAT_3623256c;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_34 = DAT_36232570;
    local_30 = DAT_36232574;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_34);
    *(undefined4 *)(this + 0x130) = **(undefined4 **)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  }
  else {
    *(undefined4 *)(this + 0x130) = 1;
  }
  local_30 = DAT_3623257c;
  local_34 = DAT_36232578;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_34);
  local_34 = **(ulong **)(param_1 + 0x14);
  *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
  local_3c = (char *)DAT_36232580;
  local_38 = DAT_36232584;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
  ::operator>>(param_1,(CTString *)(this + 0xa0));
  ::operator>>(param_1,(CTString *)(this + 0xa4));
  ::operator>>(param_1,(CTString *)(this + 0xa8));
  *(undefined4 *)(this + 0xb0) = **(undefined4 **)(param_1 + 0x14);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xbc) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xc4) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 200) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xcc) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xd0) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xd4) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xd8) = *(undefined4 *)(iVar2 + 4);
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 **)(param_1 + 0x14) = (undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0xdc) = *(undefined4 *)(iVar2 + 4);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  local_38 = DAT_3623258c;
  local_3c = (char *)DAT_36232588;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
  ::operator>>(param_1,(CTString *)(this + 0xac));
  local_3c = (char *)DAT_36232590;
  local_38 = DAT_36232594;
  CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
  ::operator>>(param_1,(CPlacement3D *)(this + 0xe0));
  *(undefined4 *)(this + 0xf8) = **(undefined4 **)(param_1 + 0x14);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar2 = DAT_36232598;
  local_38 = DAT_3623259c;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_38 = DAT_362325a4;
    local_3c = (char *)DAT_362325a0;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
    ::operator>>(param_1,(CPlacement3D *)(this + 0xfc));
    *(undefined4 *)(this + 0x114) = **(undefined4 **)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  }
  iVar2 = DAT_362325a8;
  local_38 = DAT_362325ac;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_3c = (char *)DAT_362325b0;
    local_38 = DAT_362325b4;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
  }
  else {
    local_3c = (char *)DAT_362325b8;
    local_38 = DAT_362325bc;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_3c);
    DAT_362cbf10 = 1;
  }
  iVar2 = **(int **)(param_1 + 0x14);
  *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
  local_3c = (char *)(iVar2 / 10 + 1);
  thunk_FUN_360d8290((undefined4 *)(this + 0x4c));
  thunk_FUN_360d7e00(this + 0x4c,(int)local_3c,0x14,5);
  pcVar5 = Translate(s_ETRScreating_entities_362325c0,4);
  local_3c = StringDuplicate(pcVar5);
  local_4 = 0;
  SetProgressDescription((CTString *)&local_3c);
  local_4 = 0xffffffff;
  StringFree(local_3c);
  CallProgressHook_t(0.0);
  local_40 = (char *)0x0;
  if (0 < iVar2) {
    local_3c = (char *)(float)iVar2;
    do {
      uVar7 = 0;
      if (DAT_362cbf10 != 0) {
        uVar7 = **(ulong **)(param_1 + 0x14);
        *(ulong **)(param_1 + 0x14) = *(ulong **)(param_1 + 0x14) + 1;
      }
      local_2c = StringDuplicate(&DAT_36222fa0);
      local_28 = 0;
      pCVar8 = local_24;
      local_4 = 1;
      pCVar6 = ::operator>>(param_1,(CTFileName *)&local_2c);
      ::operator>>(pCVar6,pCVar8);
      if (DAT_362cbf10 == 0) {
        uVar7 = 0xffffffff;
      }
      CreateEntity_t(this,local_24,(CTFileName *)&local_2c,uVar7,1);
      CallProgressHook_t((float)(int)local_40 / (float)local_3c);
      local_4 = 0xffffffff;
      StringFree(local_2c);
      local_40 = (char *)((int)local_40 + 1);
    } while ((int)local_40 < iVar2);
  }
  CallProgressHook_t(1.0);
  pcVar5 = Translate(s_ETRSloading_entities_362325d8,4);
  local_3c = StringDuplicate(pcVar5);
  local_4 = 2;
  SetProgressDescription((CTString *)&local_3c);
  local_4 = 0xffffffff;
  StringFree(local_3c);
  CallProgressHook_t(0.0);
  local_40 = (char *)0x0;
  if (0 < iVar2) {
    local_3c = (char *)(float)iVar2;
    do {
      pcVar5 = local_40;
      piVar4 = (int *)FUN_360cafb0(this + 0x3c,(int)local_40);
      (**(code **)(*piVar4 + 0x1c))(param_1,0);
      CallProgressHook_t((float)(int)local_40 / (float)local_3c);
      local_40 = (char *)((int)pcVar5 + 1);
    } while ((int)local_40 < iVar2);
  }
  CallProgressHook_t(1.0);
  if (local_34 == 0xffffffff) {
    pCVar9 = (CEntity *)0x0;
  }
  else if (DAT_362cbf10 == 0) {
    pCVar9 = (CEntity *)FUN_360cafb0(this + 0x3c,local_34);
  }
  else {
    pCVar9 = EntityFromID(this,local_34);
  }
  SetBackgroundViewer(this,pCVar9);
  local_3c = (char *)0x0;
  if (0 < iVar2) {
    do {
      pCVar9 = (CEntity *)FUN_360cafb0(this + 0x3c,(int)local_3c);
      if (((byte)pCVar9[0x10] & 4) != 0) {
        pCVar1 = pCVar9 + 0x18;
        *(int *)pCVar1 = *(int *)pCVar1 + -1;
        if (*(int *)pCVar1 == 0) {
          CEntity::DeleteSelf(pCVar9);
        }
        FUN_360cc660(this + 0x15c,(int)pCVar9);
      }
      local_3c = (char *)((int)local_3c + 1);
    } while ((int)local_3c < iVar2);
  }
  iVar2 = DAT_362325f0;
  local_30 = DAT_362325f4;
  piVar4 = (int *)CTStream::PeekID_t(param_1);
  if (*piVar4 == iVar2) {
    local_30 = DAT_362325fc;
    local_34 = DAT_362325f8;
    CTStream::ExpectID_t(param_1,(CChunkID *)&local_34);
    pCVar6 = (CTStream *)**(int **)(param_1 + 0x14);
    *(int **)(param_1 + 0x14) = *(int **)(param_1 + 0x14) + 1;
    FUN_360ccbb0((undefined4 *)(this + 0x15c));
    param_1 = pCVar6;
    if (0 < (int)pCVar6) {
      do {
        uVar7 = **(ulong **)(pCVar3 + 0x14);
        *(ulong **)(pCVar3 + 0x14) = *(ulong **)(pCVar3 + 0x14) + 1;
        pCVar9 = EntityFromID(this,uVar7);
        FUN_360ccb70(this + 0x15c,pCVar9);
        param_1 = param_1 + -1;
      } while (param_1 != (CTStream *)0x0);
    }
  }
  CBrushArchive::RemoveDummyLayers(*(CBrushArchive **)(this + 0x34));
  pcVar5 = Translate(s_ETRSpreparing_world_36232600,4);
  local_40 = StringDuplicate(pcVar5);
  local_4 = 3;
  SetProgressDescription((CTString *)&local_40);
  local_4 = 0xffffffff;
  StringFree(local_40);
  CallProgressHook_t(0.0);
  CBrushArchive::CalculateBoundingBoxes(*(CBrushArchive **)(this + 0x34));
  CallProgressHook_t(0.3);
  if (DAT_362fd6d4 == 0) {
    CBrushArchive::LinkPortalsAndSectors(*(CBrushArchive **)(this + 0x34));
  }
  *(undefined4 *)(this + 0x158) = 1;
  CBrushArchive::ReadEntitySectorLinks_t(*(CBrushArchive **)(this + 0x34),pCVar3);
  CallProgressHook_t(0.6);
  LinkEntitiesToSectors(this);
  CallProgressHook_t(1.0);
  DAT_362fd6d4 = 0;
  DAT_362fd6d8 = 0;
  ExceptionList = pvStack_c;
  return;
}

