
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CSessionState::SetMasterClient(int) */

void __thiscall CSessionState::SetMasterClient(CSessionState *this,int param_1)

{
  int iVar1;
  CEntity *pCVar2;
  CEntityEvent *pCVar3;
  undefined4 *puVar4;
  CNetworkLibrary *this_00;
  ETeamClass EVar5;
  int iVar6;
  char *pcVar7;
  undefined1 uStack_421;
  CSessionState *local_420;
  CNetworkLibrary *pCStack_41c;
  undefined **appuStack_418 [2];
  undefined **appuStack_410 [2];
  undefined **appuStack_408 [2];
  CNetMessage aCStack_400 [1008];
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x111630  3509  ?SetMasterClient@CSessionState@@QAEXH@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621826b;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  ExceptionList = &pvStack_c;
  local_420 = this;
  iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  if ((*(char *)(iVar1 + 0x1a3) == '\x01') ||
     (iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))(), *(char *)(iVar1 + 0x1a3) == '\0')) {
    iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (*(char *)(iVar1 + 0x1a3) == '\x01') {
      EVar5 = 0;
      do {
        pCVar2 = GetMasterGolem(this,EVar5);
        if (pCVar2 == (CEntity *)0x0) {
          if (param_1 != 0) {
            CreateMasterGolem(this,EVar5);
          }
        }
        else {
          iVar1 = IsOfClass(pCVar2,s_NpcMasterGolem_3623796c);
          if ((iVar1 == 0) || (param_1 == 0)) {
            iVar1 = IsOfClass(pCVar2,s_NpcMasterGolem_3623797c);
            if ((iVar1 != 0) && (param_1 == 0)) {
              pCVar3 = (CEntityEvent *)ERemoteEntity::ERemoteEntity((ERemoteEntity *)appuStack_418);
              uStack_4 = 1;
              CEntity::SendEvent(pCVar2,pCVar3,0);
              uStack_4 = 0xffffffff;
              appuStack_418[0] = &CEntityEvent::_vftable_;
              CEntity::HandleSentEvents();
            }
          }
          else {
            pCVar3 = (CEntityEvent *)ELocalEntity::ELocalEntity((ELocalEntity *)appuStack_410);
            uStack_4 = 0;
            CEntity::SendEvent(pCVar2,pCVar3,0);
            uStack_4 = 0xffffffff;
            appuStack_410[0] = &CEntityEvent::_vftable_;
            CEntity::HandleSentEvents();
          }
        }
        EVar5 = EVar5 + 1;
      } while ((int)EVar5 < 2);
    }
    pCVar2 = GetGoldGolem(this);
    if ((pCVar2 == (CEntity *)0x0) &&
       (iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))(), *(char *)(iVar1 + 0x1a3) == '\x01'))
    {
      this_00 = _pNetwork + 0x1340;
      iVar6 = 0;
      local_420 = (CSessionState *)0x0;
      uStack_4 = 2;
      pCStack_41c = this_00;
      iVar1 = FUN_360caf20((int)this_00);
      if (0 < iVar1) {
        do {
          pcVar7 = s_MapNpc_3623798c;
          pCVar2 = (CEntity *)FUN_360cafb0(this_00,iVar6);
          iVar1 = IsOfClass(pCVar2,pcVar7);
          if (iVar1 != 0) {
            CNetMessage::CNetMessage(aCStack_400);
            uStack_421 = 1;
            CNetMessage::Write(aCStack_400,&uStack_421,1);
            puVar4 = (undefined4 *)FUN_360cafb0(this_00,iVar6);
            (**(code **)*puVar4)(aCStack_400);
          }
          iVar6 = iVar6 + 1;
          local_420 = (CSessionState *)iVar6;
          iVar1 = FUN_360caf20((int)this_00);
        } while (iVar6 < iVar1);
      }
    }
    else {
      iVar1 = 0;
      do {
        pCVar2 = GetMapNpc(local_420,iVar1);
        if (pCVar2 != (CEntity *)0x0) {
          if (param_1 == 0) {
            pCVar3 = (CEntityEvent *)ERemoteEntity::ERemoteEntity((ERemoteEntity *)appuStack_408);
            uStack_4 = 4;
            CEntity::SendEvent(pCVar2,pCVar3,0);
            appuStack_408[0] = &CEntityEvent::_vftable_;
          }
          else {
            pCVar3 = (CEntityEvent *)ELocalEntity::ELocalEntity((ELocalEntity *)appuStack_418);
            uStack_4 = 3;
            CEntity::SendEvent(pCVar2,pCVar3,0);
            appuStack_418[0] = &CEntityEvent::_vftable_;
          }
          uStack_4 = 0xffffffff;
          CEntity::HandleSentEvents();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x41);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

