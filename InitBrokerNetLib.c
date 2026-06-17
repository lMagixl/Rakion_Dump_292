
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned char __cdecl InitBrokerNetLib(class IScavengerBrokerNet *) */

uchar __cdecl InitBrokerNetLib(IScavengerBrokerNet *param_1)

{
  int iVar1;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195;
  WSADATA local_194;
  undefined4 local_4;
  
                    /* 0x191840  2306  ?InitBrokerNetLib@@YAEPAVIScavengerBrokerNet@@@Z */
  local_4 = DAT_362abd90;
  local_1a4 = 0xe1;
  local_1a3 = 0x3a;
  local_1a2 = 0x7e;
  local_1a1 = 0xf5;
  local_1a0 = 0x37;
  local_19f = 0x2c;
  local_19e = 0x10;
  local_19d = 0x4d;
  local_19c = 0x4e;
  local_19b = 0xce;
  local_19a = 0xb3;
  local_199 = 0xc;
  local_198 = 0x56;
  local_197 = 0x26;
  local_196 = 0xa4;
  local_195 = 0x8e;
  iVar1 = WSAStartup(0x202,&local_194);
  if (iVar1 != 0) {
    return '\x01';
  }
  DAT_3636fa98 = param_1;
  DAT_36362a80 = (uint *)FUN_36194b40(0xc47f);
  FUN_361920f0((uint *)&local_1a4,(uint *)&DAT_00000010,3,DAT_36362a80);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_36362a68);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_36362a50);
  return '\0';
}

