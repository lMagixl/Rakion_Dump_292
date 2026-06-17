
/* public: void __thiscall CNetworkLibrary::GameInactive(void) */

void __thiscall CNetworkLibrary::GameInactive(CNetworkLibrary *this)

{
                    /* 0xf3c40  1691  ?GameInactive@CNetworkLibrary@@QAEXXZ */
  CCommunicationInterface::IsNetworkEnabled(&_cmiComm);
  return;
}

