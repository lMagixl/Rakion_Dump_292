
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CNetworkLibrary::ChangeLevel_internal(void) */

void __thiscall CNetworkLibrary::ChangeLevel_internal(CNetworkLibrary *this)

{
  CWorld *pCVar1;
  CNetworkLibrary CVar2;
  undefined4 uVar3;
  CSelection<class_CEntity,1> *pCVar4;
  CDynamicContainer<class_CEntity> *pCVar5;
  CPlayerCharacter *pCVar6;
  int iVar7;
  long lVar8;
  CNetworkLibrary *pCVar9;
  char *pcVar10;
  int iVar11;
  CSelection<class_CEntity,1> *pCVar12;
  CPlayerEntity *pCVar13;
  int iVar14;
  void *this_00;
  undefined4 *puVar15;
  CPlayerAction *pCVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  CPlayerAction local_1bfc [72];
  undefined4 local_1bb4 [1134];
  undefined4 auStack_9fc [32];
  int aiStack_97c [14];
  CPlayerAction local_944 [72];
  undefined4 local_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  int local_8e4;
  CWorld *local_8e0;
  CSelection<class_CEntity,1> *local_8dc;
  undefined4 local_8d8;
  char *local_8d4;
  undefined4 *local_8d0;
  undefined4 local_8cc;
  int local_8c8;
  int local_8c4;
  undefined4 *local_8c0;
  int local_8bc;
  undefined4 local_8b8;
  CDynamicContainer<class_CEntity> *local_8b4;
  int local_8b0;
  CNetworkLibrary *local_8ac;
  undefined4 local_8a8;
  int local_8a4;
  CNetworkLibrary *local_8a0;
  CPlayerCharacter *local_89c;
  CPlayerCharacter local_898 [2176];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xf9b10  1156  ?ChangeLevel_internal@CNetworkLibrary@@QAEXXZ */
  local_8 = 0xffffffff;
  puStack_c = &LAB_36217042;
  local_10 = ExceptionList;
  local_14 = &stack0xffffe3f8;
  local_18 = DAT_362abd90;
  CVar2 = this[0x98c];
  ExceptionList = &local_10;
  this[0x98c] = (CNetworkLibrary)((char)CVar2 + '\x01');
  *(char *)(*(int *)(this + 0x24) + 0x80) = (char)CVar2 + '\x01';
  iVar14 = 0;
  local_8ac = this;
  do {
    puVar15 = (undefined4 *)(*(int *)(*(int *)(this + 0x18) + 8) + iVar14);
    iVar7 = FUN_36109550(puVar15);
    if ((iVar7 != 0) && (puVar15[1] != 0)) {
      *(char *)(puVar15 + 0x16) = *(char *)(puVar15 + 0x16) + '\x01';
    }
    iVar14 = iVar14 + 0x60;
  } while (iVar14 < 0xc00);
  CSoundLibrary::Flush(_pSound);
  DAT_362a6488 = 0;
  local_8e4 = 0;
  lVar8 = CServer::ActiveRemoteSessions(*(CServer **)(this + 0x18));
  if (0 < lVar8) {
    local_8e4 = 1;
  }
  if (*(int *)(*(CServer **)(this + 0x18) + 0x553c) != 0) {
    CServer::StopNetProcess(*(CServer **)(this + 0x18));
  }
  StartProgress();
  local_8b4 = (CDynamicContainer<class_CEntity> *)FUN_361bf99c(0x10);
  if (local_8b4 == (CDynamicContainer<class_CEntity> *)0x0) {
    local_8b4 = (CDynamicContainer<class_CEntity> *)0x0;
  }
  else {
    FUN_360ccb50((undefined4 *)local_8b4);
  }
  pCVar9 = this + 0x1340;
  iVar7 = 0;
  local_8a4 = 0;
  local_8 = 0;
  local_8a0 = pCVar9;
  iVar14 = FUN_360caf20((int)pCVar9);
  if (0 < iVar14) {
    do {
      iVar14 = FUN_360cafb0(pCVar9,iVar7);
      if ((char)((uint)*(undefined4 *)(iVar14 + 0x10) >> 8) < '\0') {
        iVar14 = FUN_360cafb0(pCVar9,iVar7);
        FUN_360cceb0(local_8b4,iVar14);
      }
      iVar7 = iVar7 + 1;
      local_8a4 = iVar7;
      iVar14 = FUN_360caf20((int)pCVar9);
    } while (iVar7 < iVar14);
  }
  local_8 = 0xffffffff;
  local_8a0 = (CNetworkLibrary *)FUN_361bf99c(0x170);
  local_8 = 1;
  if (local_8a0 == (CNetworkLibrary *)0x0) {
    local_8e0 = (CWorld *)0x0;
  }
  else {
    local_8e0 = (CWorld *)CWorld::CWorld((CWorld *)local_8a0);
  }
  local_8 = 0xffffffff;
  local_8dc = (CSelection<class_CEntity,1> *)FUN_361bf99c(0x10);
  if (local_8dc == (CSelection<class_CEntity,1> *)0x0) {
    local_8dc = (CSelection<class_CEntity,1> *)0x0;
  }
  else {
    FUN_360ccb50((undefined4 *)local_8dc);
  }
  local_8a4 = 0;
  local_8c8 = 0;
  local_8a0 = (CNetworkLibrary *)0x0;
  local_8d4 = (char *)0x0;
  local_8c4 = 0;
  local_8bc = 0;
  local_8d0 = (undefined4 *)0x0;
  local_8a8 = 0;
  local_8cc = 0;
  local_8b8 = 0;
  local_8d8 = 0;
  local_8c0 = (undefined4 *)0x0;
  CWorld::CopyEntities
            (local_8e0,(CWorld *)(this + 0x11e4),local_8b4,local_8dc,(CPlacement3D *)&local_8cc);
  _eh_vector_constructor_iterator_
            (local_898,0x44,0x20,CPlayerCharacter::CPlayerCharacter,
             CPlayerCharacter::~CPlayerCharacter);
  local_8 = 2;
  pCVar16 = local_1bfc;
  iVar14 = 0x40;
  do {
    CPlayerAction::CPlayerAction(pCVar16);
    pCVar16 = pCVar16 + 0x48;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  local_8d0 = local_1bb4;
  local_89c = local_898;
  local_8b0 = 0;
  local_8a0 = (CNetworkLibrary *)0x0;
  do {
    pCVar9 = local_8a0;
    iVar11 = local_8b0;
    iVar14 = *(int *)(*(int *)(this + 0x18) + 0x10);
    iVar7 = *(int *)(iVar14 + local_8b0);
    uVar3 = *(undefined4 *)(iVar14 + 0xa4 + local_8b0);
    puVar15 = (undefined4 *)(iVar14 + local_8b0);
    *(int *)((int)aiStack_97c + (int)local_8a0) = iVar7;
    *(undefined4 *)((int)auStack_9fc + (int)pCVar9) = uVar3;
    if (iVar7 != 0) {
      CPlayerCharacter::operator=(local_89c,(CPlayerCharacter *)(puVar15[1] + 0x368));
      puVar17 = puVar15 + 0x16;
      puVar18 = local_8d0 + -0x12;
      for (iVar14 = 0x12; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      puVar17 = puVar15 + 4;
      puVar18 = local_8d0;
      for (iVar14 = 0x12; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar18 = *puVar17;
        puVar17 = puVar17 + 1;
        puVar18 = puVar18 + 1;
      }
      puVar15[1] = 0;
      FUN_361090d0(puVar15);
      pCVar9 = local_8a0;
      iVar11 = local_8b0;
      this = local_8ac;
    }
    pCVar5 = local_8b4;
    local_8b0 = iVar11 + 0x100;
    local_8a0 = (CNetworkLibrary *)((int)pCVar9 + 4);
    local_89c = local_89c + 0x44;
    local_8d0 = local_8d0 + 0x24;
  } while (local_8b0 < 0x2000);
  CWorld::DestroyEntities((CWorld *)(this + 0x11e4),(CSelection<class_CEntity,1> *)local_8b4);
  local_8a0 = (CNetworkLibrary *)pCVar5;
  if (pCVar5 != (CDynamicContainer<class_CEntity> *)0x0) {
    local_8._0_1_ = 3;
    FUN_360cce70((undefined4 *)pCVar5);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_360cd280((int *)pCVar5);
    operator_delete(pCVar5);
  }
  if (*(int *)(this + 0x984) != 0) {
    CSessionState::RememberCurrentLevel(*(CSessionState **)(this + 0x24),(CTString *)(this + 0x3c));
  }
  FUN_360f2e40(&local_8b0);
  local_8._0_1_ = 4;
  CWorld::Clear((CWorld *)(this + 0x11e4));
  FUN_360f3800();
  InitCRCGather(this);
  if (local_8e4 != 0) {
    CNetworkMessage::CNetworkMessage((CNetworkMessage *)&local_8cc,0x33);
    local_8 = CONCAT31(local_8._1_3_,5);
    CNetworkMessage::operator<<((CNetworkMessage *)&local_8cc,(CTString *)&DAT_362ccff4);
    CNetworkMessage::operator<<((CNetworkMessage *)&local_8cc,(CTString *)(this + 0x97c));
    if ((undefined4 *)(local_8c4 + local_8c8) < local_8c0 + 1) {
      pcVar10 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
      CPrintF(pcVar10);
    }
    else {
      *local_8c0 = *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x58);
      local_8c0 = local_8c0 + 1;
      local_8bc = local_8bc + 4;
      local_8b8 = 0;
    }
    if ((undefined4 *)(local_8c4 + local_8c8) < local_8c0 + 0x200) {
      pcVar10 = Translate(s_ETRSWarning__Message_over_writin_362233ac,4);
      CPrintF(pcVar10);
    }
    else {
      pCVar9 = _pNetwork + 0x9ac;
      puVar15 = local_8c0;
      for (iVar14 = 0x200; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar15 = *(undefined4 *)pCVar9;
        pCVar9 = pCVar9 + 4;
        puVar15 = puVar15 + 1;
      }
      local_8c0 = local_8c0 + 0x200;
      local_8bc = local_8bc + 0x800;
      local_8b8 = 0;
      this = local_8ac;
    }
    iVar7 = 1;
    iVar14 = FUN_360a59d0((undefined4 *)(*(int *)(this + 0x18) + 4));
    if (1 < iVar14) {
      iVar14 = 0x60;
      do {
        iVar11 = FUN_36109550((undefined4 *)(*(int *)(*(int *)(this + 0x18) + 8) + iVar14));
        if (iVar11 != 0) {
          CPrintF(s_Sent_levelchange_to_client___d_36234e28,iVar7);
          CMessageDispatcher::SendToClientReliable
                    ((CMessageDispatcher *)_pNetwork,iVar7,(CNetworkMessage *)&local_8cc);
        }
        iVar7 = iVar7 + 1;
        iVar14 = iVar14 + 0x60;
        iVar11 = FUN_360a59d0((undefined4 *)(*(int *)(this + 0x18) + 4));
      } while (iVar7 < iVar11);
    }
    CCommunicationInterface::Server_Update(&_cmiComm);
    local_8._0_1_ = 4;
    CNetworkMessage::~CNetworkMessage((CNetworkMessage *)&local_8cc);
  }
  local_8d4 = StringDuplicate(*(char **)(this + 0x3c));
  local_8d0 = *(undefined4 **)(this + 0x40);
  local_8 = CONCAT31(local_8._1_3_,7);
  *(undefined4 *)(_pTimer + 0xc) = 0;
  CWorld::Load_t((CWorld *)(this + 0x11e4),(CTFileName *)(this + 0x97c));
  CWorld::FilterEntitiesBySpawnFlags
            ((CWorld *)(this + 0x11e4),*(ulong *)(*(int *)(this + 0x24) + 0x58));
  local_8 = 6;
  pcVar10 = StringDuplicate(*(char **)(this + 0x97c));
  StringFree(*(char **)(this + 0x3c));
  *(char **)(this + 0x3c) = pcVar10;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x980);
  local_8a0 = (CNetworkLibrary *)StringDuplicate(s_pwoCurrentWorld_36234ebc);
  pCVar1 = (CWorld *)(this + 0x11e4);
  local_8._0_1_ = 0xb;
  CShell::SetINDEX(_pShell,(CTString *)&local_8a0,(long)pCVar1);
  local_8 = CONCAT31(local_8._1_3_,6);
  StringFree((char *)local_8a0);
  CWorld::AdjustLateTimers(pCVar1,*(float *)(*(int *)(this + 0x24) + 0x2c));
  pCVar12 = (CSelection<class_CEntity,1> *)FUN_361bf99c(0x10);
  if (pCVar12 == (CSelection<class_CEntity,1> *)0x0) {
    pCVar12 = (CSelection<class_CEntity,1> *)0x0;
  }
  else {
    FUN_360ccb50((undefined4 *)pCVar12);
  }
  local_8a8 = 0;
  local_8fc = 0;
  local_8c0 = (undefined4 *)0x0;
  local_8a4 = 0;
  local_8f8 = 0;
  local_8f0 = 0;
  local_8a0 = (CNetworkLibrary *)0x0;
  local_8bc = 0;
  local_8f4 = 0;
  local_8ec = 0;
  local_8b8 = 0;
  local_8e8 = 0;
  CWorld::CopyEntities
            (pCVar1,local_8e0,(CDynamicContainer<class_CEntity> *)local_8dc,pCVar12,
             (CPlacement3D *)&local_8fc);
  pCVar4 = local_8dc;
  local_8a0 = (CNetworkLibrary *)local_8dc;
  if (local_8dc != (CSelection<class_CEntity,1> *)0x0) {
    local_8._0_1_ = 0xc;
    FUN_360cce70((undefined4 *)local_8dc);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_360cd280((int *)pCVar4);
    operator_delete(pCVar4);
  }
  local_8a0 = (CNetworkLibrary *)pCVar12;
  if (pCVar12 != (CSelection<class_CEntity,1> *)0x0) {
    local_8._0_1_ = 0xd;
    FUN_360cce70((undefined4 *)pCVar12);
    local_8 = CONCAT31(local_8._1_3_,6);
    FUN_360cd280((int *)pCVar12);
    operator_delete(pCVar12);
  }
  pCVar1 = local_8e0;
  if (local_8e0 != (CWorld *)0x0) {
    CWorld::~CWorld(local_8e0);
    operator_delete(pCVar1);
  }
  local_89c = (CPlayerCharacter *)0x0;
  do {
    pCVar6 = local_89c;
    this_00 = (void *)((int)local_89c * 0x100 + *(int *)(*(int *)(this + 0x18) + 0x10));
    if (aiStack_97c[(int)local_89c] != 0) {
      FUN_36109090(this_00,auStack_9fc[(int)local_89c]);
      pCVar16 = local_1bfc + (int)pCVar6 * 0x90;
      puVar15 = (undefined4 *)((int)this_00 + 0x58);
      for (iVar14 = 0x12; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar15 = *(undefined4 *)pCVar16;
        pCVar16 = pCVar16 + 4;
        puVar15 = puVar15 + 1;
      }
      puVar15 = local_1bb4 + (int)pCVar6 * 0x24;
      puVar17 = (undefined4 *)((int)this_00 + 0x10);
      for (iVar14 = 0x12; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar17 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar17 = puVar17 + 1;
      }
      pCVar13 = CWorld::FindEntityWithCharacter
                          ((CWorld *)(local_8ac + 0x11e4),local_898 + (int)local_89c * 0x44);
      FUN_36109100(this_00,pCVar13);
      (**(code **)(**(int **)((int)this_00 + 4) + 0x19c))();
      this = local_8ac;
    }
    local_89c = (CPlayerCharacter *)((int)local_89c + 1);
  } while ((int)local_89c < 0x20);
  DAT_362a6488 = 1;
  if (local_8e4 != 0) {
    (**(code **)(*(int *)(*(int *)(this + 0x18) + 0x3c) + 4))();
    CServer::InitServerNetProcess(*(CServer **)(this + 0x18));
  }
  iVar14 = 0;
  do {
    iVar7 = *(int *)(*(int *)(_pNetwork + 0x18) + 0x10);
    if (*(int *)(iVar14 * 0x100 + iVar7) != 0) {
      CPlayerAction::CPlayerAction(local_944);
      CPlayerAction::Clear(local_944);
      FUN_360f0fc0((void *)(iVar14 * 0x100 + iVar7 + 0xac),(undefined4 *)local_944);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 0x20);
  FUN_360f3800();
  DAT_362b8cfc = 1;
  FinishCRCGather(this);
  Sleep(200);
  StopProgress();
  CSoundLibrary::Mute(_pSound,1.0);
  local_8 = CONCAT31(local_8._1_3_,4);
  StringFree(local_8d4);
  FUN_360f2e50(&local_8b0);
  local_8 = 0xffffffff;
  _eh_vector_destructor_iterator_(local_898,0x44,0x20,CPlayerCharacter::~CPlayerCharacter);
  ExceptionList = local_10;
  return;
}

