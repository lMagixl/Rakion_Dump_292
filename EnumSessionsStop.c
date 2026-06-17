
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CNetworkLibrary::EnumSessionsStop(void) */

void __thiscall CNetworkLibrary::EnumSessionsStop(CNetworkLibrary *this)

{
                    /* 0xf3d40  1579  ?EnumSessionsStop@CNetworkLibrary@@QAEXXZ */
  CCommunicationInterface::Unprepare(&_cmiComm);
  _DAT_362cce84 = 0;
  return;
}

