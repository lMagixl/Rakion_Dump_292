
/* public: void __thiscall CSessionState::SendQuestSwitchStatus(unsigned long,unsigned short) */

void __thiscall
CSessionState::SendQuestSwitchStatus(CSessionState *this,ulong param_1,ushort param_2)

{
  int iVar1;
  CEntityEvent *pCVar2;
  CSessionState *pCVar3;
  int iVar4;
  CEntity *local_30;
  undefined **local_2c [2];
  CEntity *local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1113c0  3354  ?SendQuestSwitchStatus@CSessionState@@QAEXKG@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36218206;
  local_c = ExceptionList;
  iVar4 = 0;
  if (*(short *)(this + 0x2548) != 0) {
    pCVar3 = this + 0x2150;
    ExceptionList = &local_c;
    do {
      if ((*(ulong *)pCVar3 != 0xffffffff) &&
         (iVar1 = CWorld::EntityExists((CWorld *)(_pNetwork + 0x11e4),*(ulong *)pCVar3,&local_30),
         iVar1 != 0)) {
        pCVar2 = (CEntityEvent *)ETouch::ETouch((ETouch *)local_2c);
        local_4 = 0;
        CEntity::SendEvent(local_30,pCVar2,0);
        local_4 = 1;
        if ((local_24 != (CEntity *)0x0) &&
           (iVar1 = *(int *)(local_24 + 0x18), *(int *)(local_24 + 0x18) = iVar1 + -1,
           iVar1 + -1 == 0)) {
          CEntity::DeleteSelf(local_24);
        }
        local_4 = 0xffffffff;
        local_2c[0] = &CEntityEvent::_vftable_;
      }
      iVar4 = iVar4 + 1;
      pCVar3 = pCVar3 + 4;
    } while (iVar4 < (int)(uint)*(ushort *)(this + 0x2548));
  }
  ExceptionList = local_c;
  return;
}

