
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPlayerSource::SendSyncData(void) */

void __thiscall CPlayerSource::SendSyncData(CPlayerSource *this)

{
  int *piVar1;
  CEntity *pCVar2;
  DWORD DVar3;
  CNetMessage aCStack_7e4 [1008];
  CNetMessage aCStack_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x107cf0  3357  ?SendSyncData@CPlayerSource@@QAEXXZ */
  local_4 = DAT_362abd90;
  piVar1 = (int *)(**(code **)(*(int *)_pRakionWorldNet + 8))();
  if ((*piVar1 == 1) &&
     (pCVar2 = CNetworkLibrary::GetLocalPlayerEntity(_pNetwork,this), pCVar2 != (CEntity *)0x0)) {
    DVar3 = timeGetTime();
    if ((_DAT_362cfc04 & 1) == 0) {
      _DAT_362cfc04 = _DAT_362cfc04 | 1;
      DAT_362cfc00 = timeGetTime();
    }
    if (100 < DVar3 - DAT_362cfc00) {
      CNetMessage::CNetMessage(aCStack_3f4);
      (**(code **)(*(int *)pCVar2 + 0x1bc))(aCStack_3f4);
      CNetMessage::CNetMessage(aCStack_7e4);
      CNetMessage::Write(aCStack_7e4,pCVar2 + 0x264,1);
      CNetMessage::operator<<(aCStack_7e4,aCStack_3f4);
      CNet::SendToOtherNormalClient((CNet *)(_pNetwork + 0x11ac),0x30f,aCStack_7e4);
      DAT_362cfc00 = DVar3;
    }
    if ((_DAT_362cfc04 & 2) == 0) {
      _DAT_362cfc04 = _DAT_362cfc04 | 2;
      DAT_362cfbfc = timeGetTime();
    }
    if (100 < DVar3 - DAT_362cfbfc) {
      CNetMessage::CNetMessage(aCStack_3f4);
      (**(code **)(*(int *)pCVar2 + 0x1bc))(aCStack_3f4);
      CNetMessage::CNetMessage(aCStack_7e4);
      CNetMessage::Write(aCStack_7e4,pCVar2 + 0x264,1);
      CNetMessage::operator<<(aCStack_7e4,aCStack_3f4);
      CNet::SendToOtherRelayClient((CNet *)(_pNetwork + 0x11ac),0x30f,aCStack_7e4);
      DAT_362cfbfc = DVar3;
    }
  }
  return;
}

