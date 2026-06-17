
/* public: void __thiscall CNet::SendPacket_Unreliable(unsigned short const &,unsigned char const
   &,unsigned char const &,class CNetMessage &) */

void __thiscall
CNet::SendPacket_Unreliable
          (CNet *this,ushort *param_1,uchar *param_2,uchar *param_3,CNetMessage *param_4)

{
  int iStack_4;
  
  iStack_4 = 0;
  SendData(this,&iStack_4,param_1,param_2,param_3,param_4);
  return;
                    /* 0x105890  3349  ?SendPacket_Unreliable@CNet@@QAEXABGABE1AAVCNetMessage@@@Z */
}

