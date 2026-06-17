
/* public: void __thiscall CMovableEntity::SendTouchEvent(class CClipMove const &) */

void __thiscall CMovableEntity::SendTouchEvent(CMovableEntity *this,CClipMove *param_1)

{
  CEntity *pCVar1;
  int iVar2;
  undefined **local_4c [2];
  CEntity *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ETouch local_2c [8];
  CEntity *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1acbb0  3368  ?SendTouchEvent@CMovableEntity@@QAEXABVCClipMove@@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bf12;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ETouch::ETouch(local_2c);
  local_4 = 0;
  ETouch::ETouch((ETouch *)local_4c);
  pCVar1 = *(CEntity **)(param_1 + 0x1c0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pCVar1 != (CEntity *)0x0) {
    *(int *)(pCVar1 + 0x18) = *(int *)(pCVar1 + 0x18) + 1;
  }
  if ((local_24 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_24 + 0x18), *(int *)(local_24 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_24);
  }
  local_1c = *(undefined4 *)(param_1 + 0x1cc);
  local_18 = *(undefined4 *)(param_1 + 0x1d0);
  local_14 = *(undefined4 *)(param_1 + 0x1d4);
  local_10 = *(undefined4 *)(param_1 + 0x1d8);
  local_20 = 0;
  if (this != (CMovableEntity *)0x0) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  }
  local_24 = pCVar1;
  if ((local_44 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_44 + 0x18), *(int *)(local_44 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_44);
  }
  local_38 = *(undefined4 *)(param_1 + 0x1d0);
  local_3c = *(undefined4 *)(param_1 + 0x1cc);
  local_34 = *(undefined4 *)(param_1 + 0x1d4);
  local_30 = *(undefined4 *)(param_1 + 0x1d8);
  local_40 = 1;
  local_44 = (CEntity *)this;
  CEntity::SendEvent((CEntity *)this,(CEntityEvent *)local_2c,0);
  CEntity::SendEvent(*(CEntity **)(param_1 + 0x1c0),(CEntityEvent *)local_4c,0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if ((local_44 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_44 + 0x18), *(int *)(local_44 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_44);
  }
  local_4c[0] = &CEntityEvent::_vftable_;
  local_4 = 3;
  if ((local_24 != (CEntity *)0x0) &&
     (iVar2 = *(int *)(local_24 + 0x18), *(int *)(local_24 + 0x18) = iVar2 + -1, iVar2 + -1 == 0)) {
    CEntity::DeleteSelf(local_24);
  }
  ExceptionList = local_c;
  return;
}

