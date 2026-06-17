
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CNet::SendChatDataInGame(char *,int) */

void __thiscall CNet::SendChatDataInGame(CNet *this,char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uchar uStack_3f9;
  uint uStack_3f8;
  CNetMessage aCStack_3f4 [1004];
  undefined2 uStack_8;
  undefined4 local_4;
  
                    /* 0x105730  3264  ?SendChatDataInGame@CNet@@QAEXPADH@Z */
  local_4 = DAT_362abd90;
  iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uStack_3f8 = CONCAT31(uStack_3f8._1_3_,*(undefined1 *)(iVar2 + 0x475c));
  CNetMessage::CNetMessage(aCStack_3f4);
  CNetMessage::Write(aCStack_3f4,&uStack_3f8,1);
  uStack_3f9 = (uchar)param_2;
  CNetMessage::Write(aCStack_3f4,&uStack_3f9,1);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uStack_3f9 = (char)pcVar3 - ((char)param_1 + '\x01');
  CNetMessage::Write(aCStack_3f4,&uStack_3f9,1);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  CNetMessage::Write(aCStack_3f4,param_1,(short)pcVar3 - ((short)param_1 + 1));
  (**(code **)(*(int *)_pRakionWorldNet + 8))();
  if (*(int *)(_pRakionWorldNet + 8) != 0) {
    IScavengerWorldNet::SendFieldGameTunnelingAll(_pRakionWorldNet,0x30e,aCStack_3f4);
    uStack_8 = 0;
    iVar2 = IScavengerWorldNet::IsTunneling_Client(_pRakionWorldNet,(uchar)uStack_3f8);
    if (iVar2 != 0) {
      return;
    }
  }
  iVar2 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
  uVar4 = 0;
  pcVar3 = (char *)(iVar2 + 0x1ac);
  do {
    if (((uStack_3f8 & 0xff) != uVar4) && (*pcVar3 == '\x03')) {
      uStack_3f9 = (uchar)uVar4;
      SendData_Unreliable(this,(ushort *)&DAT_36236438,(uchar *)&uStack_3f8,&uStack_3f9,aCStack_3f4)
      ;
      uStack_8 = 0;
    }
    uVar4 = uVar4 + 1;
    pcVar3 = pcVar3 + 0x37c;
  } while ((int)uVar4 < 0x14);
  return;
}

