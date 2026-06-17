
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall IScavengerWorldNet::SendFieldGameTunnelingOne(unsigned short,class
   CNetMessage &,unsigned char) */

void __thiscall
IScavengerWorldNet::SendFieldGameTunnelingOne
          (IScavengerWorldNet *this,ushort param_1,CNetMessage *param_2,uchar param_3)

{
  ushort uVar1;
  undefined3 in_stack_0000000d;
  undefined1 local_5f4 [512];
  CNetMessage local_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x19a0b0  3308
                       ?SendFieldGameTunnelingOne@IScavengerWorldNet@@QAEXGAAVCNetMessage@@E@Z */
  local_4 = DAT_362abd90;
  CNetMessage::CNetMessage(local_3f4);
  CNetMessage::Write(local_3f4,&param_1,2);
  CNetMessage::operator<<(local_3f4,param_2);
  uVar1 = CNetMessage::Read(local_3f4,local_5f4,0x200);
  (**(code **)(*(int *)this + 4))(_param_3,uVar1,local_5f4);
  return;
}

