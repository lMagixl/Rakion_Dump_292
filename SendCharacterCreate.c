
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendCharacterCreate(char *,unsigned
   char,unsigned char) */

void __thiscall
IScavengerWorldNet::SendCharacterCreate
          (IScavengerWorldNet *this,char *param_1,uchar param_2,uchar param_3)

{
  int iVar1;
  uchar local_1004 [4096];
  undefined4 local_4;
  
                    /* 0x195820  3254  ?SendCharacterCreate@IScavengerWorldNet@@UAEXPADEE@Z */
  local_4 = DAT_362abd90;
  local_1004[0] = '\x12';
  local_1004[1] = '\0';
  lstrcpyA((LPSTR)(local_1004 + 2),param_1);
  iVar1 = lstrlenA(param_1);
  local_1004[iVar1 + 3U & 0xffff] = param_2;
  local_1004[iVar1 + 4U & 0xffff] = param_3;
  FUN_361950d0((undefined2 *)local_1004,iVar1 + 5U & 0xffff,1);
  return;
}

