
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventoryMove(unsigned char,unsigned
   char,unsigned char,unsigned char) */

void __thiscall
IScavengerWorldNet::SendInventoryMove
          (IScavengerWorldNet *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  undefined2 local_1004;
  uchar local_1002;
  uchar local_1001;
  uchar local_1000;
  uchar local_fff;
  undefined4 local_4;
  
                    /* 0x196310  3339  ?SendInventoryMove@IScavengerWorldNet@@UAEXEEEE@Z */
  local_4 = DAT_362abd90;
  local_1001 = param_2;
  local_1002 = param_1;
  local_1004 = 0x31;
  local_1000 = param_3;
  local_fff = param_4;
  FUN_361950d0(&local_1004,6,1);
  return;
}

