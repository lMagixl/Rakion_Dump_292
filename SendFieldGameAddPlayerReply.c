
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldGameAddPlayerReply(unsigned
   char,unsigned short,char *) */

void __thiscall
IScavengerWorldNet::SendFieldGameAddPlayerReply
          (IScavengerWorldNet *this,uchar param_1,ushort param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined2 local_1010;
  uchar local_100e;
  ushort local_100d;
  char local_100b [4095];
  undefined4 local_c;
  
  local_100d = param_2;
                    /* 0x1970b0  3293  ?SendFieldGameAddPlayerReply@IScavengerWorldNet@@UAEXEGPAD@Z
                        */
  _param_2 = (uint)param_2;
  local_c = DAT_362abd90;
  local_100e = param_1;
  local_1010 = 0x4c;
  pcVar2 = local_100b;
  for (uVar1 = (uint)(local_100d >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)param_3;
    param_3 = param_3 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar1 = local_100d & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar2 = *param_3;
    param_3 = param_3 + 1;
    pcVar2 = pcVar2 + 1;
  }
  FUN_361950d0(&local_1010,_param_2 + 5 & 0xffff,1);
  return;
}

