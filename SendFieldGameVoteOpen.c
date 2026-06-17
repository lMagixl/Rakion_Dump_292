
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGameVoteOpen(unsigned char,char *)
    */

void __thiscall
IScavengerWorldNet::SendFieldGameVoteOpen(IScavengerWorldNet *this,uchar param_1,char *param_2)

{
  int iVar1;
  undefined2 local_1004;
  uchar local_1002;
  CHAR local_1001 [4093];
  undefined4 local_4;
  
                    /* 0x1976c0  3311  ?SendFieldGameVoteOpen@IScavengerWorldNet@@UAEXEPAD@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x5d;
  local_1002 = param_1;
  lstrcpyA(local_1001,param_2);
  iVar1 = lstrlenA(param_2);
  FUN_361950d0(&local_1004,iVar1 + 4U & 0xffff,1);
  return;
}

