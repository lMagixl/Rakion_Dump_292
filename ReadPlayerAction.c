
/* public: void __thiscall CEntityMessage::ReadPlayerAction(unsigned long &,class CPlayerAction &)
    */

void __thiscall
CEntityMessage::ReadPlayerAction(CEntityMessage *this,ulong *param_1,CPlayerAction *param_2)

{
                    /* 0x100980  2976  ?ReadPlayerAction@CEntityMessage@@QAEXAAKAAVCPlayerAction@@@Z
                        */
  CNetworkMessage::Rewind((CNetworkMessage *)(this + 4));
  FUN_361064e0((CNetworkMessage *)(this + 4));
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

