
/* public: __thiscall CNetworkMessage::~CNetworkMessage(void) */

void __thiscall CNetworkMessage::~CNetworkMessage(CNetworkMessage *this)

{
                    /* 0x105f40  453  ??1CNetworkMessage@@QAE@XZ */
  if (*(void **)(this + 4) != (void *)0x0) {
    FreeMemory(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

