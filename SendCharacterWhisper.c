
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendCharacterWhisper(char *,char *) */

void __thiscall
IScavengerWorldNet::SendCharacterWhisper(IScavengerWorldNet *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  CHAR local_1004 [4096];
  undefined4 local_4;
  
                    /* 0x1959e0  3262  ?SendCharacterWhisper@IScavengerWorldNet@@UAEXPAD0@Z */
  local_4 = DAT_362abd90;
  local_1004[0] = '\x16';
  local_1004[1] = '\0';
  lstrcpyA(local_1004 + 2,param_1);
  iVar1 = lstrlenA(param_1);
  lstrcpyA(local_1004 + (iVar1 + 3U & 0xffff),param_2);
  iVar2 = lstrlenA(param_2);
  FUN_361950d0((undefined2 *)local_1004,iVar1 + 4 + iVar2 & 0xffff,1);
  return;
}

