
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* unsigned char __cdecl InitWorldNetLib(class IScavengerWorldNet *) */

uchar __cdecl InitWorldNetLib(IScavengerWorldNet *param_1)

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
  
                    /* 0x194fa0  2325  ?InitWorldNetLib@@YAEPAVIScavengerWorldNet@@@Z */
  local_4 = DAT_362abd90;
  local_19a = 0xf6;
  local_196 = 0xf6;
  local_1a4 = 0x80;
  local_1a3 = 0xfd;
  local_1a2 = 0x78;
  local_1a1 = 0xdd;
  local_1a0 = 0xc3;
  local_19f = 0x87;
  local_19e = 0xd2;
  local_19d = 0x57;
  local_19c = 0xdb;
  local_19b = 0xe7;
  local_199 = 0xd0;
  local_198 = 0x52;
  local_197 = 0x90;
  local_195 = 0x96;
  iVar1 = WSAStartup(0x202,&local_194);
  if (iVar1 != 0) {
    return '\x01';
  }
  DAT_3637fb00 = param_1;
  DAT_36372ae8 = (uint *)FUN_36194b40(0xc47f);
  FUN_361920f0((uint *)&local_1a4,(uint *)&DAT_00000010,3,DAT_36372ae8);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_36372ad0);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_36372ab8);
  return '\0';
}

