
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendLogin(unsigned long,char *) */

void __thiscall IScavengerWorldNet::SendLogin(IScavengerWorldNet *this,ulong param_1,char *param_2)

{
  int iVar1;
  undefined2 local_1004;
  ulong local_1002;
  undefined4 local_ffe;
  CHAR local_ffa [4086];
  undefined4 local_4;
  
                    /* 0x1956a0  3343  ?SendLogin@IScavengerWorldNet@@UAEXKPAD@Z */
  local_4 = DAT_362abd90;
  DAT_36381b20 = 0;
  DAT_36381b24 = 0;
  local_1004 = 0xc;
  local_1002 = param_1;
  local_ffe = 0;
  lstrcpyA(local_ffa,param_2);
  iVar1 = lstrlenA(param_2);
  FUN_361950d0(&local_1004,iVar1 + 0xbU & 0xffff,1);
  return;
}

