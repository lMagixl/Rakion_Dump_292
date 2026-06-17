
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendChCode(char *) */

void __thiscall IScavengerWorldNet::SendChCode(IScavengerWorldNet *this,char *param_1)

{
  int iVar1;
  undefined2 local_1004;
  CHAR local_1002 [4094];
  undefined4 local_4;
  
                    /* 0x197780  3237  ?SendChCode@IScavengerWorldNet@@UAEXPAD@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x65;
  lstrcpyA(local_1002,param_1);
  iVar1 = lstrlenA(param_1);
  FUN_361950d0(&local_1004,iVar1 + 3U & 0xffff,1);
  return;
}

