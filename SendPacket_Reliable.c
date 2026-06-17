
/* public: void __thiscall CNet::SendPacket_Reliable(unsigned short const &,unsigned char const
   &,unsigned char const &,class CNetMessage &) */

void __thiscall
CNet::SendPacket_Reliable
          (CNet *this,ushort *param_1,uchar *param_2,uchar *param_3,CNetMessage *param_4)

{
  int iStack_4;
  
  iStack_4 = 1;
  SendData(this,&iStack_4,param_1,param_2,param_3,param_4);
  return;
                    /* 0x1058a0  3348  ?SendPacket_Reliable@CNet@@QAEXABGABE1AAVCNetMessage@@@Z */
}

