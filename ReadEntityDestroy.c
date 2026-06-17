
/* public: void __thiscall CEntityMessage::ReadEntityDestroy(unsigned long &) */

void __thiscall CEntityMessage::ReadEntityDestroy(CEntityMessage *this,ulong *param_1)

{
                    /* 0x100810  2957  ?ReadEntityDestroy@CEntityMessage@@QAEXAAK@Z */
  CNetworkMessage::Rewind((CNetworkMessage *)(this + 4));
  *param_1 = *(ulong *)(this + 0x20);
  return;
}

