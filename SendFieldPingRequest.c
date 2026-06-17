
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldPingRequest(unsigned char,unsigned
   long) */

void __thiscall
IScavengerWorldNet::SendFieldPingRequest(IScavengerWorldNet *this,uchar param_1,ulong param_2)

{
  undefined2 local_1004;
  uchar local_1002;
  ulong local_1001;
  undefined4 local_4;
  
                    /* 0x1975a0  3315  ?SendFieldPingRequest@IScavengerWorldNet@@UAEXEK@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x59;
  local_1002 = param_1;
  local_1001 = param_2;
  FUN_361950d0(&local_1004,7,1);
  return;
}

