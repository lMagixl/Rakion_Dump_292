
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventoryBuyPowerUser(unsigned
   char,unsigned char,unsigned short) */

void __thiscall
IScavengerWorldNet::SendInventoryBuyPowerUser
          (IScavengerWorldNet *this,uchar param_1,uchar param_2,ushort param_3)

{
  int iVar1;
  undefined2 local_1004;
  uchar local_1002;
  uchar local_1001;
  ushort local_1000;
  undefined4 local_4;
  
                    /* 0x1964f0  3334  ?SendInventoryBuyPowerUser@IScavengerWorldNet@@UAEXEEG@Z */
  local_4 = DAT_362abd90;
  local_1002 = param_1;
  local_1004 = 0x34;
  local_1001 = param_2;
  iVar1 = 4;
  if (param_2 != '\0') {
    local_1000 = param_3;
    iVar1 = 6;
  }
  FUN_361950d0(&local_1004,iVar1,1);
  return;
}

