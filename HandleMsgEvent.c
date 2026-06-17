
/* public: void __thiscall CSessionState::HandleMsgEvent(enum EEntityClassType,unsigned
   char,unsigned char,long,unsigned char *,long) */

void __thiscall
CSessionState::HandleMsgEvent
          (CSessionState *this,EEntityClassType param_1,uchar param_2,uchar param_3,long param_4,
          uchar *param_5,long param_6)

{
  CSessionState *this_00;
  int *piVar1;
  int iVar2;
  char *pcVar3;
  CEntityClass *pCVar4;
  int iVar5;
  CEntityEvent *pCVar6;
  CEntity *pCVar7;
  uint uVar8;
  CEntityEvent *pCVar9;
  undefined3 in_stack_0000000d;
  undefined4 uVar10;
  undefined4 uVar11;
  CEntity *local_20;
  int local_1c;
  CEntityClass *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0x112020  2240
                       ?HandleMsgEvent@CSessionState@@QAEXW4EEntityClassType@@EEJPAEJ@Z */
  local_8 = 0xffffffff;
  puStack_c = &LAB_3621833b;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffcc;
  ExceptionList = &local_10;
  iVar2 = FUN_361300d0((uint)param_4 >> 0x10);
  local_1c = iVar2;
  if (iVar2 == 0) {
    if (DAT_362ccee4 == 0) {
      ExceptionList = local_10;
      return;
    }
    pcVar3 = Translate(s_ETRSWarning__Event_received_for_a_362375b4,4);
    CPrintF(pcVar3);
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  pCVar4 = CStock_CEntityClass::Obtain_t(_pEntityClassStock,(CTFileName *)(iVar2 + 4));
  piVar1 = *(int **)(pCVar4 + 0x20);
  iVar5 = 0;
  local_8 = 0xffffffff;
  local_18 = pCVar4;
  if (0 < piVar1[1]) {
    do {
      if (param_4 == **(int **)(*piVar1 + iVar5 * 4)) {
        pCVar6 = (CEntityEvent *)(**(code **)(*(int *)(*piVar1 + iVar5 * 4) + 4))();
        pCVar9 = pCVar6 + 8;
        for (uVar8 = (uint)param_6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pCVar9 = *(undefined4 *)param_5;
          param_5 = (uchar *)(param_5 + 4);
          pCVar9 = pCVar9 + 4;
        }
        for (uVar8 = param_6 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pCVar9 = (CEntityEvent)*param_5;
          param_5 = (uchar *)(param_5 + 1);
          pCVar9 = pCVar9 + 1;
        }
        if (param_1 == 1) {
          _param_3 = *(ulong *)(this + (uint)param_2 * 4 + 0x1d20);
          goto LAB_36112261;
        }
        if (param_1 == 2) {
          _param_3 = *(ulong *)(this + ((uint)param_2 * 9 + (uint)param_3) * 4 + 0x1d70);
          goto LAB_36112261;
        }
        if (param_1 == 3) {
          _param_3 = *(ulong *)(this + (uint)param_3 * 4 + 0x2048);
          goto LAB_36112261;
        }
        if (param_1 == 4) {
          _param_3 = *(ulong *)(this + (uint)param_3 * 4 + 0x2040);
          goto LAB_36112261;
        }
        if (param_1 == 6) {
          _param_3 = *(ulong *)(this + (uint)CONCAT11(param_3,param_2) * 4 + 0x2150);
          goto LAB_36112261;
        }
        if (param_1 != 7) goto LAB_36112261;
        BuildMapItemList(this);
        this_00 = this + 0x2960;
        iVar5 = 0;
        local_8 = 2;
        iVar2 = FUN_360caf20((int)this_00);
        if (0 < iVar2) {
          do {
            pcVar3 = s_MapItem_36237690;
            pCVar7 = (CEntity *)FUN_360cafb0(this_00,iVar5);
            iVar2 = IsOfClass(pCVar7,pcVar3);
            if (iVar2 == 0) {
              pcVar3 = s_BoxItem_36237698;
              pCVar7 = (CEntity *)FUN_360cafb0(this_00,iVar5);
              iVar2 = IsOfClass(pCVar7,pcVar3);
              if (iVar2 != 0) goto LAB_36112224;
            }
            else {
LAB_36112224:
              iVar2 = FUN_360cafb0(this_00,iVar5);
              if (*(uchar *)(iVar2 + 0x264) == param_2) {
                _param_3 = *(ulong *)(iVar2 + 0x1c);
                local_8 = 0xffffffff;
                goto LAB_36112261;
              }
            }
            iVar5 = iVar5 + 1;
            iVar2 = FUN_360caf20((int)this_00);
          } while (iVar5 < iVar2);
        }
        local_8 = 0xffffffff;
LAB_36112261:
        iVar2 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),_param_3,&local_20);
        if (iVar2 == 0) {
          if (DAT_362ccee4 != 0) {
            pcVar3 = Translate(s_ETRSWarning__event_received_for_n_362376a0,4);
            CPrintF(pcVar3,_param_3);
          }
          CStock_CEntityClass::Release(_pEntityClassStock,local_18);
        }
        else if (((byte)local_20[0x10] & 4) == 0) {
          CEntity::SendEvent(local_20,pCVar6,0);
          CEntity::HandleSentEvents();
          CStock_CEntityClass::Release(_pEntityClassStock,local_18);
        }
        else {
          if (DAT_362ccee4 != 0) {
            pcVar3 = Translate(s_ETRSWarning__event_received_for_d_362376e8,4);
            CPrintF(pcVar3,_param_3);
          }
          CStock_CEntityClass::Release(_pEntityClassStock,local_18);
        }
        operator_delete(pCVar6);
        ExceptionList = local_10;
        return;
      }
      iVar5 = iVar5 + 1;
      iVar2 = local_1c;
    } while (iVar5 < piVar1[1]);
  }
  if (DAT_362ccee4 != 0) {
    uVar8 = param_4 & 0xffff;
    uVar11 = *(undefined4 *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 4);
    pcVar3 = Translate(s_ETRSWarning__Unable_to_find_requ_36237640,4);
    CPrintF(pcVar3,uVar10,uVar11,uVar8);
  }
  CStock_CEntityClass::Release(_pEntityClassStock,pCVar4);
  ExceptionList = local_10;
  return;
}

