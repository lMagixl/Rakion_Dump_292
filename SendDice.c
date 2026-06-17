
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendDice(unsigned short *) */

void __thiscall IScavengerWorldNet::SendDice(IScavengerWorldNet *this,ushort *param_1)

{
  undefined2 local_1004;
  ushort local_1002;
  ushort local_1000;
  ushort local_ffe;
  ushort local_ffc;
  ushort local_ffa;
  ushort local_ff8;
  undefined4 local_4;
  
                    /* 0x1966e0  3270  ?SendDice@IScavengerWorldNet@@UAEXPAG@Z */
  local_4 = DAT_362abd90;
  local_1002 = *param_1;
  local_1000 = param_1[1];
  local_ffe = param_1[2];
  local_ffc = param_1[3];
  local_ffa = param_1[4];
  local_ff8 = param_1[5];
  local_1004 = 0x79;
  FUN_361950d0(&local_1004,0xe,1);
  return;
}

