
/* public: void __thiscall CCommunicationInterface::SetNonBlocking_t(void) */

void __thiscall CCommunicationInterface::SetNonBlocking_t(CCommunicationInterface *this)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  u_long local_18;
  char *local_14;
  char local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfca30  3534  ?SetNonBlocking_t@CCommunicationInterface@@QAEXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217319;
  local_c = ExceptionList;
  if (*(SOCKET *)(this + 0x88) != 0xffffffff) {
    local_18 = 1;
    ExceptionList = &local_c;
    iVar1 = ioctlsocket(*(SOCKET *)(this + 0x88),-0x7ffb9982,&local_18);
    if (iVar1 == -1) {
      WSAGetLastError();
      puVar2 = (undefined4 *)GetSocketError(this,(long)&local_14);
      uVar4 = *puVar2;
      local_4 = 0;
      pcVar3 = Translate(s_ETRSCannot_set_socket_to_non_blo_36235798,4);
      ThrowF_t(pcVar3,uVar4);
      local_4 = 0xffffffff;
      StringFree(local_14);
    }
    local_10[0] = '\x01';
    local_10[1] = '\0';
    local_10[2] = '\0';
    local_10[3] = '\0';
    iVar1 = setsockopt(*(SOCKET *)(this + 0x88),0xffff,0x20,local_10,4);
    if (iVar1 == -1) {
      pcVar3 = Translate(s_ETRSCannot_allow_broadcast_on_a_s_362357c8,4);
      ThrowF_t(pcVar3);
    }
  }
  ExceptionList = local_c;
  return;
}

