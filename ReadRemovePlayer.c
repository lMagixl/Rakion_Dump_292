
/* public: void __thiscall CEntityMessage::ReadRemovePlayer(long &) */

void __thiscall CEntityMessage::ReadRemovePlayer(CEntityMessage *this,long *param_1)

{
                    /* 0x100900  2982  ?ReadRemovePlayer@CEntityMessage@@QAEXAAJ@Z */
  CNetworkMessage::Rewind((CNetworkMessage *)(this + 4));
  *param_1 = *(long *)(this + 0x20);
  return;
}

