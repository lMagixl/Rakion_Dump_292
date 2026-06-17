
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendPresentAccept(unsigned long,unsigned
   short) */

void __thiscall
IScavengerWorldNet::SendPresentAccept(IScavengerWorldNet *this,ulong param_1,ushort param_2)

{
  int iVar1;
  undefined2 local_1004;
  ulong local_1002;
  ushort local_ffe;
  undefined4 local_4;
  
                    /* 0x197830  3350  ?SendPresentAccept@IScavengerWorldNet@@UAEXKG@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x6c;
  local_1002 = param_1;
  local_ffe = param_2;
  iVar1 = (**(code **)(*(int *)this + 8))();
  *(ushort *)(iVar1 + 0x4914) = param_2;
  FUN_361950d0(&local_1004,8,1);
  return;
}

