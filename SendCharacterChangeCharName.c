
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendCharacterChangeCharName(char *,unsigned
   char,unsigned short) */

void __thiscall
IScavengerWorldNet::SendCharacterChangeCharName
          (IScavengerWorldNet *this,char *param_1,uchar param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  ushort local_1004;
  CHAR local_1002 [4094];
  undefined4 local_4;
  
                    /* 0x195c40  3253  ?SendCharacterChangeCharName@IScavengerWorldNet@@UAEXPADEG@Z
                        */
  local_4 = DAT_362abd90;
  local_1004 = 0x1c;
  lstrcpyA(local_1002,param_1);
  iVar1 = lstrlenA(param_1);
  uVar2 = iVar1 + 4;
  local_1002[(iVar1 + 3U & 0xffff) - 2] = param_2;
  if (param_2 != '\0') {
    *(ushort *)(local_1002 + ((uVar2 & 0xffff) - 2)) = param_3;
    uVar2 = iVar1 + 6;
  }
  FUN_361950d0(&local_1004,uVar2 & 0xffff,1);
  return;
}

