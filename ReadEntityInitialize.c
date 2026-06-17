
/* public: void __thiscall CEntityMessage::ReadEntityInitialize(unsigned long &,long &,void *,long
   &) */

void __thiscall
CEntityMessage::ReadEntityInitialize
          (CEntityMessage *this,ulong *param_1,long *param_2,void *param_3,long *param_4)

{
  CNetworkMessage *this_00;
  
                    /* 0x101750  2959  ?ReadEntityInitialize@CEntityMessage@@QAEXAAKAAJPAX1@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  *param_4 = *(ushort *)(this + 0x1c) - 4;
  CNetworkMessage::Read(this_00,param_2,4);
  CNetworkMessage::Read(this_00,param_3,*param_4);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

