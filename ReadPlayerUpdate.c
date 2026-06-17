
/* public: void __thiscall CEntityMessage::ReadPlayerUpdate(unsigned long &,class CNetworkMessage &)
    */

void __thiscall
CEntityMessage::ReadPlayerUpdate(CEntityMessage *this,ulong *param_1,CNetworkMessage *param_2)

{
                    /* 0x100890  2977
                       ?ReadPlayerUpdate@CEntityMessage@@QAEXAAKAAVCNetworkMessage@@@Z */
  CNetworkMessage::Rewind((CNetworkMessage *)(this + 4));
  CNetworkMessage::operator=(param_2,(CNetworkMessage *)(this + 4));
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

