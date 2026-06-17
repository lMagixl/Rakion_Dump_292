
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNetworkLibrary::EnumSessionsStart(int) */

void __thiscall CNetworkLibrary::EnumSessionsStart(CNetworkLibrary *this,int param_1)

{
  CNetworkSession *pCVar1;
  int iVar2;
  CNetworkSession *this_00;
  
                    /* 0xf4e00  1578  ?EnumSessionsStart@CNetworkLibrary@@QAEXH@Z */
  _DAT_362cce84 = 1;
  this_00 = *(CNetworkSession **)(this + 0x990);
  while (pCVar1 = *(CNetworkSession **)this_00, pCVar1 != (CNetworkSession *)0x0) {
    CNetworkSession::~CNetworkSession(this_00);
    operator_delete(this_00);
    this_00 = pCVar1;
  }
  _DAT_362cce80 = 1;
  iVar2 = CCommunicationInterface::IsNetworkEnabled(&_cmiComm);
  if (iVar2 == 0) {
    CCommunicationInterface::PrepareForUse(&_cmiComm,1,1);
  }
  if (*(int *)*(CServer **)(this + 0x18) == 0) {
    CServer::Start_t(*(CServer **)(this + 0x18));
  }
  return;
}

