
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGamePoint(unsigned long,unsigned
   long,unsigned long,unsigned long,unsigned long,unsigned short,unsigned char) */

void __thiscall
IScavengerWorldNet::SendFieldGamePoint
          (IScavengerWorldNet *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,
          ulong param_5,ushort param_6,uchar param_7)

{
  uint *puVar1;
  undefined2 local_1004;
  ulong local_1002;
  ulong local_ffe;
  uchar local_ffa;
  ulong local_ff9;
  ulong local_ff5;
  ulong local_ff1;
  ushort local_fed;
  undefined4 local_4;
  
                    /* 0x1972a0  3300  ?SendFieldGamePoint@IScavengerWorldNet@@UAEXKKKKKGE@Z */
  local_4 = DAT_362abd90;
  puVar1 = TlsGetValue(_dwTlsIndex);
  FUN_361bb7c0(puVar1);
  local_ffe = param_2;
  local_1002 = param_1;
  local_ff5 = param_4;
  local_ffa = param_7;
  local_ff9 = param_3;
  local_1004 = 0x50;
  local_ff1 = param_5;
  local_fed = param_6;
  FUN_361950d0(&local_1004,0x19,1);
  return;
}

