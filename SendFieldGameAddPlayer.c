
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGameAddPlayer(unsigned short,char *)
    */

void __thiscall
IScavengerWorldNet::SendFieldGameAddPlayer(IScavengerWorldNet *this,ushort param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined2 local_1010;
  ushort local_100e;
  char local_100c [4096];
  undefined4 local_c;
  
  local_100e = param_1;
                    /* 0x197040  3292  ?SendFieldGameAddPlayer@IScavengerWorldNet@@UAEXGPAD@Z */
  _param_1 = (uint)param_1;
  local_c = DAT_362abd90;
  local_1010 = 0x4b;
  pcVar2 = local_100c;
  for (uVar1 = (uint)(local_100e >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar1 = local_100e & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar2 = *param_2;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_361950d0(&local_1010,_param_1 + 4 & 0xffff,1);
  return;
}

