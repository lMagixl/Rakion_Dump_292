
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventoryBuyLotto(unsigned char,unsigned
   char * const) */

void __thiscall
IScavengerWorldNet::SendInventoryBuyLotto(IScavengerWorldNet *this,uchar param_1,uchar *param_2)

{
  undefined2 local_1004;
  uchar local_1002;
  undefined4 local_1001;
  uchar local_ffd;
  undefined4 local_4;
  
                    /* 0x1965f0  3332  ?SendInventoryBuyLotto@IScavengerWorldNet@@UAEXEQAE@Z */
  local_1001 = *(undefined4 *)param_2;
  local_4 = DAT_362abd90;
  local_1002 = param_1;
  local_ffd = param_2[4];
  local_1004 = 0x75;
  FUN_361950d0(&local_1004,8,1);
  return;
}

