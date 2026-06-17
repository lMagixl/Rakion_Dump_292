
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventoryBuy(unsigned short,unsigned
   char,unsigned char,unsigned short) */

void __thiscall
IScavengerWorldNet::SendInventoryBuy
          (IScavengerWorldNet *this,ushort param_1,uchar param_2,uchar param_3,ushort param_4)

{
  int iVar1;
  undefined2 local_1004;
  ushort local_1002;
  uchar local_1000;
  uchar local_fff;
  ushort local_ffe;
  undefined4 local_4;
  
                    /* 0x196240  3329  ?SendInventoryBuy@IScavengerWorldNet@@UAEXGEEG@Z */
  local_4 = DAT_362abd90;
  local_1000 = param_2;
  local_1002 = param_1;
  local_1004 = 0x2e;
  local_fff = param_3;
  iVar1 = 6;
  if (param_3 != '\0') {
    local_ffe = param_4;
    iVar1 = 8;
  }
  FUN_361950d0(&local_1004,iVar1,1);
  return;
}

