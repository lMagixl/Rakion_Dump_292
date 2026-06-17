
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendChannelChangeMaxCharacter(unsigned char)
    */

void __thiscall
IScavengerWorldNet::SendChannelChangeMaxCharacter(IScavengerWorldNet *this,uchar param_1)

{
  undefined2 local_1004;
  uchar local_1002;
  undefined4 local_4;
  
                    /* 0x196060  3239  ?SendChannelChangeMaxCharacter@IScavengerWorldNet@@UAEXE@Z */
  local_4 = DAT_362abd90;
  local_1004 = 0x27;
  local_1002 = param_1;
  FUN_361950d0(&local_1004,3,1);
  return;
}

