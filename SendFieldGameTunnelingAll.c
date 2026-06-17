
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __thiscall IScavengerWorldNet::SendFieldGameTunnelingAll(unsigned short,class
   CNetMessage &) */

void __thiscall
IScavengerWorldNet::SendFieldGameTunnelingAll
          (IScavengerWorldNet *this,ushort param_1,CNetMessage *param_2)

{
  ushort uVar1;
  undefined1 local_5f4 [512];
  CNetMessage local_3f4 [1008];
  undefined4 local_4;
  
                    /* 0x19a020  3306
                       ?SendFieldGameTunnelingAll@IScavengerWorldNet@@QAEXGAAVCNetMessage@@@Z */
  local_4 = DAT_362abd90;
  CNetMessage::CNetMessage(local_3f4);
  CNetMessage::Write(local_3f4,&param_1,2);
  CNetMessage::operator<<(local_3f4,param_2);
  uVar1 = CNetMessage::Read(local_3f4,local_5f4,0x200);
  (*(code *)**(undefined4 **)this)(uVar1,local_5f4);
  return;
}

