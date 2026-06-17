
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGameStagePoint(unsigned
   char,unsigned char,unsigned char,unsigned short *,unsigned long,unsigned long,unsigned
   long,unsigned long,unsigned long) */

void __thiscall
IScavengerWorldNet::SendFieldGameStagePoint
          (IScavengerWorldNet *this,uchar param_1,uchar param_2,uchar param_3,ushort *param_4,
          ulong param_5,ulong param_6,ulong param_7,ulong param_8,ulong param_9)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_1004;
  uchar local_1000;
  undefined4 local_4;
  
                    /* 0x197350  3304
                       ?SendFieldGameStagePoint@IScavengerWorldNet@@UAEXEEEPAGKKKKK@Z */
  local_4 = DAT_362abd90;
  puVar2 = TlsGetValue(_dwTlsIndex);
  FUN_361bb7c0(puVar2);
  local_1004._3_1_ = param_2;
  local_1004._0_2_ = 0x53;
  local_1004._2_1_ = param_1;
  local_1000 = param_3;
  uVar3 = 5;
  if (param_3 != '\0') {
    uVar4 = (uint)param_3;
    do {
      uVar1 = *param_4;
      uVar5 = uVar3 & 0xffff;
      uVar3 = uVar3 + 2;
      param_4 = param_4 + 1;
      uVar4 = uVar4 - 1;
      *(ushort *)((int)&local_1004 + uVar5) = uVar1;
    } while (uVar4 != 0);
  }
  *(ulong *)((int)&local_1004 + (uVar3 & 0xffff)) = param_5;
  *(ulong *)((int)&local_1004 + (uVar3 + 4 & 0xffff)) = param_6;
  *(ulong *)((int)&local_1004 + (uVar3 + 8 & 0xffff)) = param_7;
  *(ulong *)((int)&local_1004 + (uVar3 + 0xc & 0xffff)) = param_8;
  *(ulong *)((int)&local_1004 + (uVar3 + 0x10 & 0xffff)) = param_9;
  FUN_361950d0((undefined2 *)&local_1004,uVar3 + 0x14 & 0xffff,1);
  return;
}

