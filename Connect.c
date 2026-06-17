
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual unsigned char __thiscall IScavengerWorldNet::Connect(unsigned long,unsigned
   int,unsigned long &) */

uchar __thiscall
IScavengerWorldNet::Connect(IScavengerWorldNet *this,ulong param_1,uint param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  HANDLE pvVar3;
  DWORD local_30;
  u_long local_2c [2];
  sockaddr local_24;
  sockaddr local_14;
  undefined4 local_4;
  
                    /* 0x195300  1357  ?Connect@IScavengerWorldNet@@UAEEKIAAK@Z */
  local_4 = DAT_362abd90;
  DAT_36381b08 = socket(2,1,0);
  if (DAT_36381b08 == 0xffffffff) {
    iVar2 = *DAT_3637fb00;
    iVar1 = WSAGetLastError();
    (**(code **)(iVar2 + 0x174))(iVar1);
    return '\x01';
  }
  local_24.sa_data[0] = (char)param_2;
  local_24.sa_data[1] = param_2._1_1_;
  local_24.sa_family = 2;
  local_24.sa_data._2_4_ = param_1;
  iVar2 = connect(DAT_36381b08,&local_24,0x10);
  if (iVar2 == -1) {
    iVar2 = *DAT_3637fb00;
    iVar1 = WSAGetLastError();
    (**(code **)(iVar2 + 0x174))(iVar1);
    return '\x02';
  }
  DAT_36371ab0 = 0;
  DAT_36371ab4 = 0;
  DAT_3637daf8 = 0;
  DAT_36373af4 = 0;
  DAT_36373af0._0_2_ = 0;
  local_2c[1] = 0x10;
  iVar2 = getsockname(DAT_36381b08,&local_14,(int *)(local_2c + 1));
  if (iVar2 == -1) {
    iVar2 = *DAT_3637fb00;
    iVar1 = WSAGetLastError();
    (**(code **)(iVar2 + 0x174))(iVar1);
  }
  else {
    *param_3 = local_14.sa_data._2_4_;
    local_2c[0] = 1;
    iVar2 = ioctlsocket(DAT_36381b08,-0x7ffb9982,local_2c);
    if (iVar2 != -1) {
      local_30 = 0;
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_36194b90,(LPVOID)0x0,0,&local_30);
      CloseHandle(pvVar3);
      local_30 = 0;
      pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_36194de0,(LPVOID)0x0,0,&local_30);
      CloseHandle(pvVar3);
      return '\0';
    }
  }
  return '\x03';
}

