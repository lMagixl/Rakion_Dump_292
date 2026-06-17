
/* private: unsigned short __thiscall CNet::RecvFrom(void *,struct sockaddr_in *) */

ushort __thiscall CNet::RecvFrom(CNet *this,void *param_1,sockaddr_in *param_2)

{
  int iVar1;
  uint local_4;
  
                    /* 0x104800  3072  ?RecvFrom@CNet@@AAEGPAXPAUsockaddr_in@@@Z */
  local_4 = 0x10;
  local_4 = recvfrom(*(SOCKET *)this,param_1,0x3ef,0,(sockaddr *)param_2,(int *)&local_4);
  if (local_4 == 0xffffffff) {
    iVar1 = WSAGetLastError();
    local_4 = (uint)(iVar1 != 0x2733);
  }
  return (ushort)local_4;
}

