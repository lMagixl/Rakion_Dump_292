
/* public: void __thiscall CEntityMessage::ReadStartAnim(unsigned long &,long &,unsigned long &) */

void __thiscall
CEntityMessage::ReadStartAnim(CEntityMessage *this,ulong *param_1,long *param_2,ulong *param_3)

{
  CNetworkMessage *this_00;
  
                    /* 0x101aa0  2988  ?ReadStartAnim@CEntityMessage@@QAEXAAKAAJ0@Z */
  this_00 = (CNetworkMessage *)(this + 4);
  CNetworkMessage::Rewind(this_00);
  CNetworkMessage::Read(this_00,param_2,4);
  CNetworkMessage::Read(this_00,param_3,4);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

