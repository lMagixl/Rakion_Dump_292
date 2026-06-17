
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CSessionState::HandleTimers(float) */

void __thiscall CSessionState::HandleTimers(CSessionState *this,float param_1)

{
  CEntity *this_00;
  CListNode *this_01;
  CNetworkLibrary *pCVar1;
  int iVar2;
  CEntityEvent *pCVar3;
  undefined **appuStack_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x10f910  2244  ?HandleTimers@CSessionState@@QAEXM@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621804c;
  pvStack_c = ExceptionList;
  pCVar1 = _pNetwork + 0x1318;
  ExceptionList = &pvStack_c;
LAB_3610f940:
  do {
    this_01 = *(CListNode **)pCVar1;
    if (((*(int *)this_01 == 0) || (param_1 + _DAT_36228818 < *(float *)(this_01 + 8))) ||
       (this_00 = (CEntity *)(this_01 + -0x104), this_00 == (CEntity *)0x0)) {
      CEntity::HandleSentEvents();
      ExceptionList = pvStack_c;
      return;
    }
    if ((DAT_362cf260 == 0) && (DAT_362cf250 != 0)) {
      iVar2 = (**(code **)(*(int *)this_00 + 0x90))();
      if ((iVar2 != 0) &&
         (((~*(uint *)(this_01 + -0xf4) & 0x1000000) != 0 &&
          ((~(*(uint *)(this_01 + -0xf4) >> 0x1c) & 1) == 0)))) {
        *(undefined4 *)(this_01 + 8) = 0xbf800000;
        CListNode::Remove(this_01);
        goto LAB_3610f940;
      }
    }
    *(undefined4 *)(this_01 + 8) = 0xbf800000;
    CListNode::Remove(this_01);
    pCVar3 = (CEntityEvent *)ETimer::ETimer((ETimer *)appuStack_14);
    uStack_4 = 0;
    CEntity::SendEvent(this_00,pCVar3,0);
    uStack_4 = 0xffffffff;
    appuStack_14[0] = &CEntityEvent::_vftable_;
  } while( true );
}

