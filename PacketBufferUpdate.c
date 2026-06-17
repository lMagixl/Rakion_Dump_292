
/* public: void __thiscall CNet::PacketBufferUpdate(void) */

void __thiscall CNet::PacketBufferUpdate(CNet *this)

{
                    /* 0x1058b0  2739  ?PacketBufferUpdate@CNet@@QAEXXZ */
  PacketBufferRecvUpdate(this);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  PacketBufferReliableUpdate(this);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x14));
  return;
}

