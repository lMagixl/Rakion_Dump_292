
/* public: void __thiscall CNet::SetRelayPort(unsigned short const &) */

void __thiscall CNet::SetRelayPort(CNet *this,ushort *param_1)

{
                    /* 0x104340  3576  ?SetRelayPort@CNet@@QAEXABG@Z */
  *(ushort *)(this + 0x34) = *param_1;
  return;
}

