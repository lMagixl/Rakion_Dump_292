
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CCommunicationInterface::Bind_t(unsigned long,unsigned long) */

void __thiscall
CCommunicationInterface::Bind_t(CCommunicationInterface *this,ulong param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  sockaddr local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xfc950  1086  ?Bind_t@CCommunicationInterface@@QAEXKK@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217307;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  if (*(int *)(this + 0x88) != -1) {
    local_20.sa_family = 2;
    ExceptionList = &local_c;
    local_20.sa_data._0_2_ = htons((u_short)param_2);
    local_20.sa_data._2_4_ = htonl(param_1);
    iVar1 = bind(*(SOCKET *)(this + 0x88),&local_20,0x10);
    if (iVar1 == -1) {
      WSAGetLastError();
      puVar2 = (undefined4 *)GetSocketError(this,(long)&param_2);
      uVar4 = *puVar2;
      local_4 = 0;
      pcVar3 = Translate(s_ETRSCannot_bind_socket___s_3623577c,4);
      ThrowF_t(pcVar3,uVar4);
      local_4 = 0xffffffff;
      StringFree((char *)param_2);
    }
    *(undefined4 *)(this + 4) = 1;
  }
  ExceptionList = local_c;
  return;
}

