
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __thiscall IScavengerWorldNet::SendFieldList(unsigned char,unsigned
   short,unsigned char,unsigned char,unsigned char,unsigned char,unsigned char,unsigned
   char,unsigned char) */

void __thiscall
IScavengerWorldNet::SendFieldList
          (IScavengerWorldNet *this,uchar param_1,ushort param_2,uchar param_3,uchar param_4,
          uchar param_5,uchar param_6,uchar param_7,uchar param_8,uchar param_9)

{
  undefined2 local_1004;
  uchar local_1002;
  ushort local_1001;
  uchar local_fff;
  uchar local_ffe;
  uchar local_ffd;
  uchar local_ffc;
  uchar local_ffb;
  uchar local_ffa;
  uchar local_ff9;
  undefined4 local_4;
  
                    /* 0x196890  3314  ?SendFieldList@IScavengerWorldNet@@UAEXEGEEEEEEE@Z */
  local_4 = DAT_362abd90;
  local_1002 = param_1;
  local_ffe = param_4;
  local_1001 = param_2;
  local_fff = param_3;
  local_ffb = param_7;
  local_ffd = param_5;
  local_ffc = param_6;
  local_1004 = 0x36;
  local_ffa = param_8;
  local_ff9 = param_9;
  FUN_361950d0(&local_1004,0xc,1);
  return;
}

