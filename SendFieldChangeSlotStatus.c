
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldChangeSlotStatus(unsigned
   char,unsigned char) */

void __thiscall
IScavengerWorldNet::SendFieldChangeSlotStatus(IScavengerWorldNet *this,uchar param_1,uchar param_2)

{
  undefined2 local_1004;
  uchar local_1002;
  uchar local_1001;
  undefined4 local_4;
  
                    /* 0x196dd0  3284  ?SendFieldChangeSlotStatus@IScavengerWorldNet@@UAEXEE@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x42;
  local_1002 = param_1;
  local_1001 = param_2;
  FUN_361950d0(&local_1004,4,1);
  return;
}

