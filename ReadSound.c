
/* public: void __thiscall CEntityMessage::ReadSound(unsigned long &,unsigned char &,void *,long &)
    */

void __thiscall
CEntityMessage::ReadSound
          (CEntityMessage *this,ulong *param_1,uchar *param_2,void *param_3,long *param_4)

{
  CNetworkMessage *this_00;
  
                    /* 0x102010  2987  ?ReadSound@CEntityMessage@@QAEXAAKAAEPAXAAJ@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  *param_4 = *(ushort *)(this + 0x1c) - 1;
  CNetworkMessage::Read(this_00,param_2,1);
  CNetworkMessage::Read(this_00,param_3,*param_4);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

