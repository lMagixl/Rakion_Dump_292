
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: int __thiscall CNet::SendTo(char * const,unsigned short,unsigned long,unsigned short) */

int __thiscall CNet::SendTo(CNet *this,char *param_1,ushort param_2,ulong param_3,ushort param_4)

{
  int iVar1;
  sockaddr local_14;
  undefined4 local_4;
  
                    /* 0x104770  3358  ?SendTo@CNet@@AAEHQADGKG@Z */
  local_4 = DAT_362abd90;
  if (*(int *)(_pRakionWorldNet + 0x2e90) == 0) {
    return 0;
  }
  local_14.sa_data._2_4_ = param_3;
  local_14.sa_data._0_2_ = param_4;
  local_14.sa_family = 2;
  iVar1 = sendto(*(SOCKET *)this,param_1,(uint)param_2,0,&local_14,0x10);
  if ((iVar1 == -1) && (iVar1 = WSAGetLastError(), iVar1 != 0x2733)) {
    return 0;
  }
  return 1;
}

