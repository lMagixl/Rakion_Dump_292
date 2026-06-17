
/* public: void __thiscall CMovableEntity::SendBlockEvent(class CClipMove &) */

void __thiscall CMovableEntity::SendBlockEvent(CMovableEntity *this,CClipMove *param_1)

{
  CEntity *pCVar1;
  int iVar2;
  EBlock local_28 [8];
  CEntity *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1acd20  3235  ?SendBlockEvent@CMovableEntity@@QAEXAAVCClipMove@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bf2c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  EBlock::EBlock(local_28);
  pCVar1 = *(CEntity **)(param_1 + 0x1c0);
  local_4 = 0;
  if (pCVar1 != (CEntity *)0x0) {
    *(int *)(pCVar1 + 0x18) = *(int *)(pCVar1 + 0x18) + 1;
  }
  if ((local_20 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_20 + 0x18), *(int *)(local_20 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_20);
  }
  local_1c = *(undefined4 *)(param_1 + 0x1cc);
  local_18 = *(undefined4 *)(param_1 + 0x1d0);
  local_14 = *(undefined4 *)(param_1 + 0x1d4);
  local_10 = *(undefined4 *)(param_1 + 0x1d8);
  local_20 = pCVar1;
  CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_28,0);
  iVar2 = (**(code **)(*(int *)this + 0x90))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)this + 0x70))();
    if (iVar2 == 0) {
      CEntityMessage::WritePlacementNotify
                ((CEntityMessage *)&DAT_362cf6f4,(ulong *)(this + 0x1c),'\x01');
      CServer::SendMessageA(*(CServer **)(_pNetwork + 0x18),(CEntityMessage *)&DAT_362cf6f4);
    }
  }
  local_4 = 1;
  if ((local_20 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_20 + 0x18), *(int *)(local_20 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_20);
  }
  ExceptionList = pvStack_c;
  return;
}

