
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldCreate(char *,char *,char *,unsigned
   char,unsigned char,unsigned char,unsigned short,unsigned char,unsigned char,unsigned
   char,unsigned char) */

void __thiscall
IScavengerWorldNet::SendFieldCreate
          (IScavengerWorldNet *this,char *param_1,char *param_2,char *param_3,uchar param_4,
          uchar param_5,uchar param_6,ushort param_7,uchar param_8,uchar param_9,uchar param_10,
          uchar param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort local_1004;
  CHAR local_1002 [4094];
  undefined4 local_4;
  
                    /* 0x196a50  3288  ?SendFieldCreate@IScavengerWorldNet@@UAEXPAD00EEEGEEEE@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x3b;
  lstrcpyA(local_1002,param_1);
  iVar2 = lstrlenA(param_1);
  lstrcpyA(local_1002 + ((iVar2 + 3U & 0xffff) - 2),param_2);
  iVar3 = lstrlenA(param_2);
  uVar1 = iVar2 + 4 + iVar3;
  lstrcpyA(local_1002 + ((uVar1 & 0xffff) - 2),param_3);
  iVar2 = lstrlenA(param_3);
  uVar1 = uVar1 + 1 + iVar2;
  local_1002[(uVar1 & 0xffff) - 2] = param_4;
  local_1002[(uVar1 + 1 & 0xffff) - 2] = param_5;
  local_1002[(uVar1 + 2 & 0xffff) - 2] = param_6;
  *(ushort *)(local_1002 + ((uVar1 + 3 & 0xffff) - 2)) = param_7;
  local_1002[(uVar1 + 5 & 0xffff) - 2] = param_8;
  local_1002[(uVar1 + 6 & 0xffff) - 2] = param_9;
  local_1002[(uVar1 + 7 & 0xffff) - 2] = param_10;
  local_1002[(uVar1 + 8 & 0xffff) - 2] = param_11;
  FUN_361950d0(&local_1004,uVar1 + 9 & 0xffff,1);
  return;
}

