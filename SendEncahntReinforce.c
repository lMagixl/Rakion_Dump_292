
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendEncahntReinforce(unsigned char,unsigned
   char,unsigned char,unsigned char *) */

void __thiscall
IScavengerWorldNet::SendEncahntReinforce
          (IScavengerWorldNet *this,uchar param_1,uchar param_2,uchar param_3,uchar *param_4)

{
  uchar *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uchar local_1004 [4];
  uchar local_1000;
  undefined4 local_4;
  
                    /* 0x1979b0  3274  ?SendEncahntReinforce@IScavengerWorldNet@@UAEXEEEPAE@Z */
  local_4 = DAT_362abd90;
  local_1004[2] = param_1;
  iVar2 = 0;
  local_1004[3] = param_2;
  local_1004[0] = 't';
  local_1004[1] = '\0';
  local_1000 = param_3;
  uVar3 = 5;
  if (param_3 != 0) {
    do {
      puVar1 = param_4 + iVar2;
      uVar4 = uVar3 & 0xffff;
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 1;
      local_1004[uVar4] = *puVar1;
    } while (iVar2 < (int)(uint)param_3);
  }
  FUN_361950d0((undefined2 *)local_1004,uVar3 & 0xffff,1);
  return;
}

