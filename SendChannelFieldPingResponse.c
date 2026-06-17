
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendChannelFieldPingResponse(unsigned
   short,unsigned long) */

void __thiscall
IScavengerWorldNet::SendChannelFieldPingResponse
          (IScavengerWorldNet *this,ushort param_1,ulong param_2)

{
  undefined2 local_1004;
  ushort local_1002;
  ulong local_1000;
  undefined4 local_4;
  
                    /* 0x196160  3249  ?SendChannelFieldPingResponse@IScavengerWorldNet@@UAEXGK@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x2a;
  local_1002 = param_1;
  local_1000 = param_2;
  FUN_361950d0(&local_1004,8,1);
  return;
}

