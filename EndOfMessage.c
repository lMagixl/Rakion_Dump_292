
/* public: int __thiscall CNetworkMessage::EndOfMessage(void) */

int __thiscall CNetworkMessage::EndOfMessage(CNetworkMessage *this)

{
                    /* 0x106040  1565  ?EndOfMessage@CNetworkMessage@@QAEHXZ */
  return (uint)(*(int *)(this + 0x10) <= *(int *)(this + 0xc) - *(int *)(this + 4));
}

