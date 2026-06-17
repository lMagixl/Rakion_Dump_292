
/* public: void __thiscall CNetworkLibrary::SendChat(unsigned long,unsigned long,class CTString
   const &) */

void __thiscall
CNetworkLibrary::SendChat(CNetworkLibrary *this,ulong param_1,ulong param_2,CTString *param_3)

{
  char *pcVar1;
  char cVar2;
  CTString *pCVar3;
  char *pcVar4;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xf4c40  3263  ?SendChat@CNetworkLibrary@@QAEXKKABVCTString@@@Z */
  pCVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36216745;
  local_c = ExceptionList;
  pcVar4 = *(char **)param_3;
  pcVar1 = pcVar4 + 1;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  if ((uint)((int)pcVar4 - (int)pcVar1) < 0x101) {
    ExceptionList = &local_c;
    CNetworkMessage::CNetworkMessage(local_24,0x1d);
    local_4 = 0;
    CNetworkMessage::Write(local_24,&param_1,4);
    CNetworkMessage::Write(local_24,&param_2,4);
    CNetworkMessage::operator<<(local_24,pCVar3);
    CMessageDispatcher::SendToServer((CMessageDispatcher *)this,local_24);
    local_4 = 0xffffffff;
    CNetworkMessage::~CNetworkMessage(local_24);
  }
  ExceptionList = local_c;
  return;
}

