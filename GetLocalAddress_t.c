
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall CCommunicationInterface::GetLocalAddress_t(unsigned long &,unsigned long
   &) */

void __thiscall
CCommunicationInterface::GetLocalAddress_t
          (CCommunicationInterface *this,ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  u_short uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  u_long uVar7;
  undefined4 uVar8;
  sockaddr local_20;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  puVar1 = param_1;
  local_10 = DAT_362abd90;
                    /* 0xfb6e0  1954  ?GetLocalAddress_t@CCommunicationInterface@@QAEXAAK0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36217145;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  *param_2 = 0;
  if (*(SOCKET *)(this + 0x88) != 0xffffffff) {
    param_1 = (ulong *)&DAT_00000010;
    iVar4 = getsockname(*(SOCKET *)(this + 0x88),&local_20,(int *)&param_1);
    if (iVar4 == -1) {
      WSAGetLastError();
      puVar5 = (undefined4 *)GetSocketError(this,(long)&param_2);
      uVar8 = *puVar5;
      local_4 = 0;
      pcVar6 = Translate(s_ETRSCannot_get_local_address_on_s_36235814,4);
      ThrowF_t(pcVar6,uVar8);
      local_4 = 0xffffffff;
      StringFree((char *)param_2);
    }
    uVar7 = ntohl(CONCAT22(local_20.sa_data._4_2_,local_20.sa_data._2_2_));
    *puVar1 = uVar7;
    uVar3 = ntohs(local_20.sa_data._0_2_);
    *puVar2 = (uint)uVar3;
  }
  ExceptionList = local_c;
  return;
}

