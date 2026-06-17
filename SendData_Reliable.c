
/* private: int __thiscall CNet::SendData_Reliable(unsigned short const &,unsigned char const
   &,unsigned char const &,class CNetMessage &) */

int __thiscall
CNet::SendData_Reliable
          (CNet *this,ushort *param_1,uchar *param_2,uchar *param_3,CNetMessage *param_4)

{
  int iVar1;
  int local_4;
  
                    /* 0x104e20  3267  ?SendData_Reliable@CNet@@AAEHABGABE1AAVCNetMessage@@@Z */
  local_4 = 1;
  iVar1 = SendData(this,&local_4,param_1,param_2,param_3,param_4);
  return iVar1;
}

