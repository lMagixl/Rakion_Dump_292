
/* public: void __thiscall CSessionState::SendLevelChangeNotification(class CEntityEvent &) */

void __thiscall
CSessionState::SendLevelChangeNotification(CSessionState *this,CEntityEvent *param_1)

{
  int iVar1;
  CEntity *this_00;
  int iVar2;
  CNetworkLibrary *this_01;
  CEntityEvent *pCVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x110310  3342
                       ?SendLevelChangeNotification@CSessionState@@QAEXAAVCEntityEvent@@@Z */
  puStack_8 = &LAB_362180b2;
  local_c = ExceptionList;
  this_01 = _pNetwork + 0x1340;
  iVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar1 = FUN_360caf20((int)this_01);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360cafb0(this_01,iVar2);
      if ((*(uint *)(iVar1 + 0x10) & 0x4000) != 0) {
        iVar1 = 0;
        pCVar3 = param_1;
        this_00 = (CEntity *)FUN_360cafb0(this_01,iVar2);
        CEntity::SendEvent(this_00,pCVar3,iVar1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = FUN_360caf20((int)this_01);
    } while (iVar2 < iVar1);
  }
  ExceptionList = local_c;
  return;
}

