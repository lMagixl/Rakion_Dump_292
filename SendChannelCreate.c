
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendChannelCreate(char *,char *,unsigned
   char) */

void __thiscall
IScavengerWorldNet::SendChannelCreate
          (IScavengerWorldNet *this,char *param_1,char *param_2,uchar param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uchar local_1004 [4096];
  undefined4 local_4;
  
                    /* 0x195de0  3245  ?SendChannelCreate@IScavengerWorldNet@@UAEXPAD0E@Z */
  local_4 = DAT_362abd90;
  local_1004[0] = '!';
  local_1004[1] = '\0';
  lstrcpyA((LPSTR)(local_1004 + 2),param_1);
  iVar2 = lstrlenA(param_1);
  lstrcpyA((LPSTR)(local_1004 + (iVar2 + 3U & 0xffff)),param_2);
  iVar3 = lstrlenA(param_1);
  uVar1 = iVar2 + 4 + iVar3;
  local_1004[uVar1 & 0xffff] = param_3;
  FUN_361950d0((undefined2 *)local_1004,uVar1 + 1 & 0xffff,1);
  return;
}

