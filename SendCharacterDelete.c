
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendCharacterDelete(unsigned long,char *) */

void __thiscall
IScavengerWorldNet::SendCharacterDelete(IScavengerWorldNet *this,ulong param_1,char *param_2)

{
  int iVar1;
  undefined2 local_1004;
  ulong local_1002;
  CHAR local_ffe [4090];
  undefined4 local_4;
  
                    /* 0x1958b0  3255  ?SendCharacterDelete@IScavengerWorldNet@@UAEXKPAD@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x13;
  local_1002 = param_1;
  lstrcpyA(local_ffe,param_2);
  iVar1 = lstrlenA(param_2);
  FUN_361950d0(&local_1004,iVar1 + 7U & 0xffff,1);
  return;
}

