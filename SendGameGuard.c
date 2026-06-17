
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendGameGuard(unsigned char *) */

void __thiscall IScavengerWorldNet::SendGameGuard(IScavengerWorldNet *this,uchar *param_1)

{
  undefined2 local_1004;
  undefined4 local_1002;
  undefined4 local_ffe;
  undefined4 local_ffa;
  undefined4 local_ff6;
  undefined4 local_4;
  
                    /* 0x1957b0  3321  ?SendGameGuard@IScavengerWorldNet@@UAEXPAE@Z */
  local_4 = DAT_362abd90;
  local_1002 = *(undefined4 *)param_1;
  local_ffe = *(undefined4 *)(param_1 + 4);
  local_ffa = *(undefined4 *)(param_1 + 8);
  local_ff6 = *(undefined4 *)(param_1 + 0xc);
  local_1004 = 0x10;
  FUN_361950d0(&local_1004,0x12,1);
  return;
}

