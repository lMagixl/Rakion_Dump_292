
/* public: void __thiscall CNetworkLibrary::TogglePause(void) */

void __thiscall CNetworkLibrary::TogglePause(CNetworkLibrary *this)

{
                    /* 0xf3990  3837  ?TogglePause@CNetworkLibrary@@QAEXXZ */
  *(uint *)(*(int *)(this + 0x24) + 0x70) = (uint)(*(int *)(*(int *)(this + 0x24) + 0x70) == 0);
  return;
}

