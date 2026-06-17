
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: unsigned char __thiscall CNet::InitNetwork(void) */

uchar __thiscall CNet::InitNetwork(CNet *this)

{
  u_short uVar1;
  int iVar2;
  SOCKET s;
  hostent *phVar3;
  int iVar4;
  byte bVar5;
  u_long local_228;
  sockaddr local_224;
  char local_214 [128];
  WSADATA local_194;
  undefined4 local_4;
  
                    /* 0x1043b0  2318  ?InitNetwork@CNet@@QAEEXZ */
  local_4 = DAT_362abd90;
  iVar2 = WSAStartup(0x202,&local_194);
  if (iVar2 != 0) {
    return '\x01';
  }
  s = socket(2,2,0x11);
  *(SOCKET *)this = s;
  if (s != 0xffffffff) {
    local_228 = 1;
    iVar2 = ioctlsocket(s,-0x7ffb9982,&local_228);
    if (iVar2 == -1) {
      return '\x03';
    }
    bVar5 = 0;
    iVar2 = gethostname(local_214,0x80);
    if (((iVar2 != -1) && (phVar3 = gethostbyname(local_214), phVar3 != (hostent *)0x0)) &&
       (*phVar3->h_addr_list != (char *)0x0)) {
      bVar5 = (*phVar3->h_addr_list)[3];
    }
    iVar2 = (uint)bVar5 % 100 + 0x8fc;
    uVar1 = htons((u_short)iVar2);
    *(u_short *)(this + 0x10) = uVar1;
    local_224.sa_family = 2;
    local_224.sa_data._2_4_ = htonl(0);
    local_224.sa_data._0_2_ = *(undefined2 *)(this + 0x10);
    iVar4 = bind(*(SOCKET *)this,&local_224,0x10);
    do {
      if (iVar4 != -1) {
        return '\0';
      }
      if ((ushort)iVar2 < 0x95f) {
        iVar2 = iVar2 + 1;
      }
      else {
        iVar4 = WSAGetLastError();
        if (iVar4 != 0x2740) {
          return '\x04';
        }
      }
      uVar1 = htons((u_short)iVar2);
      *(u_short *)(this + 0x10) = uVar1;
      local_224.sa_family = 2;
      local_224.sa_data._2_4_ = htonl(0);
      local_224.sa_data._0_2_ = *(undefined2 *)(this + 0x10);
      iVar4 = bind(*(SOCKET *)this,&local_224,0x10);
    } while( true );
  }
  return '\x02';
}

