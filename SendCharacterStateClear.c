
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendCharacterStateClear(unsigned
   char,unsigned short) */

void __thiscall
IScavengerWorldNet::SendCharacterStateClear(IScavengerWorldNet *this,uchar param_1,ushort param_2)

{
  int iVar1;
  undefined2 local_1004;
  uchar local_1002;
  ushort local_1001;
  undefined4 local_4;
  
                    /* 0x195bd0  3258  ?SendCharacterStateClear@IScavengerWorldNet@@UAEXEG@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x1b;
  local_1002 = param_1;
  iVar1 = 3;
  if (param_1 != '\0') {
    local_1001 = param_2;
    iVar1 = 5;
  }
  FUN_361950d0(&local_1004,iVar1,1);
  return;
}

