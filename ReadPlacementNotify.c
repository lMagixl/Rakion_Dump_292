
/* public: void __thiscall CEntityMessage::ReadPlacementNotify(unsigned long &,unsigned char &) */

void __thiscall
CEntityMessage::ReadPlacementNotify(CEntityMessage *this,ulong *param_1,uchar *param_2)

{
                    /* 0x101b60  2975  ?ReadPlacementNotify@CEntityMessage@@QAEXAAKAAE@Z */
  CNetworkMessage::Rewind((CNetworkMessage *)(this + 4));
  CNetworkMessage::Read((CNetworkMessage *)(this + 4),param_2,1);
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

