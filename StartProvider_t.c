
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CMessageDispatcher::StartProvider_t(class CNetworkProvider const &) */

void __thiscall
CMessageDispatcher::StartProvider_t(CMessageDispatcher *this,CNetworkProvider *param_1)

{
  int iVar1;
  
                    /* 0x103b30  3665
                       ?StartProvider_t@CMessageDispatcher@@QAEXABVCNetworkProvider@@@Z */
  iVar1 = CTString::operator==((CTString *)param_1,s_Local_362363cc);
  if (iVar1 != 0) {
    CCommunicationInterface::PrepareForUse(&_cmiComm,0,0);
    _DAT_362ccea0 = 0;
    return;
  }
  iVar1 = CTString::operator==((CTString *)param_1,s_TCP_IP_Server_362363d4);
  CCommunicationInterface::PrepareForUse(&_cmiComm,1,(uint)(iVar1 == 0));
  _DAT_362ccea0 = 1;
  return;
}

