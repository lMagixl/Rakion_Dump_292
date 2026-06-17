
/* public: void __thiscall CServer::SendClientData(long) */

void __thiscall CServer::SendClientData(CServer *this,long param_1)

{
  int iVar1;
  char *pcVar2;
  longlong *plVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  int iVar7;
  int local_54;
  undefined **local_50;
  double local_4c [2];
  CNetworkMessage local_3c [24];
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x10bc60  3265  ?SendClientData@CServer@@QAEXJ@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217d22;
  local_c = ExceptionList;
  if (*(ushort *)(this + 0x1c78) < 2) {
    ExceptionList = &local_c;
    CNetworkMessage::CNetworkMessage(local_24,2);
    local_4 = 0;
    CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_24);
    local_4 = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_24);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  CNetworkMessage::CNetworkMessage(local_3c,0x31);
  local_4 = 1;
  iVar4 = *(int *)(this + 0x1c80) + -2;
  if (iVar4 < 0) {
    iVar4 = *(int *)(this + 0x1c80) + 0x256;
  }
  iVar1 = PrepareClientData(this,param_1);
  if (iVar1 == 0) {
    local_4 = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_3c);
    ExceptionList = local_c;
    return;
  }
  iVar1 = FUN_360f12f0((int)(this + 0x38f4));
  if (iVar1 < 0x15556) {
    iVar1 = FUN_360f12f0((int)(this + 0x38f4));
    if (DAT_362cced0 != 0) {
      dVar6 = (double)*(float *)(this + iVar4 * 0xc + 0x58);
      lVar5 = param_1;
      iVar7 = iVar1;
      pcVar2 = Translate(s_ETRSSEND_Client___d__Time___5_2f_362371d4,4);
      CPrintF(pcVar2,lVar5,dVar6,iVar7);
    }
    plVar3 = (longlong *)CTimer::GetHighPrecisionTimer(_pTimer);
    local_4c[0] = (double)*plVar3 / (double)*(longlong *)_pTimer;
    CNetworkMessage::Write(local_3c,this + iVar4 * 0xc + 0x58,4);
    CNetworkMessage::Write(local_3c,local_4c,8);
    local_50 = &PTR_FUN_362350b0;
    local_54 = FUN_360fe080();
    FUN_360fe0a0(*(int *)(this + 0x390c),iVar1,&DAT_362cfd00,&local_54);
    CNetworkMessage::Write(local_3c,&local_54,4);
    CNetworkMessage::Write(local_3c,&DAT_362cfd00,local_54);
    CMessageDispatcher::SendToClient((CMessageDispatcher *)_pNetwork,param_1,local_3c);
    CTimer::GetHighPrecisionTimer(_pTimer);
    *(float *)(*(int *)(this + 8) + param_1 * 0x60 + 0x54) =
         (float)((float10)(longlong)local_4c[0] / (float10)*(longlong *)_pTimer +
                (float10)iVar1 / (float10)*(int *)(*(int *)(this + 8) + 0x40 + param_1 * 0x60));
  }
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_3c);
  ExceptionList = local_c;
  return;
}

