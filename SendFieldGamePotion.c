
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGamePotion(unsigned char,unsigned
   short) */

void __thiscall
IScavengerWorldNet::SendFieldGamePotion(IScavengerWorldNet *this,uchar param_1,ushort param_2)

{
  undefined2 local_1004;
  uchar local_1002;
  ushort local_1001;
  undefined4 local_4;
  
                    /* 0x197450  3301  ?SendFieldGamePotion@IScavengerWorldNet@@UAEXEG@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x6e;
  local_1002 = param_1;
  local_1001 = param_2;
  FUN_361950d0(&local_1004,5,1);
  return;
}

