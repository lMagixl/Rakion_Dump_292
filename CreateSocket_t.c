
/* public: void __thiscall CCommunicationInterface::CreateSocket_t(void) */

void __thiscall CCommunicationInterface::CreateSocket_t(CCommunicationInterface *this)

{
  SOCKET SVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  CCommunicationInterface *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc8c0  1434  ?CreateSocket_t@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362172f5;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  SVar1 = socket(2,2,0x11);
  *(SOCKET *)(this + 0x88) = SVar1;
  *(undefined4 *)(this + 4) = 0;
  if (SVar1 == 0xffffffff) {
    WSAGetLastError();
    puVar2 = (undefined4 *)GetSocketError(this,(long)&local_10);
    uVar4 = *puVar2;
    local_4 = 0;
    pcVar3 = Translate(s_ETRSCannot_open_socket___s_36235760,4);
    ThrowF_t(pcVar3,uVar4);
    local_4 = 0xffffffff;
    StringFree((char *)local_10);
  }
  ExceptionList = local_c;
  return;
}

