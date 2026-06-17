
/* public: void __thiscall CPlayerSource::ChangeCharacter(class CPlayerCharacter &) */

void __thiscall CPlayerSource::ChangeCharacter(CPlayerSource *this,CPlayerCharacter *param_1)

{
  int iVar1;
  char *pcVar2;
  CNetworkMessage local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x1084a0  1150  ?ChangeCharacter@CPlayerSource@@QAEXAAVCPlayerCharacter@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362179a4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = CPlayerCharacter::operator==((CPlayerCharacter *)(this + 8),param_1);
  if (iVar1 == 0) {
    pcVar2 = Translate(s_ETRSCannot_update_character___di_3623695c,4);
    CPrintF(pcVar2);
  }
  CNetworkMessage::CNetworkMessage(local_24,0x11);
  local_4 = 0;
  CNetworkMessage::Write(local_24,this,4);
  FUN_361355a0(local_24,param_1);
  CMessageDispatcher::SendToServerReliable((CMessageDispatcher *)_pNetwork,local_24);
  CPlayerCharacter::operator=((CPlayerCharacter *)(this + 8),param_1);
  local_4 = 0xffffffff;
  CNetworkMessage::~CNetworkMessage(local_24);
  ExceptionList = local_c;
  return;
}

