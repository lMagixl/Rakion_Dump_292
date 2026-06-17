
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldEnter(unsigned short,char *) */

void __thiscall
IScavengerWorldNet::SendFieldEnter(IScavengerWorldNet *this,ushort param_1,char *param_2)

{
  DWORD DVar1;
  int iVar2;
  undefined2 local_1004;
  ushort local_1002;
  CHAR local_1000 [4092];
  undefined4 local_4;
  
                    /* 0x196940  3289  ?SendFieldEnter@IScavengerWorldNet@@UAEXGPAD@Z */
  local_4 = DAT_362abd90;
  DVar1 = GetTickCount();
  if (499 < DVar1 - DAT_36381bfc) {
    local_1004 = 0x38;
    local_1002 = param_1;
    DAT_36381bfc = DVar1;
    lstrcpyA(local_1000,param_2);
    iVar2 = lstrlenA(param_2);
    FUN_361950d0(&local_1004,iVar2 + 5U & 0xffff,1);
  }
  return;
}

