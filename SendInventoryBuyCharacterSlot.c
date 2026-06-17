
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendInventoryBuyCharacterSlot(unsigned
   char,unsigned short) */

void __thiscall
IScavengerWorldNet::SendInventoryBuyCharacterSlot
          (IScavengerWorldNet *this,uchar param_1,ushort param_2)

{
  int iVar1;
  undefined2 local_1004;
  uchar local_1002;
  ushort local_1001;
  undefined4 local_4;
  
                    /* 0x1963f0  3331  ?SendInventoryBuyCharacterSlot@IScavengerWorldNet@@UAEXEG@Z
                        */
  local_4 = DAT_362abd90;
  local_1004 = 0x35;
  local_1002 = param_1;
  iVar1 = 3;
  if (param_1 != '\0') {
    local_1001 = param_2;
    iVar1 = 5;
  }
  FUN_361950d0(&local_1004,iVar1,1);
  return;
}

