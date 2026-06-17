
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventorySell(unsigned char) */

void __thiscall IScavengerWorldNet::SendInventorySell(IScavengerWorldNet *this,uchar param_1)

{
  undefined2 local_1004;
  uchar local_1002;
  undefined4 local_4;
  
                    /* 0x1962c0  3340  ?SendInventorySell@IScavengerWorldNet@@UAEXE@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x2f;
  local_1002 = param_1;
  FUN_361950d0(&local_1004,3,1);
  return;
}

